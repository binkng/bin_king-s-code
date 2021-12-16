//#include<stdio.h>
//#include<assert.h>
////算法一 暴力求解法
//void left1_move(char* a,int k)//k代表左旋字符的个数
//{
//assert(a !=NULL);// assert()断言
//	int len = strlen(a);
//	int i = 0;
//	for (i = 0; i < k;i++)
//	{
//		// 左旋一个字符
//		char tmp = *a;// 定义一个第三方变量tmp
//		int j = 0;
//		for (j = 0;j<len-1;j++)
//		{
//			*(a + j) = *(a + j + 1);
//		}
//		*(a + len - 1) = tmp;
//	}
//}
//
//
//int main()
//{
//	char a[10] = { 0 };
//	scanf("%s", a);
//	printf("%s\n", a);
//	int k = 2;//要旋转元素的个数
//	left1_move(a,k);
//	printf("%s\n", a);
//	return 0;
//}
// 算法二利用逆序
//例如ab cdef
// ba fedc 先分别把ab和cdef都给逆序
//cdefab
//#include<stdio.h>
//#include<assert.h>
//void reverse(char* left, char* right)//while循环和for循环
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
//void left_move(char* arr,int k)
//{
//	assert(arr != NULL);
//	int len = strlen(arr);
//	assert(k <= len);// 要逆序的个数必须的小于数组本身的元素个数
//	reverse(arr, arr + k - 1);//逆序左边
//	reverse(arr + k, arr + len - 1);//逆序右边
//	reverse(arr, arr + len - 1);//逆序整体
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 2;
//	printf("%s\n", arr);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}