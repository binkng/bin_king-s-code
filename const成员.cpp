//#include<iostream>
//using namespace std;
//
//class AA
//{
//public:
//	const int a;
//	int b;
//public:
//	AA() :a(200)
//	{
//		b = 100;
//	}
//public:
//	void show() const ///==AA const * const this
//	{
//		//b = 100;// 加了const不能对b进行修改
//		cout << a << " " << b << endl;
//	}
//	void Show2()
//	{
//		b = 20;
//		cout << a << " " << b << endl;
//	}
//};
//
////const 修饰成员变量 要在初始化列表中修改
//// 
////const 修饰成员函数 放在函数的后面 常函数 不能修改普通成员变量
//// 
////const修饰的对象 为常对象  不能修改普通成员变量只能读取 
////常对象只能使用常函数 不能使用普通函数
//
//
////const int* ptr：指针所指向的值是常量，指针本身是可以改变的。
////int* const ptr：指针本身是常量，但指针所指向的值是可以改变的。
////const int* const ptr：指针和指针所指向的值都是常量。
//int main()
//{
//	AA aa;
//	aa.show();
//	aa.Show2();
//
//	const AA bb;
//	//bb.b = 100;//不可修改
//
//
//
//	//常对象只能使用常函数 不能使用普通函数
//	bb.show();
//	//bb.Show2();//不可以调用
//	return 0;
//}