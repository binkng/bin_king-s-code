#include<stdio.h>
#include<string.h>
int Index_BF(char* a,char* b)
{
	/*printf("%d\n", (int)strlen(a));
	printf("%d\n", (int)strlen(b));
	printf("%d\n", (int)sizeof(a));
	printf("%d\n", (int)sizeof(b));
	return 0;*/
	int lena = (int)strlen(a);
	int lenb = (int)strlen(b);
	int i = 1; int j = 1;
	while (i <= lena && j <= lenb)
	{
		if (a[i - 1] == b[j - 1])
		{
			++i;
			++j;
		}
		else
		{
			i = i + 2 - j;
			j = 1;
		}
	}
	if (j > lenb)
		return 1;
	else
		return 0;
}
int main()
{
	char b[] = "abc";
	char a[] = "abjsfabc";
	int ret=Index_BF(a, b);
	if (ret)
		printf("∆•≈‰≥…π¶£°");
	else
		printf("∆•≈‰ ß∞‹£°");
	return 0;
}