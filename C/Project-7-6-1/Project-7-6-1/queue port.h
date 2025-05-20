#pragma once
//�ӿ��ļ�


#ifndef QUEUE_H_
	#define QUEUE_H_
#include <stdbool.h>

#define MAXQUEUE 10

//����������
typedef struct item {
	long arrive; 
	int processtime; 
}Item;



//����ڵ�����
typedef struct node {
	Item item;
	struct node* next;
}Node;

//�����������
typedef struct queue {
	Node* front;//ָ����������ָ��
	Node* rear;//ָ�����β���ָ��
	int count;//����
}Queue;

//����ԭ��

//������	��ʼ��һ������    
//ǰ��������pqueueָ��һ������
//�������������г�ʼ��Ϊ��
void InitializeQueue(Queue* pqueue);

//������	ȷ�������Ƿ�Ϊ��
//ǰ��������pqueueָ��һ���ѳ�ʼ���Ķ���
//�����������������Ϊ�գ��ú�������true�����򷵻�false
bool QueueIsEmpty(const Queue* pqueue);

//������	ȷ�������Ƿ�����
//ǰ��������pqueueָ��һ���ѳ�ʼ���Ķ���
//������������������������ú�������true�����򷵻�false
bool QueueIsFull(const Queue* pqueue);

//������	ȷ����������
//ǰ��������pqueueָ��һ���ѳ�ʼ���Ķ���
//�������������ض�������
unsigned QueueItemCount(const Queue* pqueue);

//������	�ڶ���ĩβ����
//ǰ��������item�Ǵ���������е��pqueueָ��һ���ѳ�ʼ���Ķ���
//�������������������ӣ������ӵ�����ĩβ����������true��������в��䣬��������false
bool Enqueue(Item item, Queue* pqueue);

//������	�ڶ��п�ͷɾ���
//ǰ��������pqueueָ��һ���ѳ�ʼ���Ķ���
//����������������в�Ϊ�գ��������������pitem����ɾ������������true��
			//�������Ϊ�գ���������false�����������˲���Ϊ�գ�����������Ϊ��
bool Dequeue(Item* pitem, Queue* pqueue);

//������	�ͷ��ѷ�����ڴ�
//			pqueueָ��һ���ѳ�ʼ���Ķ���
//�����������ͷ�Ϊ���з���������ڴ棬��������Ϊ��
void EmptyTheQueue(Queue* pqueue);



#endif	


