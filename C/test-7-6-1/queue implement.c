//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma warning( disable : 6031)
//实现文件

#include <stdio.h>
#include <stdlib.h>
#include "queue port.h"


//局部函数原型
static void CopyToNode(Item item, Node* pnode);
static void CopyToItem(Node* pn, Item* pi);


//队列首尾项都设置为NULL，项数设置为0
void InitializeQueue(Queue* pqueue)
{
	pqueue->front = NULL;
	pqueue->rear = NULL;
	pqueue->count = 0;
}

//通过检查count值来确定队列是否为空
bool QueueIsEmpty(const Queue* pqueue)
{
	return pqueue->count == 0;
}

//通过检查count值来确定队列是否已满
bool QueueIsFull(const Queue* pqueue)
{
	return pqueue->count == MAXQUEUE;
}

//count值即为项数
unsigned QueueItemCount(const Queue* pqueue)
{
	return pqueue->count;
}

//操作：	在队列末尾添加项，
//前置条件：item是待添加至队列的项，pqueue指向一个已初始化的队列
//后置条件：如果可以添加，该项被添加到队列末尾，函数返回true；否则队列不变，函数返回false
bool Enqueue(Item item, Queue* pqueue)
{
	Node* pnew;
	pnew = (Node*)malloc(sizeof(Node));
	if (pnew == NULL)
	{
		fprintf(stderr, "Unable to allocate memory!\n");
		exit(1);
	}
	CopyToNode(item, pnew);
	pnew->next = NULL;
	if (QueueIsEmpty(pqueue))
		pqueue->front = pnew;//如果队列为空，新节点即为队首
	else
		pqueue->rear->next = pnew;//否则，将新节点添加到队尾
	pqueue->rear = pnew;//新节点即为队尾
	pqueue->count++;


	return true;
}

//操作：	在队列开头删除项，
//前置条件：pqueue指向一个已初始化的队列
//后置条件：如果队列不为空，队列首项将拷贝到pitem并被删除，函数返回true；
			//如果队列为空，函数返回false，如果队列因此操作为空，将队列重置为空
bool Dequeue(Item* pitem, Queue* pqueue)
{
	Node* pt;

	if (QueueIsEmpty(pqueue))
		return false;
	CopyToItem(pqueue->front, pitem);
	pt = pqueue->front;
	pqueue->front = pqueue->front->next;
	free(pt);
	pqueue->count--;
	if (pqueue->count == 0)
		pqueue->rear = NULL;

	return true;
}

//操作：	释放已分配的内存
//			pqueue指向一个已初始化的队列
//后置条件：释放为队列分配的所有内存，队列设置为空
void EmptyTheQueue(Queue* pqueue)
{
	Item psave;
	while (!QueueIsEmpty(pqueue))
		Dequeue(&psave, pqueue);
}



//局部函数定义
static void CopyToNode(Item item, Node* pnode)
{
	pnode->item = item;//拷贝项到节点
}

static void CopyToItem(Node* pn, Item* pi)
{
	*pi = pn->item;//拷贝节点到项
}