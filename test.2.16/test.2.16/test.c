#include<stdio.h>
int main(void) {
	int sum = 0, a[3];
	for (int i = 0; i < 3; i++) 
	{
		scanf("%d ", &a[i]);
	}
	for (int j = 0; j < 3; j++) 
	{
		if (a[j] > 0) 
		{
			sum += a[j];
			printf("%d ", a[j]);
		}
	}
	printf("\n%d ", sum);
	return 0;
}
//#include<stdio.h>
//char str[10];
//int main()
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%c", &str[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c", str[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main() {
//    char c1, c2;
//    scanf("%c %c", &c1, &c2);   //这里有一个空格
//    printf("%d %d\n", c1, c2);
//
//    scanf(" %c %c", &c1, &c2);  //这里没有空格
//    printf("%d %d\n", c1, c2);
//    return 0;
//}
//
