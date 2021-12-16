//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void reverse(char* left,char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char* tmp = NULL;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void move(char* a1, int len)
//{
//	assert(a1 != NULL);
//	reverse(a1, a1 + 1);
//	reverse(a1 + 2, a1 + len - 1);
//	reverse(a1, a1 + len - 1);
//}
//int P(char* a1, char* a2)
//{
//
//}
//int main()
//{
//	char a1[10] ="aabcd";
//	char a2[10] = "bcdaa";
//	printf("%s\n", a1);
//	int len = strlen(a1);
//	printf("%s\n",a2);
//	move(a1,len);
//	printf("%s\n", a1);
//	int p=P(a1, a2);// 封装一个函数判断a1 a2 是否相等
//	return 0;
//}
