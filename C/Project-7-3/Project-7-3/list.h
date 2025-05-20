#pragma once
//�ӿ��ļ�
#ifndef LIST_H_
	#define LIST_H_
#include <stdbool.h>

#define TSIZE 45

//�ض���������
struct film {
	char title[TSIZE];
	int rating;
};
//һ�����Ͷ���
typedef struct film Item;

typedef struct node {
	Item item;
	struct node* next;
}Node;//����

typedef Node *List;

//����ԭ��

//������	��ʼ��һ������    
//ǰ��������plistָ��һ������
//���������������ʼ��Ϊ��
void InitializeList(List* plist);

//������	ȷ�������Ƿ�Ϊ�գ�plistָ��һ���ѳ�ʼ��������
//�����������������Ϊ�գ��ú�������true�����򷵻�false
bool ListIsEmpty(const List* plist);

//������	ȷ�������Ƿ�������plistָ��һ���ѳ�ʼ��������
//������������������������ú�������true�����򷵻�false
bool ListIsFull(const List* plist);

//������	ȷ������������plistָ��һ���ѳ�ʼ��������
//����������������������
unsigned ListItemCount(const List* plist);

//������	������ĩβ����
// ǰ��������item�Ǵ������������plistָ��һ���ѳ�ʼ��������
//�������������������ӣ������ӵ�����ĩβ����������true������������false
bool AddItem(Item item, List* plist);

//������	�Ѻ��������������ÿһ��
//			plistָ��һ���ѳ�ʼ��������
// 			pfunָ��һ���������ú�������һ��Item���͵Ĳ������޷���ֵ
//����������pfunָ��ĺ��������������ÿһ��һ��
void Traverse(const List* plist, void(*pfun)(Item item));

//������	�ͷ��ѷ�����ڴ�
//			plistָ��һ���ѳ�ʼ��������
//�����������ͷ�Ϊ�������������ڴ棬��������Ϊ��
void EmptyTheList(List* plist);



#endif	
