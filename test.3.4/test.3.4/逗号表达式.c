#include<stdio.h>
int main()
{
	int a, b, c;
	a = 0; b = 1; c = 2;
	//a = ++a, b++, c++;
	//printf("%d %d %d ", a, b, c);
	a = (++a, b++, ++c);
	printf("%d %d %d ", a, b, c);
	return 0;
}