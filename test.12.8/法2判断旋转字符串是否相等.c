//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void reverse(char* left, char* right)//whileѭ����forѭ��
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr1, int k)
//{
//	assert(arr1 != NULL);
//	int len = strlen(arr1);
//	assert(k <= len);// Ҫ����ĸ��������С�����鱾���Ԫ�ظ���
//	reverse(arr1, arr1 + k - 1);//�������
//	reverse(arr1 + k, arr1 + len - 1);//�����ұ�
//	reverse(arr1, arr1 + len - 1);//��������
//}
//int p_move(char* arr1, char* arr2)
//{
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len ; i++)
//	{
//		left_move(arr1, i);
//		int ret = strcmp(arr1, arr2);//   ����ԭ�� int strcmp(const char* string1,const* string2)
// str1==str2 return 0
// str1>str2  return >0
// str1<str2  return <0
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "defgabc";
//	int ret=p_move(arr1, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("No\n");
//	return 0;
//}