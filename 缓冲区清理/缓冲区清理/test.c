//#include <stdio.h>
//#include <conio.h>
//void main(void)
//{
//    int integer;
//    char string[81];
//
//    /* Read each word as a string. */
//    printf("Enter a sentence of four words with scanf: ");
//    for (integer = 0; integer < 4; integer++)
//    {
//        scanf("%s", string);
//        printf("%s\n", string);
//    }
//
//    /* You must flush the input buffer before using gets. */
//    fflush(stdin);
//    printf("Enter the same sentence with gets: ");
//    gets(string);
//    printf("%s\n", string);
//}

          
fflush()的作用是用来刷新缓冲区，fflush(stdin)刷新标准输入缓冲区，把输入缓冲区里的东西丢弃；
fflush(stdout)刷新标准输出缓冲区，把输出缓冲区里的东西强制打印到标准输出设备上。


                               注意：fflush(stdin)可以换成while(getchar() != '/n');注意：scanf(" %d")//空格是将空白字符给吃掉
#include<stdio.h>
int main()
{
	fflush(stdout);
	int i = 0;
	scanf("%d", &i);
	printf("我是猪？\n");

	//fflush(stdout);
	return 0;
}