#include"SqStack.h"
int main()
{
	SqStack S;
	Initstack(&S);
	int n = 0;
	printf("��������Ҫ��ջ��Ԫ�ظ�����");
	scanf("%d", &n);
	StackPush(&S,n);
	Print(S);
	int e = 0;  //�������ճ�ջ��Ԫ��  
	StackOut(&S, &e);
	printf("%d\n", e);
	Print(S);
	int ret1=JudgeStack(S);
	if (ret1)
		printf("ջΪ�գ�\n");
	printf("ջ��Ϊ�գ�\n");
	int ret2=Stacklength(S);
	printf("����Ϊ%d\n", ret2);
	ClearStack(&S);
	//ClearStack(S);//  ���� ����ô���ַ
	Print(S);
	DestroyStack(&S);
	return 0;
}