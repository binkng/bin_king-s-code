#include"StackLnode.h"
int main()
{
	Stacklist S;
	Initstack(&S);
	int n = 0;
	printf("������Ҫ��ջԪ�صĸ�����");
	scanf("%d", &n);
	StackPush(&S,n);
	Print(S);
	int e = 0;
	StackOut(&S,&e);//  ��e�����ճ�ջԪ��
	printf("%d\n", e);
	Print(S);
	int ret = GetTop(S);
	printf("%d\n", ret);
	return 0;
}