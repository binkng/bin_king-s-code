//// 求字符串长度
//#include<stdio.h>
//#include<assert.h>
////  strlen()函数的函数原型
//// size_t strlen(const char* string);
//// size_t==unsigned int
//// 算法一 计数器
////int my_strlen(const char* arr)
////{
////	assert(arr);
////	int count = 0;
////	while (*arr++)
////	{
////		count++;
////	}
////	return count;
////}
//
//// 算法二 指针运算
////int my_strlen(const char* arr)
////{
////	assert(arr);
////	char* left = arr;
////	char* right = arr;
////	while (*right)// 注意不能将++也写进条件中（*right++）
////	{
////		right++;
////	}
////	return right - left;
////}
////  算法三 递归实现
//// 把大事化小
////my_strlen(absdef)
////1+my_strlen(bsdef)
//// 1+1+my_strlen(sdef)
////1+1+1+my_strlen(def)
////1+1+1+1=my_strlen(ef)
////1+1+1+1+1+my_strlen(f)
////1+1+1+1+1+1+my_strlen(\0)
//int my_strlen(const char* arr)
//{
//	//assert(arr);
//	if (*arr)
//		return 1 + my_strlen(arr+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int ret=my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}