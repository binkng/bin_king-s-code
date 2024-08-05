//#include<iostream>
//using namespace std;
//
//class AA
//{
//public:
//	int a;
//	const int b;
//public:
//	/// 初始化列表用于在构造函数中初始化类成员变量。
//	/// 初始化列表提供了一种更高效和简洁的初始化方式，
//	/// 特别是对于常量成员、引用成员和需要复杂构造过程的成员对象。
//	///  MyClass(int x, int y) : member1(x), member2(y) //x,y为初始化值
//	/// {
//		// 构造函数体，可以是空的
//       //}
//	AA() :b(200)//初始化列表 对b进行初始化
//	{
//		a = 100;
//	}
//
//	AA() :a(101), b(102)
//	{
//
//	}
//
//	AA(int n) :a(n), b(n)
//	{
//
//	}
//};
////初始化列表的初始化顺序 按照成员变量的声明顺序
// //初始化列表执行时机 在构造函数之前
//int main()
//{
//	AA aa(10);
//	cout << aa.a << endl;
//	cout << aa.b << endl;
//
//	return 0;
//}