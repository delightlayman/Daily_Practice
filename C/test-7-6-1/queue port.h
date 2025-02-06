//#pragma once
//接口文件


#ifndef QUEUE_H_
#define QUEUE_H_
#include <stdbool.h>

#define MAXQUEUE 10

//定义项类型
typedef struct item { int a; int b; }Item;



//定义节点类型
typedef struct node {
	Item item;
	struct node* next;
}Node;

//定义队列类型
typedef struct queue {
	Node* front;//指向队列首项的指针
	Node* rear;//指向队列尾项的指针
	int count;//计数
}Queue;

//函数原型

//操作：	初始化一个队列    
//前置条件：pqueue指向一个队列
//后置条件：队列初始化为空
void InitializeQueue(Queue* pqueue);

//操作：	确定队列是否为空
//前提条件：pqueue指向一个已初始化的队列
//后置条件：如果队列为空，该函数返回true，否则返回false
bool QueueIsEmpty(const Queue* pqueue);

//操作：	确定队列是否已满
//前置条件：pqueue指向一个已初始化的队列
//后置条件：如果队列已满，该函数返回true，否则返回false
bool QueueIsFull(const Queue* pqueue);

//操作：	确定队列项数
//前置条件：pqueue指向一个已初始化的队列
//后置条件：返回队列项数
unsigned QueueItemCount(const Queue* pqueue);

//操作：	在队列末尾添加项，
//前置条件：item是待添加至队列的项，pqueue指向一个已初始化的队列
//后置条件：如果可以添加，该项被添加到队列末尾，函数返回true；否则队列不变，函数返回false
bool Enqueue(Item item, Queue* pqueue);

//操作：	在队列开头删除项，
//前置条件：pqueue指向一个已初始化的队列
//后置条件：如果队列不为空，队列首项将拷贝到pitem并被删除，函数返回true；
			//如果队列为空，函数返回false，如果队列因此操作为空，将队列重置为空
bool Dequeue(Item* pitem, Queue* pqueue);

//操作：	释放已分配的内存
//			pqueue指向一个已初始化的队列
//后置条件：释放为队列分配的所有内存，队列设置为空
void EmptyTheQueue(Queue* pqueue);



#endif	


