#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
//�������ӿ�

#ifndef BINARY_TREE_H
	#define BINARY_TREE_H
#include <stdbool.h>

#define SLEN 20
#define MAX_TREE_ITEMS 10

typedef struct item
{
	char petname[SLEN];
	char petkind[SLEN];
}Item;

typedef struct treenode
{
	Item item;
	struct treenode* left;//���֧
	struct treenode* right;//�ҷ�֧

}TreeNode;

typedef struct tree
{
	TreeNode * root;
	int size;//����������
}Tree;

//����ԭ��

//������	��ʼ��һ����    
//ǰ��������ptreeָ��һ����
//��������������ʼ��Ϊ��
void InitializeTree(Tree* ptree);

//������	ȷ�����Ƿ�Ϊ��
//ǰ��������ptreeָ��һ���ѳ�ʼ������
//���������������Ϊ�գ��ú�������true�����򷵻�false
bool TreeIsEmpty(const Tree* ptree);

//������	ȷ�����Ƿ�����
//ǰ��������ptreeָ��һ���ѳ�ʼ������
//����������������������ú�������true�����򷵻�false
bool TreeIsFull(const Tree* ptree);

//������	ȷ��������
//ǰ��������ptreeָ��һ���ѳ�ʼ������
//��������������������
unsigned TreeItemCount(const Tree* ptree);

//������	����������
//ǰ��������pi�Ǵ�������ַ��ptreeָ��һ���ѳ�ʼ������
//�������������������ӣ������ӵ�������������true�����������䣬��������false
bool AddItem(const Item* pi, Tree* ptree);

//������	������ɾ���
//ǰ��������pi�Ǵ�ɾ�����ַ,ptreeָ��һ���ѳ�ʼ������
//�����������ɹ�ɾ������������true�����������䣬��������false
bool DeleteItem(const Item* pi, Tree* ptree);

//������	�����в���һ����
//ǰ��������pi�Ǵ��������ַ��ptreeָ��һ���ѳ�ʼ������
//��������������ҵ������������true�����򷵻�false
bool InTree(const Item* pi, const Tree* ptree);


//������	������
//ǰ��������ptreeָ��һ���ѳ�ʼ��������pfunָ��һ���������ú�������һ��Item���͵Ĳ���,�޷�ֵ
//����������ptree�е�ÿ�������һ��pfunָ��ĺ���
void Traverse(const Tree* ptree, void(*pfun)(Item item));

//������	�ͷ��ѷ�����ڴ�
//ǰ��������ptreeָ��һ���ѳ�ʼ������
//�����������ͷ�Ϊ������������ڴ棬������Ϊ��
void EmptyTheTree(Tree* ptree);



#endif