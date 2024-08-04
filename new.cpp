//#include<stdlib.h>
//#include<iostream>
//using namespace std;
//int main()
//{
//	/*char* str = (char*)malloc(4);
//	str[0] = 'a';
//	str[1] = 'b';
//	str[2] = 'c';
//	str[3] = '\0';
//	cout << str << endl;
//	free(str);*/
//
//	//new//是一个操作符 关键字 类似于sizeof
//
//	int* p = new int(200);//返回首地址给p 加（ ）表示对其赋值
//	cout << *p << endl;
//	*p = 100;
//	cout << *p << endl;
//	delete p;
//	char* str = new char[4];
//	str[0] = 'a';
//	str[1] = 'b';
//	str[2] = 'c';
//	str[3] = '\0';
//	cout << str << endl;
//
//	delete[] str;//连续空间(就是有首地址的)尽量加[]
//
//	//malloc 函数   不能赋值
//	//new    关键字 能赋值
//	return 0;
//}