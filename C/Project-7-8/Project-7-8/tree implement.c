#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)

//实现文件
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary tree.h"

//局部数据类型
typedef struct pair {
	TreeNode* parent;
	TreeNode* child;
}Pair;

//文件内静态函数原型
static TreeNode* MakeNode(const Item* pi);

static bool ToLeft(const Item* p1, const Item* p2);
static bool ToRight(const Item* p1, const Item* p2);

static Pair SeekItem(const Item* pi, const Tree* ptree);

static void InOrder(const TreeNode* root, void(*pfun)(Item item));

static void AddNode(TreeNode* newnode, TreeNode* root);
static void DeleteNode(TreeNode** ptr);
static void DeleteAllNodes(TreeNode* ptr);



//操作：	初始化一个树    
//前置条件：ptree指向一个树
//后置条件：树初始化为空
void InitializeTree(Tree* ptree)
{
	ptree->root = NULL;
	ptree->size = 0;
}

//操作：	确定树是否为空
//前提条件：ptree指向一个已初始化的树
//后置条件：如果树为空，该函数返回true，否则返回false
bool TreeIsEmpty(const Tree* ptree)
{
	if (ptree->root == NULL)
		return true;
	else
		return false;
}

//操作：	确定树是否已满
//前置条件：ptree指向一个已初始化的树
//后置条件：如果树已满，该函数返回true，否则返回false
bool TreeIsFull(const Tree* ptree)
{
	if (ptree->size == MAX_TREE_ITEMS)
		return true;
	else
		return false;
}

//操作：	确定树项数
//前置条件：ptree指向一个已初始化的树
//后置条件：返回树项数
unsigned TreeItemCount(const Tree* ptree)
{
	return ptree->size;
}

//操作：	在树中添加项，
//前置条件：pi是待添加项地址，ptree指向一个已初始化的树
//后置条件：如果可以添加，该项被添加到树，函数返回true；否则树不变，函数返回false
bool AddItem(const Item* pi, Tree* ptree)
{
	TreeNode* newnode;

	if (TreeIsFull(ptree))
	{
		fprintf(stderr, "Tree is full.\n");
		return false;
	}
	if (SeekItem(pi, ptree).child != NULL)
	{
		fprintf(stderr, "Duplicate item.\n");//相同项
		return false;
	}
	newnode = MakeNode(pi);//获得新节点地址
	//无法创建新节点
	if (newnode == NULL)
	{
		fprintf(stderr, "Cant allocate memory.\n");
		return false;
	}
	//可以创建新节点
	ptree->size++;
	if (ptree->root == NULL)//树为空
		ptree->root = newnode;//设置新节点为根节点
	else                    //树不为空
		AddNode(newnode, ptree->root);//添加节点到树中

	return true;
}

//操作：	从树中删除项，
//前置条件：pi是待删除项地址,ptree指向一个已初始化的树
//后置条件：成功删除，函数返回true，否则树不变，函数返回false
bool DeleteItem(const Item* pi, Tree* ptree)
{
	Pair look;

	look = SeekItem(pi, ptree);
	if (look.child == NULL)//无此项
		return false;
	if (look.parent == NULL)//无父节点即为根节点
		DeleteNode(&ptree->root);//删除根节点
	else if (look.parent->left == look.child)//左子节点
		DeleteNode(&look.parent->left);
	else//右子节点
		DeleteNode(&look.parent->right);

	ptree->size--;
	return true;

}

//操作：	在树中查找一个项
//前置条件：pi是待查找项地址，ptree指向一个已初始化的树
//后置条件：如果找到该项，函数返回true，否则返回false
bool InTree(const Item* pi, const Tree* ptree)
{
	return (SeekItem(pi, ptree).child == NULL)? false:true;
}


