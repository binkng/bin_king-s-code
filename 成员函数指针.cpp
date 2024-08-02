//#include<iostream>
//using namespace std;
////void show(int a)
////{
////	cout << a << endl;
////}
//
//class Father
//{
//public:
//	void Show(int n)
//	{
//		cout << n << endl;
//		cout << "Father" << endl;
//	}
//};
//
//class Son :public Father
//{
//public:
//	void Show(int n)
//	{
//		cout << n << endl;
//		cout << "Son" << endl;
//	}
//};
//
//int main()
//{
//	Father f;
//	void(Father::*p)(int) = &Father::Show;// 取成员函数地址
//	(f.*p)(100);
//	
//	p = (void(Father::*)(int)) & Son::Show;//强制类型转换
//	//p可以找到Son的成员函数show（）但是找不到成员变量
//	(f.*p)(200);
//
//	Father* fa = new Son;
//	//创建一个指向 Son 对象的 Father 类型指针 fa。
//	(fa->*p)(1000);
//
//	return 0;
//}