//#include<iostream>
//using namespace std;
//
//class AA
//{
//public:
//	static int a;//静态成员变量
//public:
//	void show()
//	{
//		cout << a << endl;
//	}
//	void SS()
//	{
//		a = 201;
//	}
//
//	static void SHOW(int n)//也可以在类外进行初始化 也是强调static
//	{
//		a = n;
//		cout << "AAA" << endl;
//	}
//};
//int AA::a = 1001;
////静态成员变量要在类外初始化 去掉static关键字+   类型+类名：：+变量名
////静态成员变量不属于任何对象 所有对象共享一份
////静态成员可以不通过对象直接访问 访问方式:  类名：：+成员名
////静态成员依旧受访问修饰符的约束
////静态成员函数  不允许使用非静态成员 静态成员函数没有this指针
//int main()
//{
//	AA aa;
//	aa.a = 100;//必须要先初始化
//	aa.show();
//	aa.SS();
//	aa.show();
//	cout << sizeof(AA) << endl;
//	AA::SHOW(10111);
//	cout << AA::a << endl;
//	cout << sizeof(AA) << endl;
//	return 0;
//}