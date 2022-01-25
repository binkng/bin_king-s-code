#include"StackLnode.h"
int main()
{
	Stacklist S;
	Initstack(&S);
	int n = 0;
	printf("请输入要入栈元素的个数：");
	scanf("%d", &n);
	StackPush(&S,n);
	Print(S);
	int e = 0;
	StackOut(&S,&e);//  用e来接收出栈元素
	printf("%d\n", e);
	Print(S);
	int ret = GetTop(S);
	printf("%d\n", ret);
	return 0;
}