//// 编写一个函数reverse_string(char * string)(递归实现)
////实现：将参数字符串中的字符反向排列
////要求：不能使用c函数库的字符串操作函数
//#include<stdio.h>
// //                  算法一（正常写 不考虑要求）(非递归)
////#include<string.h>
////void reverse_string(char str[])
////{
////	int l = 0;
////	int r = strlen(str) - 1;
////	while (l < r)
////	{
////		char t = '\0';
////		t = str[l];
////		str[l] = str[r];
////		str[r] = t;
////		l++;
////		r--;
////	}
////}
////                  
////                           算法二
//int my_strlen( char str[])  //括号中也可以改成char* str(首元素地址）括号中str[]就是数组str的首元素地址 
////  利用指针来求字符串长度
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
// 
////void reverse_string(char str[])
////{
////	int l = 0;
////	int r = my_strlen(str) - 1;   //   自己定义一个函数来求字符串的长度
////		while (l < r)
////	{
////		char t = '\0';
////		t = str[l];
////		str[l] = str[r];
////		str[r] = t;
////		l++;
////		r--;
////	}
////}
// //                                 算法三
//void reverse_string(char str[])
//{
//	char tmp = str[0];
//	int len = my_strlen(str);
//	str[0] = str[len - 1];
//	str[len - 1] = '\0';// 使得剩下要递归的字符可以构成以\0结尾的字符串
//	if (my_strlen(str + 1) >= 2)//  剩下要递归的字符串只要还有2或2以上个字符就继续递归
//		reverse_string(str + 1);
//	str[len - 1] = tmp;
//
//}
//int main()
//{
//	char str[] = {"abcdef"};
//	//scanf("%s", str);
//	printf("%s\n", str);
//	reverse_string(str);
//	printf("%s\n", str);
//	return 0;
//}




