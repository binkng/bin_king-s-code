#include<stdio.h>
#include<assert.h>
//#include<string.h>
 //�ַ��������������ܳ������ƣ�
 //����ԭ�� char* strncpy(char* destination,const char* source,size_t num)(size_t�ĵ�λ���ֽ�)
 // size_t == unsigned int
char* my_strncpy(char* dest,const char* src,size_t num)// a2�ַ��������Ա��޸� num��ʾ��������Դ�ַ����ĸ���(��λ �ֽ���)
// ע�⣺ Ŀ��ռ�������Դ�ַ����ռ�
{
	assert(dest && src);
	char* str1=dest;// ����һ����ʱ����str1
	while ((num--)&&(*str1++ = *src++) )
	{
		;//  ���ڸ�ѭ�������Ǵ���� ��󲻻ᱻ����
	}
	//  ���num����Դ�ַ������ַ��������Զ��� \0
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
	//char* ret = strncpy(a1, a2, 5);// a2�а�5���ֽڿ�����ȥ ���a2�в���5���ֽ� ��ϵͳ�Զ�����0
	printf("%s", ret);
	return 0;
}
