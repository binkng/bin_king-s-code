//#include<stdio.h>
//typedef struct Stu
//{
//	int a;
//	char b;
//}S,*Stu;
//int main()
//{
//	S s;
//	Stu sd;
//	sd = &s;
//	s.a = 6;
//	printf("%d\n", s.a);
//	printf("%d", sd->a);
//	
//	return 0;
//}
//#include<stdio.h>
////�����ṹ��
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//struct
//{
//	int a;
//	char b;
//	float c;
//}* px;
//int main()
//{
//	x.a = 1;
//	px = &x;
//	printf("%d \n", x.a);
//	printf("%d", px->a);
//	return 0;
//}

#include<stdio.h>
int main()
{
	char name = "chenbin";
	printf("%s", name);//  ע�⣺%s ��Ҫ����char* �Ĳ��� 
	return 0;
}