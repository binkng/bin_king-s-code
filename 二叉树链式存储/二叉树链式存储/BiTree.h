#include<stdio.h>
#include<stdlib.h>
#define error 0
#define OK 1
typedef struct BiNode
{
	char data;
	struct BiNode* Lchild, * Rchild;
}BiNode,*BiTree;
int InitTree(BiTree*);//  ����һ����������ʼ����