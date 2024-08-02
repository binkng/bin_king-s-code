//#include<iostream>
//using namespace std;
//
//class Father
//{
//public:
//	int a;
//public:
//	Father(int n)
//	{
//		cout << "Father" << endl;
//		a = n;
//	}
//	~Father()
//	{
//		cout << "Father" << endl;
//	}
//	
//};
//
//class Son:public Father
//{
//public:
//	int b;
//public:
//	Son(int n):Father(n)
//		// 当父类存在有参构造时 利用初始化列表 用于子类的构造
//	{
//		cout << "Son" << endl;
//	}
//	~Son()
//	{
//		cout << "Son" << endl;
//	}
//};
////默认构造函数有两种形式：
////
////编译器生成的默认构造函数：当类中没有任何构造函数时，编译器会自动生成一个默认的无参数构造函数。
////
////用户定义的默认构造函数：用户显式地定义一个无参数的构造函数。
//// 父子子父 
////在创建子类对象的时候 
////会先创造出一个父类的对象 再创造子类对象
//// 父子子父 
//int main()
//{
//	Son s(100);
//	
//
//	return 0;
//}
