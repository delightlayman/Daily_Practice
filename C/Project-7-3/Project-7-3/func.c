#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
//实现文件（函数定义）
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

//局部函数原型
static void CopyToNode(Item item, Node* pnode);

//接口函数
//初始化列表
void InitializeList(List* plist)
{
	*plist = NULL;
}

//判断列表是否为空
bool ListIsEmpty(const List* plist)
{
	if(*plist == NULL)
		return true;
	else
		return false;
}

//判断列表是否已满
bool ListIsFull(const List* plist)
{
	Node* ptemp;
	bool full;

	ptemp = (Node*)malloc(sizeof(Node));
	if(ptemp == NULL)
		full = true;
	else
		full = false;
	free(ptemp);
	return full;
}

//获取列表中的项数
unsigned int ListItemCount(const List* plist)
{
	unsigned int count = 0;
	Node* pnode=*plist;//指向第一个节点

	while (pnode != NULL)
	{
		++count;
		pnode = pnode->next;//设置下一个结点
	}
	return count;
}

//创建存储项的节点，并将新节点添加到plist指向的链表末尾
bool AddItem(Item item, List* plist)
{
	Node* pnew;
	Node*scan=*plist;

	pnew=(Node*)malloc(sizeof(Node));//分配内存
	if(pnew == NULL)
		return false;//失败时退出函数
	CopyToNode(item, pnew);
	pnew->next = NULL;

	if(scan == NULL)//空链表，故把新节点（pnew）设为头节点
		*plist = pnew;
	else
	{
		while(scan->next != NULL)
			scan = scan->next;//定位到链表末尾
		scan->next = pnew;//将新节点添加到链表末尾
	}

	return true;
}


//访问每个节点并执行pfun指向的函数
void Traverse(const List* plist, void(*pfun)(Item item))
{
	Node *pnode=*plist;//指向第一个节点(链表开始)

	while (pnode != NULL)
	{
		pfun(pnode->item);//调用函数
		pnode = pnode->next;//下一个结点
	}
}

//释放链表所占用的内存,设置链表为NULL
void EmptyTheList(List* plist)
{
	Node *ptemp=*plist;//指向第一个节点(链表开始)
	while (ptemp != NULL)
		free(ptemp);//释放内存
	ptemp =ptemp->next;//下一节点
}

//局部函数定义
static void CopyToNode(Item item, Node* pnode)
{
	pnode->item = item;//拷贝结构

}