//#include<stdio.h>


//void swap(int *x,int *y)
//{
//	int z;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//int main()
//{
//	
//	int a = 5;
//	int b = 2;
//	
//	swap( &a, &b);
//	printf("a=%d b=%d", a, b);
//
//
//
//	return 0;
//}
// 
// 
// 
// 
// 交换两个整型变量 但不引入第三个变量

//       算法二

//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;// 得到的是a的值
//	a = a - b;// 得到的是b的值
//	printf("%d %d\n", a, b);
//	return 0;
//}//注： 该算法会有溢出问题
//int 4个字节 32bit位 最大值
//                             经典算法（^位异或运算)
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;  //^（按二进制）位异或（就是二进制的每一位进行运算相同为0不同为1） 相同为0 相异为1
//	b = a ^ b;  //并且不会出现溢出
//	a = a ^ b;
//
//	printf("%d %d", a, b);
//	return 0;
//}// 注意该算法可读性差 执行效率低 


 