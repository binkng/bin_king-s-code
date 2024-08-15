#include<stdio.h>
#include<stdlib.h>
 //×Ö·û´®À©ÈÝ
char* Getstring()
{
	int nsize = 5;
	char* str = malloc(nsize);
	int ncount = 0;
	char c;
	while ((c = getchar()) != '\n')
	{
		str[ncount] = c;
		ncount++;
		if (ncount == nsize)
		{
			nsize += 5;
			str = realloc(str, nsize);
		}
	}
	str[ncount] = '\0';
	return str;
}
int main()
{
	char* str = Getstring();
	printf("%s\n", str);
	return 0;
}