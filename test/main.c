#include<stdio.h>
#include<assert.h>
//#include<string.h>
 //字符串拷贝函数（受长度限制）
 //函数原型 char* strncpy(char* destination,const char* source,size_t num)(size_t的单位是字节)
 // size_t == unsigned int
char* my_strncpy(char* dest,const char* src,size_t num)// a2字符串不可以被修改 num表示被拷贝的源字符串的个数(单位 字节数)
// 注意： 目标空间必须大于源字符串空间
{
	assert(dest && src);
	char* str1=dest;// 定义一个临时变量str1
	while ((num--)&&(*str1++ = *src++) )
	{
		;//  放在该循环体里是错误的 最后不会被运行
	}
	//  如果num大于源字符串的字符个数，自动补 \0
	if (num > 0)
	{
		while (num--)
		{
			*str1 = '\0';
		}
	}
	return dest;
}
int main()
{
	char a1[20] = "abcdkfef";
	char a2[] = "aoocp";
	char* ret=my_strncpy(a1, a2, 4);
	//char* ret = strncpy(a1, a2, 5);// a2中按5个字节拷贝过去 如果a2中不够5个字节 则系统自动补上0
	printf("%s", ret);
	return 0;
}
