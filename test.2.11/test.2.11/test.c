#include<stdio.h>
int main()
{
	////�������͵�����
	//union Un
	//{
	//	char c;
	//	int i;
	//};
	////���ϱ����Ķ���
	//union Un un;
	////�������������Ĵ�С
	//printf("%d\n", (int)sizeof(un));// ������Ĵ�С������Ա�Ĵ�С
	//return 0;
	//union Un
	//{
	//	int i;
	//	char c;
	//};
	//union Un un;
	//// ��������Ľ����һ������
	//printf("%d\n", &(un.i));
	//printf("%d\n", &(un.c));
	///*un.i = 8;
	//printf("%d", un.c);*/
	//un.i = 0x11223344;
	//un.c = 0x55;
	//printf("%x\n", un.i);
	union Un1
	{
		char c[5];
		int i;
	};
	union Un2
	{
		short c[7];
		int i;
	};
	//��������Ľ����ʲô��
	printf("%d\n", (int)sizeof(union Un1));
	printf("%d\n", (int)sizeof(union Un2));
	return 0;
}