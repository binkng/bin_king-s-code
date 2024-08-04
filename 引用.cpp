//#include<iostream>
//using namespace std;
//
//void Swap(int& A,int& B)//对A B 的初始化 是在A B 调用a b时候进行初始化的
//{
//	int c;
//	c = A;
//	A = B;
//	B = c;
//}
//int main()
//
//{
////	int a = 100;
////	int& ra = a;//引用就是取别名 操作ra就是操作a ra就是a的别名 ra和a就已经绑定在一起了
////	//在使用引用时必须先对其初始化
////	//int&* p = &ra;// 错误 引用没有指针
////	//引用没有指针
////	int* p = &a;
////	int*& rp = p;// 指针有引用
////	cout << *rp << endl;
////	//但是指针有引用
////	int b = 20;
////	ra = b;//把b的值赋给ra 也就是把b的值赋给a
////	cout << a << endl;
////	cout << b << endl;
//	int a = 1;
//	int b = 2;
//	Swap(a, b);
//	cout << a << "  " << b << endl;
//	return 0;
//}