#include<stdio.h>
bool Judg_str(char* str)
{
	printf("%d", (int)sizeof(str));
	return true;
 }
int main()
{
	char str[40];
	scanf("%s", str);
	bool ret= Judg_str(str);
	if (ret == true)
		printf("yes");
	else
		printf("no");
	return 0;
}