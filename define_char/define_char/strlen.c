//// ���ַ�������
//#include<stdio.h>
//#include<assert.h>
////  strlen()�����ĺ���ԭ��
//// size_t strlen(const char* string);
//// size_t==unsigned int
//// �㷨һ ������
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
//// �㷨�� ָ������
////int my_strlen(const char* arr)
////{
////	assert(arr);
////	char* left = arr;
////	char* right = arr;
////	while (*right)// ע�ⲻ�ܽ�++Ҳд�������У�*right++��
////	{
////		right++;
////	}
////	return right - left;
////}
////  �㷨�� �ݹ�ʵ��
//// �Ѵ��»�С
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