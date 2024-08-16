//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 10,20,30,40,50 };
//	int(* p)[] = &arr;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", *(* p + i));
//		printf("%d\n", ( * p)[i]);// 要特别注意*和[]优先级的关系
//		// p==&arr  *p==arr 首元素地址 **p==arr[0]
//	}
//	return 0;
//}