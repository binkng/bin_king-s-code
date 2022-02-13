//#include <stdio.h>
////下面代码，打印结果是什么？为什么？（突出'\0'的重要性）
//int main()
//{
//    char arr1[] = "bit";
//    char arr2[] = { 'b', 'i', 't' };
//    char arr3[] = { 'b', 'i', 't','\0' };
//    printf("%s\n", arr1);
//    printf("%s\n", arr2);//  越界访问了
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
//    //问题1：在屏幕上打印一个单引号'，怎么做？
//    //问题2：在屏幕上打印一个字符串，字符串的内容是一个双引号“，怎么做？
//    printf("%c\n", '\'');
//    printf("%s\n", "\"");
//    return 0;
//}
#include <stdio.h>
#include<string.h>
int main()
{
    printf("%d\n", (int)strlen("abcdef"));
    // \62被解析成一个转义字符
    printf("%d\n", (int)strlen("c:\test\628\test.c"));
    /*printf("%d", sizeof(a));*/
    return 0;
}