#include<stdio.h>
//X形图案可以拆分成两根斜线，其中i==j时输出星号，或者i==n-i-1时输出星号即可，其他情况皆输出空格。
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        //控制行数
        for (int i = 0; i < n; i++)
        {
            //控制列
            for (int j = 0; j < n; j++)
            {
                if (i == j || i + j == n - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}