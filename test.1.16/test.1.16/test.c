#include<stdio.h>
void Add(int* a, int* b, int* c)
{
	*a = 5;
	*b = 7;
	*c = *a + *b;
}
int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	Add(&a, &b, &c);
	printf("%d %d %d", a, b, c);
}