#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
//ʵ���ļ�

#include <stdio.h>
#include <stdlib.h>
#include "queue port.h"


//�ֲ�����ԭ��
static void CopyToNode(Item item, Node* pnode);
static void CopyToItem(Node* pn, Item* pi);


//������β�����ΪNULL����������Ϊ0
void InitializeQueue(Queue* pqueue)
{
	pqueue->front = NULL;
	pqueue->rear = NULL;
	pqueue->count = 0;
}

//ͨ�����countֵ��ȷ�������Ƿ�Ϊ��
bool QueueIsEmpty(const Queue* pqueue)
{
	return pqueue->count == 0;
}

//ͨ�����countֵ��ȷ�������Ƿ�����
bool QueueIsFull(const Queue* pqueue)
{
	return pqueue->count == MAXQUEUE;
}

//countֵ��Ϊ����
unsigned QueueItemCount(const Queue* pqueue)
{
	return pqueue->count;
}

//������	�ڶ���ĩβ����
//ǰ��������item�Ǵ���������е��pqueueָ��һ���ѳ�ʼ���Ķ���
//�������������������ӣ������ӵ�����ĩβ����������true��������в��䣬��������false
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
		pqueue->front = pnew;//�������Ϊ�գ��½ڵ㼴Ϊ����
	else
		pqueue->rear->next = pnew;//���򣬽��½ڵ���ӵ���β
	pqueue->rear = pnew;//�½ڵ㼴Ϊ��β
	pqueue->count++;


	return true;
}

//������	�ڶ��п�ͷɾ���
//ǰ��������pqueueָ��һ���ѳ�ʼ���Ķ���
//����������������в�Ϊ�գ��������������pitem����ɾ������������true��
			//�������Ϊ�գ���������false�����������˲���Ϊ�գ�����������Ϊ��
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

//������	�ͷ��ѷ�����ڴ�
//			pqueueָ��һ���ѳ�ʼ���Ķ���
//�����������ͷ�Ϊ���з���������ڴ棬��������Ϊ��
void EmptyTheQueue(Queue* pqueue)
{
	Item psave;
	while (!QueueIsEmpty(pqueue))
		Dequeue(&psave, pqueue);
}



//�ֲ���������
static void CopyToNode(Item item, Node* pnode)
{
	pnode->item = item;//������ڵ�
}

static void CopyToItem(Node* pn, Item* pi)
{
	*pi = pn->item;//�����ڵ㵽��
}