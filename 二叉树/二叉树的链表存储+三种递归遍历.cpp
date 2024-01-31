#include<stdio.h>
#include<stdlib.h>
typedef char DataType;
typedef struct BinaryTreeNode
{
	DataType data;	// 当前节点值域
	struct BinaryTreeNode* left;	// 指向当前节点左孩子
	struct BinaryTreeNode* right;	// 指向当前节点右孩子
}BTNode;
BTNode* CreateNode(int x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	node->data = x;
	node->left = NULL;
	node->right = NULL;
	return node;
}
//中序遍历
void Inorder(BTNode* T)
{
	if (T != NULL)
	{
		Inorder(T->left);
		printf("%c ", T->data);
		Inorder(T->right);
	}
}
//前序遍历
void Preorder(BTNode* T)
{
	if (T != NULL)
	{
		printf("%c ", T->data);
		Preorder(T->left);
		Preorder(T->right);
	}
}
//后序遍历
void Postorder(BTNode* T)
{
	if (T != NULL)
	{
		Postorder(T->left);
		Postorder(T->right);
		printf("%c ", T->data);
	}
}
int main()
{
	BTNode* a = CreateNode('a');
	BTNode* b = CreateNode('b');
	BTNode* c = CreateNode('c');
	BTNode* d = CreateNode('d');
	BTNode* e = CreateNode('e');
	BTNode* f = CreateNode('f');
	BTNode* g = CreateNode('g');
	BTNode* h = CreateNode('h');
	BTNode* i = CreateNode('i');
	BTNode* j = CreateNode('j');
	BTNode* k = CreateNode('k');
	BTNode* l = CreateNode('l');
	a->left = b;
	a->right = i;
	b->left = c;
	b->right = f;
	c->left = d;
	c->right = e;
	f->left = g;
	f->right = h;
	i->left = j;
	i->right = l;
	j->left = k;
	printf("前序遍历\n");
	Preorder(a);
	printf("\n中序遍历\n");
	Inorder(a);
	printf("\n后序遍历\n");
	Postorder(a);
	return 0;
}