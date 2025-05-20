#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
//二叉树接口

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
	struct treenode* left;//左分支
	struct treenode* right;//右分支

}TreeNode;

typedef struct tree
{
	TreeNode * root;
	int size;//二叉树项数
}Tree;

//函数原型

//操作：	初始化一个树    
//前置条件：ptree指向一个树
//后置条件：树初始化为空
void InitializeTree(Tree* ptree);

//操作：	确定树是否为空
//前提条件：ptree指向一个已初始化的树
//后置条件：如果树为空，该函数返回true，否则返回false
bool TreeIsEmpty(const Tree* ptree);

//操作：	确定树是否已满
//前置条件：ptree指向一个已初始化的树
//后置条件：如果树已满，该函数返回true，否则返回false
bool TreeIsFull(const Tree* ptree);

//操作：	确定树项数
//前置条件：ptree指向一个已初始化的树
//后置条件：返回树项数
unsigned TreeItemCount(const Tree* ptree);

//操作：	在树中添加项，
//前置条件：pi是待添加项地址，ptree指向一个已初始化的树
//后置条件：如果可以添加，该项被添加到树，函数返回true；否则树不变，函数返回false
bool AddItem(const Item* pi, Tree* ptree);

//操作：	从树中删除项，
//前置条件：pi是待删除项地址,ptree指向一个已初始化的树
//后置条件：成功删除，函数返回true，否则树不变，函数返回false
bool DeleteItem(const Item* pi, Tree* ptree);

//操作：	在树中查找一个项
//前置条件：pi是待查找项地址，ptree指向一个已初始化的树
//后置条件：如果找到该项，函数返回true，否则返回false
bool InTree(const Item* pi, const Tree* ptree);


//操作：	遍历树
//前置条件：ptree指向一个已初始化的树，pfun指向一个函数，该函数接受一个Item类型的参数,无返值
//后置条件：ptree中的每个项都调用一次pfun指向的函数
void Traverse(const Tree* ptree, void(*pfun)(Item item));

//操作：	释放已分配的内存
//前置条件：ptree指向一个已初始化的树
//后置条件：释放为树分配的所有内存，树设置为空
void EmptyTheTree(Tree* ptree);



#endif