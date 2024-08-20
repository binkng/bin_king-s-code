//#include<stdio.h>
//int main()
//{
//	// 先暴力穷举
//	for (char a = 'x'; a <= 'z'; a++)
//		for(char b='x';b<='z';b++)
//			for (char c = 'x'; c <= 'z'; c++)
//				// 然后利用添加条件 过滤掉不符合条件的配对
//				if(c!='x' && a != 'x' && c != 'z'&&a!=b&&a!=c&&b!=c)
//			{
//				printf("a---%c\n",a);
//				printf("b---%c\n",b);
//				printf("c---%c\n",c);
//				printf("-------\n");
//			}
//	return 0;    
