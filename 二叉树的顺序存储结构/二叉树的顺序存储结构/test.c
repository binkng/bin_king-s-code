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
	printf("������������Ľ��ĸ�����\n");
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("�������%d���ڵ��Ԫ��ֵ��", i + 1);
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