//#include<iostream>
//using namespace std;
//struct AA
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//public:
//	AA()
//	{
//		a = 10;
//		b = 20;
//		c = 30;
//	}
//public:
//	void SS()
//	{
//		cout << a << " " << b << " " << c << endl;
//	}
//};
//
//struct BB : private AA
//{
//public:
//	void show()
//	{
//		cout << a << " " << b << " " << c << endl;
//	}
//};
//
//struct CC :BB
//{
//public:
//	void show()
//	{
//		cout << a << " " << b << " " << c << endl;
//	}
//};
//
////类的默认访问修饰符是private  结构体的默认访问访问修饰符是public
////类的默认继承方式是private 结构体的默认继承方式public
////类就是在结构体的基础上 扩充的 基本上就这了两个区别
//int main()
//{
//	AA aa;
//	aa.SS();
//
//
//	return 0;
//}