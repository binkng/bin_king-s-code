//#include<stdio.h>
////  访问一个结构的成员
////  .   结构体。成员名
////  ->   结构体指针->成员名
//
//
//
//
//
//
//
//
//
//
////学生
////创建一个结构体类型-struct stu
//struct stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//
//
//int main()
//{
//	int a = 0;
//	struct stu s1 = { "彬",21,"294u385" };//使用struct stu这个类型创建了一个学生对象s1，并初始化
//	// 法一                  /*printf("%s\n", s1.name);
//	                     printf("%d\n", s1.age);
//	                     printf("%s\n", s1.id);
//	//结构体变量.成员名  .操作符
//	//法二
//	struct stu* ps = &s1;//  注意将struct stu看作结构体类型 等同于整型浮点型 字符型
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	//  法三
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//  结构体指针->成员名
//	return 0;
//}