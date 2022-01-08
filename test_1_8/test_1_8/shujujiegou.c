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
////匿名结构体
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
	printf("%s", name);//  注意：%s 需要的是char* 的参数 
	return 0;
}