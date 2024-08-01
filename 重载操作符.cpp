//#include<iostream>
//using namespace std;
//class Num
//{
//private:
//	int a;
//public:
//	Num(int n)
//	{
//		a = n;
//	}
//public:
//	int operator=(int n);
//	int operator+(int n);
//		//对象作为做左参数 可以在类内重载 
//		//对象作为做右参数 必须在类外重载 
//
//public:
//	friend int operator+(int n, Num& ra);
//};
//
//int Num::operator=(int n)
//{
//	a = n;
//	return n;
//}
//
//int Num::operator+(int n)
//{
//	return n+a;
//}
//
//int operator+(int n, Num& ra)
//{
//	return n + ra.a;//需要加上一个friend
//}
//int main()
//{
//	Num n=100;// 当直接对对象初始化时  执行的是有参构造
//
//	n = 20;//这里会执行一个"="的重载 如果自己不定义重载
//	//会有一个默认的重载 把n赋值给a
//
//
//	int num1 = n + 10;
//	//对象作为做左参数 可以在类内重载 
//	//对象作为做右参数 必须在类外重载 
//	int num2 = 10 + n;
//	cout << num1 << "  " << num2 << endl;
//	return 0;
//}
//
////sizeof() :: .   ？：(三木运算不可以重载)
////对操作符重载 不会改变优先级和结合性 
////重载操作符不允许使用默认参数
////->  []  =   ()  必须在类内重载 不可以在类外重载