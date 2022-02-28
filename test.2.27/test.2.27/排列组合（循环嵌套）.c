#include<stdio.h>
// 题目描述：三个人从五本书里面选三本
int main()
{
	int a, b, c = 0;
	int cnt = 0;// 用来记录所有的选法
	printf("A B C三个人所选的书号分别为：\n");
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				if ((a != b) && (a != c) && (b != c))//  算法的重点：只要三个人所选的书号不同即为一种借阅方法
				{
					printf("A:%d B:%d C:%d |", a, b, c);
					cnt++;
					if (cnt % 5 == 0)//打印五列
					{
						printf("\n");
					}
				}
			}
		}
	}
	printf("总共有%d中选法", cnt);
	return 0;
}