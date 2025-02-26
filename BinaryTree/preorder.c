#include <stdio.h>
#include <stdlib.h>

typedef struct treenode{
    char c;
    struct treenode *left;
    struct treenode *right;
}TreeNode;
//中序遍历打印字符
void InOrderTrav(TreeNode* root){
    if(!root)
        return;
    InOrderTrav(root->left);
    printf("%c ",root->c);
    InOrderTrav(root->right);
}
//构建树
TreeNode* TreeBuilt(const char* str,int* pi){
    if(str[*pi]=='#'){
        (*pi)++;
        return NULL;
    }
    TreeNode* node=(TreeNode*)malloc(sizeof(TreeNode));
    node->c=str[*pi];
    (*pi)++;
    node->left=TreeBuilt(str, pi);
    node->right=TreeBuilt(str, pi);
    return node;
}
int main() {
    char str[100];
    scanf("%s", str);
    int i=0;
    TreeNode* tree=TreeBuilt(str, &i);
    InOrderTrav(tree);

    return 0;
}