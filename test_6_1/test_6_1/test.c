#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




//
//int main()
//{
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));//48 = 3*4*sizeof(int)
//	printf("%d\n", sizeof(a[0][0]));//4 - a[0][0] - �ǵ�һ�е�һ��Ԫ��
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0] + 1));//4 ���ͣ�a[0]��Ϊ��������û�е�������sizeof�ڲ���
//									//Ҳûȡ��ַ,����a[0]���ǵ�һ�е�һ����ĵ�ַ
//									//a[0]+1,���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 - ���ͣ�*(a[0] + 1)�ǵ�һ�еڶ���Ԫ��
//
//	printf("%d\n", sizeof(a + 1));//4 - ���ͣ�a�Ƕ�ά���������������û��ȡ��ַ
//	//Ҳû�е�������sizeof�ڲ�,����a�ͱ�ʾ��ά������Ԫ�صĵ�ַ��������һ�еĵ�ַ
//	//a + 1���Ƕ�ά����ڶ��еĵ�ַ
//
//	printf("%d\n", sizeof(*(a + 1)));//16 ���ͣ�a+1�ǵڶ��еĵ�ַ������*��a+1����ʾ�ڶ���
//	//���Լ���ľ��ǵ�2�еĴ�С
//
//	printf("%d\n", sizeof(&a[0] + 1));//4 ���ͣ�a[0]�ǵ�һ�е���������
//	//&a[0]ȡ���ľ��ǵ�һ�еĵ�ַ,&a[0]+1 ���ǵڶ��еĵ�ַ
//
//	printf("%d\n", sizeof(*(&a[0] + 1)));//&a[0]+1 ���ǵڶ��еĵ�ַ
//	//*(&a[0]+1) ���ǵڶ��У����Լ���ĵڶ��еĵ�ַ
//
//	printf("%d\n", sizeof(*a));//16 ���ͣ�a��Ϊ��ά�������������û��&��û�е�������sizeof�ڲ�
//	//a������Ԫ�صĵ�ַ������һ�еĵ�ַ������*a���ǵ�һ�У�������ǵ�һ�еĴ�С
//
//	printf("%d\n", sizeof(a[3]));//16 ���ͣ�a[3]��ʵ�ǵ����е�������������еĻ���
//	//������ʵ�����ڣ�Ҳ��ͨ�����ͼ����С��
//	printf("%d\n", sizeof(a[-1]));
//
//	return 0;
//}


//int main()
//{
//	short s = 5;
//	int a = 4;
//	printf("%d\n", sizeof(s = a + 6));//2
//	printf("%d\n", s);//5
//
//	return 0;
//}


//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//
//    return 0;
//}


//����Ľ����ʲô��

//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//
//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//
//    printf("%x,%x", ptr1[-1], *ptr2);
//    return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//    return 0;
//}

//
//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p = a;//int (*)[5]
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    //?
//
//    return 0;
//}


//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}


int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;

	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}












