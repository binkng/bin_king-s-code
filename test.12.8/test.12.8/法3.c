#include<stdio.h>
#include<string.h>
int p_move(char* arr1,char* arr2)
{
	//1. 在arr1后面追加一个arr1字符串
	// strcat(arr1,arr1);//err 此函数不能在后面追加一个相同的字符串
	strncat(arr1, arr1, 6);//例如 abcdef  abcdefabcdef
	// 2.判断arr2指向的字符串是否为arr1指向的字符串的字串
	// 库函数strstr ————找子串的
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
		return 0;
	else
		return 1;
}
int main()
{
	char arr1[30] = "abcdefg";
	char arr2[] = "defgabc";
	int ret=p_move(arr1, arr2);
	if (ret == 1)
		printf("YES\n");
	else
		printf("No\n");
	return 0;
}