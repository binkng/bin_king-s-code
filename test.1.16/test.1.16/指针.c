#include<stdio.h>
int main()
{
	int a = 9;
	int* b = &a;
	int** c = &b;
	printf("%d %d %d\n", a, *b, **c);
	// *c==b
	//**c==*(b)
	//*b=a
	printf("%d ", (int)sizeof(b));
	printf("%d ", (int)sizeof(&a));
	return 0;
}