//操作：	遍历树
//前置条件：ptree指向一个已初始化的树，pfun指向一个函数，该函数接受一个Item类型的参数,无返值
//后置条件：ptree中的每个项都调用一次pfun指向的函数
void Traverse(const Tree* ptree, void(*pfun)(Item item))
{
	if (ptree->root != NULL)
		InOrder(ptree->root, pfun);

}

//操作：	释放已分配的内存
//前置条件：ptree指向一个已初始化的树
//后置条件：释放为树分配的所有内存，树设置为空
void EmptyTheTree(Tree* ptree)
{
	if (ptree->root != NULL)
		DeleteAllNodes(ptree->root);
	ptree->root = NULL;
	ptree->size = 0;
}


//局部函数定义
static TreeNode* MakeNode(const Item* pi)
{
	TreeNode* newnode;
	newnode = (TreeNode*)malloc(sizeof(TreeNode));
	if (newnode == NULL)
		fprintf(stderr, "Cant allocate memory.\n");
	else
		newnode->item = *pi;
		newnode->left = NULL;
		newnode->right = NULL;

		return newnode;
}

static bool ToLeft(const Item* i1, const Item* i2)
{
	int cmp;
	if ((cmp = strcmp(i1->petname, i2->petname)) < 0)
		return true;
	else if (cmp == 0 && strcmp(i1->petkind, i2->petkind) < 0)
		return true;
	else
		return false;
}

static bool ToRight(const Item* i1, const Item* i2)
{
	int cmp;
	if ((cmp = strcmp(i1->petname, i2->petname)) > 0)
		return true;
	else if (cmp == 0 && strcmp(i1->petkind, i2->petkind) > 0)
		return true;
	else
		return false;
}

static Pair SeekItem(const Item* pi, const Tree* ptree)
{
	Pair look;
	look.parent = NULL;
	look.child = ptree->root;

	if (look.child == NULL)
		return look;

	while (look.child != NULL)
	{
		if (ToLeft(pi, &look.child->item))
		{
			look.parent = look.child;
			look.child = look.child->left;

		}
		else if (ToRight(pi, &look.child->item))
		{
			look.parent = look.child;
			look.child = look.child->right;
		}
		else
			break;

	}
	return look;
}


static void InOrder(const TreeNode* root, void(*pfun)(Item item))
{
	if (root != NULL)
	{
		InOrder(root->left, pfun);
		(*pfun)(root->item);
		InOrder(root->right, pfun);
	}
}


static void AddNode(TreeNode* newnode, TreeNode* root)
{
	if (ToLeft(&newnode->item, &root->item))
	{
		if (root->left == NULL)                         //左子树为空
			root->left = newnode;						//把节点添加在此处							
		else
			AddNode(newnode, root->left);               //左子树不为空，递归判定
	}
	else if (ToRight(&newnode->item, &root->item))
	{
		if (root->right == NULL)
			root->right = newnode;
		else
			AddNode(newnode, root->right);
	}
	else                                                 //非左非右，即相同项
	{
		fprintf(stderr, "location error in AddNode()\n");
		exit(1);
	}

}





static void DeleteNode(TreeNode** ptr)
{
	TreeNode * temp;
	if ((*ptr)->left == NULL)
	{
		temp = *ptr;
		*ptr = (*ptr)->right;
		free(temp);
	
	}

	else if ((*ptr)->right == NULL)
	{
		temp = *ptr;
		*ptr = (*ptr)->left;
		free(temp);
	}
	else//被删除的节点右两个子节点
	{
		for (temp = (*ptr)->left; temp->right != NULL; temp = temp->right)
			continue;
		temp->right = (*ptr)->right;
		temp = *ptr;
		*ptr = (*ptr)->left;
		free(temp);
	}

}


static void DeleteAllNodes(TreeNode* root)
{
	TreeNode* pright;
	if (root != NULL)
	{
		pright = root->right;
		DeleteAllNodes(root->left);
		free(root);
		DeleteAllNodes(pright);
	}

}


