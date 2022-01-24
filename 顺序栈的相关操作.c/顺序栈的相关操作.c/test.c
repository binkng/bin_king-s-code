#include"SqStack.h"
int main()
{
	SqStack S;
	Initstack(&S);
	int n = 0;
	printf("请输入想要入栈的元素个数：");
	scanf("%d", &n);
	StackPush(&S,n);
	Print(S);
	int e = 0;  //用来接收出栈的元素  
	StackOut(&S, &e);
	printf("%d\n", e);
	Print(S);
	int ret1=JudgeStack(S);
	if (ret1)
		printf("栈为空！\n");
	printf("栈不为空！\n");
	int ret2=Stacklength(S);
	printf("长度为%d\n", ret2);
	ClearStack(&S);
	//ClearStack(S);//  错误 必须得传地址
	Print(S);
	DestroyStack(&S);
	return 0;
}