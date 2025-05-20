#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)

//ʵ���ļ�
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary tree.h"

//�ֲ���������
typedef struct pair {
	TreeNode* parent;
	TreeNode* child;
}Pair;

//�ļ��ھ�̬����ԭ��
static TreeNode* MakeNode(const Item* pi);

static bool ToLeft(const Item* p1, const Item* p2);
static bool ToRight(const Item* p1, const Item* p2);

static Pair SeekItem(const Item* pi, const Tree* ptree);

static void InOrder(const TreeNode* root, void(*pfun)(Item item));

static void AddNode(TreeNode* newnode, TreeNode* root);
static void DeleteNode(TreeNode** ptr);
static void DeleteAllNodes(TreeNode* ptr);



//������	��ʼ��һ����    
//ǰ��������ptreeָ��һ����
//��������������ʼ��Ϊ��
void InitializeTree(Tree* ptree)
{
	ptree->root = NULL;
	ptree->size = 0;
}

//������	ȷ�����Ƿ�Ϊ��
//ǰ��������ptreeָ��һ���ѳ�ʼ������
//���������������Ϊ�գ��ú�������true�����򷵻�false
bool TreeIsEmpty(const Tree* ptree)
{
	if (ptree->root == NULL)
		return true;
	else
		return false;
}

//������	ȷ�����Ƿ�����
//ǰ��������ptreeָ��һ���ѳ�ʼ������
//����������������������ú�������true�����򷵻�false
bool TreeIsFull(const Tree* ptree)
{
	if (ptree->size == MAX_TREE_ITEMS)
		return true;
	else
		return false;
}

//������	ȷ��������
//ǰ��������ptreeָ��һ���ѳ�ʼ������
//��������������������
unsigned TreeItemCount(const Tree* ptree)
{
	return ptree->size;
}

//������	����������
//ǰ��������pi�Ǵ�������ַ��ptreeָ��һ���ѳ�ʼ������
//�������������������ӣ������ӵ�������������true�����������䣬��������false
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
		fprintf(stderr, "Duplicate item.\n");//��ͬ��
		return false;
	}
	newnode = MakeNode(pi);//����½ڵ��ַ
	//�޷������½ڵ�
	if (newnode == NULL)
	{
		fprintf(stderr, "Cant allocate memory.\n");
		return false;
	}
	//���Դ����½ڵ�
	ptree->size++;
	if (ptree->root == NULL)//��Ϊ��
		ptree->root = newnode;//�����½ڵ�Ϊ���ڵ�
	else                    //����Ϊ��
		AddNode(newnode, ptree->root);//��ӽڵ㵽����

	return true;
}

//������	������ɾ���
//ǰ��������pi�Ǵ�ɾ�����ַ,ptreeָ��һ���ѳ�ʼ������
//�����������ɹ�ɾ������������true�����������䣬��������false
bool DeleteItem(const Item* pi, Tree* ptree)
{
	Pair look;

	look = SeekItem(pi, ptree);
	if (look.child == NULL)//�޴���
		return false;
	if (look.parent == NULL)//�޸��ڵ㼴Ϊ���ڵ�
		DeleteNode(&ptree->root);//ɾ�����ڵ�
	else if (look.parent->left == look.child)//���ӽڵ�
		DeleteNode(&look.parent->left);
	else//���ӽڵ�
		DeleteNode(&look.parent->right);

	ptree->size--;
	return true;

}

//������	�����в���һ����
//ǰ��������pi�Ǵ��������ַ��ptreeָ��һ���ѳ�ʼ������
//��������������ҵ������������true�����򷵻�false
bool InTree(const Item* pi, const Tree* ptree)
{
	return (SeekItem(pi, ptree).child == NULL)? false:true;
}


//������	������
//ǰ��������ptreeָ��һ���ѳ�ʼ��������pfunָ��һ���������ú�������һ��Item���͵Ĳ���,�޷�ֵ
//����������ptree�е�ÿ�������һ��pfunָ��ĺ���
void Traverse(const Tree* ptree, void(*pfun)(Item item))
{
	if (ptree->root != NULL)
		InOrder(ptree->root, pfun);

}

//������	�ͷ��ѷ�����ڴ�
//ǰ��������ptreeָ��һ���ѳ�ʼ������
//�����������ͷ�Ϊ������������ڴ棬������Ϊ��
void EmptyTheTree(Tree* ptree)
{
	if (ptree->root != NULL)
		DeleteAllNodes(ptree->root);
	ptree->root = NULL;
	ptree->size = 0;
}


//�ֲ���������
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
		if (root->left == NULL)                         //������Ϊ��
			root->left = newnode;						//�ѽڵ�����ڴ˴�							
		else
			AddNode(newnode, root->left);               //��������Ϊ�գ��ݹ��ж�
	}
	else if (ToRight(&newnode->item, &root->item))
	{
		if (root->right == NULL)
			root->right = newnode;
		else
			AddNode(newnode, root->right);
	}
	else                                                 //������ң�����ͬ��
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
	else//��ɾ���Ľڵ��������ӽڵ�
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


