#pragma once
//接口文件
#ifndef LIST_H_
	#define LIST_H_
#include <stdbool.h>

#define TSIZE 45

//特定程序声明
struct film {
	char title[TSIZE];
	int rating;
};
//一般类型定义
typedef struct film Item;

typedef struct node {
	Item item;
	struct node* next;
}Node;//链表

typedef Node *List;

//函数原型

//操作：	初始化一个链表    
//前置条件：plist指向一个链表
//后置条件：链表初始化为空
void InitializeList(List* plist);

//操作：	确定链表是否为空，plist指向一个已初始化的链表
//后置条件：如果链表为空，该函数返回true，否则返回false
bool ListIsEmpty(const List* plist);

//操作：	确定链表是否已满，plist指向一个已初始化的链表
//后置条件：如果链表已满，该函数返回true，否则返回false
bool ListIsFull(const List* plist);

//操作：	确定链表项数，plist指向一个已初始化的链表
//后置条件：返回链表项数
unsigned ListItemCount(const List* plist);

//操作：	在链表末尾添加项，
// 前置条件：item是待添加至链表的项，plist指向一个已初始化的链表
//后置条件：如果可以添加，该项被添加到链表末尾，函数返回true；否则函数返回false
bool AddItem(Item item, List* plist);

//操作：	把函数作用于链表的每一项
//			plist指向一个已初始化的链表
// 			pfun指向一个函数，该函数接受一个Item类型的参数且无返回值
//后置条件：pfun指向的函数作用于链表的每一项一次
void Traverse(const List* plist, void(*pfun)(Item item));

//操作：	释放已分配的内存
//			plist指向一个已初始化的链表
//后置条件：释放为链表分配的所有内存，链表设置为空
void EmptyTheList(List* plist);



#endif	
