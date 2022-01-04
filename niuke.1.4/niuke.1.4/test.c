#include<stdio.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    float i = m / ((n / 100.0) * (n / 100.0));
    printf("%.2f", i);
    return 0;
}