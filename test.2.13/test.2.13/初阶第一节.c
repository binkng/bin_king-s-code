//#include <stdio.h>
////������룬��ӡ�����ʲô��Ϊʲô����ͻ��'\0'����Ҫ�ԣ�
//int main()
//{
//    char arr1[] = "bit";
//    char arr2[] = { 'b', 'i', 't' };
//    char arr3[] = { 'b', 'i', 't','\0' };
//    printf("%s\n", arr1);
//    printf("%s\n", arr2);//  Խ�������
//    printf("%s\n", arr3);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    printf("c:\code\test.c\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("\a");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    //����1������Ļ�ϴ�ӡһ��������'����ô����
//    //����2������Ļ�ϴ�ӡһ���ַ������ַ�����������һ��˫���š�����ô����
//    printf("%c\n", '\'');
//    printf("%s\n", "\"");
//    return 0;
//}
#include <stdio.h>
#include<string.h>
int main()
{
    printf("%d\n", (int)strlen("abcdef"));
    // \62��������һ��ת���ַ�
    printf("%d\n", (int)strlen("c:\test\628\test.c"));
    /*printf("%d", sizeof(a));*/
    return 0;
}