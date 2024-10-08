//#include<stdio.h>
//#include<string.h>
//// 字符串：以“\0”结尾的字符串数组
//// '\0'==0  '0'==48
//
//
////在C语言中，字符串是以字符数组的形式表示的。这些字符数组可以在内存中被修改。但是，C语言中的字符串常量是不可修改的，这意味着你不能直接修改代码中的字符串常量，尝试修改它们会导致编译器报错。
////
////例如，在C语言中，你可以这样创建一个字符串常量：
////```c
////char str[] = "Hello";
////```
////在这个例子中，`"Hello"`是一个字符串常量，但是你可以将它赋值给一个字符数组，如上面的`str`，然后修改`str`中的内容，因为它是一个数组而不是一个常量。
////
////但是，如果你这样定义一个字符串：
////```c
////char* str = "Hello";
////```
////那么`"Hello"`就是一个字符串常量，而`str`是一个指向该常量的指针，你不能通过`str`来修改字符串常量的内容。
//int main()
//{
//	//  字符串的定义
//	char str[] = { 'a','b','c','d','\0'};
//	char str1[] = { 'a','b','c','d',0 };//0==\0  特别注意：'0'!='\0'
//	printf("%s\n", str);
//	printf("%s\n", str1);
//	char str2[] = "abefg";
//	char* str3 = "sgfhsdbn";
//	//str2[1]= 'D'; // 可以修改 因为str2的本质是一个字符数组
//	////p[1] = 'E';// 不可以修改 因为str3的本质是一个指针 指向的是一个字符串常量的首元素地址 
//
//
//	printf("%s\n", str2);
//	printf("%s\n", str3);
//
//	printf("%d\n", sizeof(str2));//6
//	printf("%d\n", sizeof(str3));//8
//
//	printf("%d\n", strlen(str2));// 不包括末尾的0
//	printf("%d\n", strlen(str3));
//
//	return 0;
//}