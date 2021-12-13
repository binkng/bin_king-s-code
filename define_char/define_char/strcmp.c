#include<stdio.h>
#include<string.h>
#include<assert.h>
int my_strcmp(const char* arr1, const char* arr2)
{
	assert(arr1 && arr2);
	// 比较
	//while(*arr1++==*arr2++)  注意 ：这种写法是错误的 例如 当arr1 为 aba arr2 为abaa 时 也得出相等的结果
	while (*arr1 == *arr2)
	{
		if (*arr1 == '\0')//  如果arr1提前等于0了
		{
			return 0;
		}// 相等
		arr1++;
		arr2++;
	}
	//if (*arr1 > *arr2)// 每个字母对应的ascall值进行比较
	//	return 1;
	//else
	//	return -1;
	  
	return(*arr1 - *arr2);
	// 精简


}
int main()
{
	char arr1[] = "aba";
	char arr2[] = "abaa";
	int ret = strcmp(arr1, arr2);
	//int ret = my_strcmp(arr1, arr2);
	if (ret > 0)
		printf("arr1>arr2");
	else if (ret < 0)
		printf("arr1<arr2");
	else
		printf("arr1=arr2");

	return 0;
}