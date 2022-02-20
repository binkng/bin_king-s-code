#include<stdio.h>
#define MaxSize 100
typedef int SqBiTree[MaxSize];
void InitTree(SqBiTree S)
{
	for (int i = 0; i < MaxSize; i++)
	{
		S[i] = 0;
	}
}
int CreatTree(SqBiTree S)
{
	printf("请输入二叉树的结点的个数：\n");
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("请输入第%d各节点的元素值：", i + 1);
		scanf("%d", &S[i]);
	}
	return 0;
}
int main()
{
	SqBiTree S;
	InitTree(S);
	CreatTree(S);
	return 0;
}