//#include<stdio.h>
//#include<stdlib.h>
////// 堆区
////// 手动申请的空间
////// 生命周期： 出生：手动申请  消亡 ：手动释放  free()函数（注意不能释放多次）
////
//int* AA()
//{
//	int* p = malloc(4);// 手动申请之后必须释放
//	// int* p = malloc(2);  
// //在堆区的越界问题 
// 只有在回收的时候才会知道越界的问题（即free之后会报越界错误）
//	*p = 100;
//	//free(p);
//	return p;
//}
//
//int main()
//{
////	int* p = malloc(4);//申请4个字节当整型来使用
////	*p = 100;
////	printf("%d\n", *p);
//
//
//
//	//char* p = malloc(4);//申请4个字节当字符型数组来使用
//	//p[0] = 'a';
//	//p[1] = 'b';
//	//p[2] = 'c';
//	//p[3] = 'd';
//	//printf("%c\n", p[0]);
//	//printf("%c\n", p[1]);
//	//printf("%c\n", p[2]);
//	//printf("%c\n", p[3]);
//
//	int* p1 = AA();
//	printf("%d\n", *p1);
//	printf("%d\n", *p1);
//	printf("%d\n", *p1);
//	free(p1);
//	printf("%d\n", *p1);
//	printf("%d\n", *p1);
//	return 0;
//}