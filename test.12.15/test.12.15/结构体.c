#include<stdio.h>
//  ������ ������ 
union S
{
	char a;
	int b;
};
int main()
{
	union S s;
	s.b = 2;
	s.a = 'a';
	printf("%d\n", s.a);
	printf("%d\n", s.b);
	return 0;
}