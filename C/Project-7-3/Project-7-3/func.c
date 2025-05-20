#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
//ʵ���ļ����������壩
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

//�ֲ�����ԭ��
static void CopyToNode(Item item, Node* pnode);

//�ӿں���
//��ʼ���б�
void InitializeList(List* plist)
{
	*plist = NULL;
}

//�ж��б��Ƿ�Ϊ��
bool ListIsEmpty(const List* plist)
{
	if(*plist == NULL)
		return true;
	else
		return false;
}

//�ж��б��Ƿ�����
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

//��ȡ�б��е�����
unsigned int ListItemCount(const List* plist)
{
	unsigned int count = 0;
	Node* pnode=*plist;//ָ���һ���ڵ�

	while (pnode != NULL)
	{
		++count;
		pnode = pnode->next;//������һ�����
	}
	return count;
}

//�����洢��Ľڵ㣬�����½ڵ���ӵ�plistָ�������ĩβ
bool AddItem(Item item, List* plist)
{
	Node* pnew;
	Node*scan=*plist;

	pnew=(Node*)malloc(sizeof(Node));//�����ڴ�
	if(pnew == NULL)
		return false;//ʧ��ʱ�˳�����
	CopyToNode(item, pnew);
	pnew->next = NULL;

	if(scan == NULL)//�������ʰ��½ڵ㣨pnew����Ϊͷ�ڵ�
		*plist = pnew;
	else
	{
		while(scan->next != NULL)
			scan = scan->next;//��λ������ĩβ
		scan->next = pnew;//���½ڵ���ӵ�����ĩβ
	}

	return true;
}


//����ÿ���ڵ㲢ִ��pfunָ��ĺ���
void Traverse(const List* plist, void(*pfun)(Item item))
{
	Node *pnode=*plist;//ָ���һ���ڵ�(����ʼ)

	while (pnode != NULL)
	{
		pfun(pnode->item);//���ú���
		pnode = pnode->next;//��һ�����
	}
}

//�ͷ�������ռ�õ��ڴ�,��������ΪNULL
void EmptyTheList(List* plist)
{
	Node *ptemp=*plist;//ָ���һ���ڵ�(����ʼ)
	while (ptemp != NULL)
		free(ptemp);//�ͷ��ڴ�
	ptemp =ptemp->next;//��һ�ڵ�
}

//�ֲ���������
static void CopyToNode(Item item, Node* pnode)
{
	pnode->item = item;//�����ṹ

}