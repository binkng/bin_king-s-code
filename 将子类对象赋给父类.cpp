//#include<iostream>
//using namespace std;
//
//class Father
//{
//public:
//	int a;
//public:
//	Father()
//	{
//		a = 100;
//	}
//};
//
//class Son :public Father
//{
//public:
//	int b;
//public:
//	Son()
//	{
//		b = 200;
//	}
//};
//int main()
//{
//	Son s;
//	cout << s.a << endl;
//	cout << s.b << endl;
//	Father fa;
//	cout << fa.a << endl;
//	
//
//	s.a = 10;
//	s.b = 20;
//
//	cout << s.a << endl;
//	cout << s.b << endl;
//	fa = s;////可以赋值 但赋值的只能是父类所拥有的成员
//	//fa.b;// 错误 不会产生新的成员
//	s = fa;//错误  不可以父类对象赋值给子类
//	cout << fa.a << endl;
//
//	也可以 引用 指针 来给父类对象赋值  特别注意
//	 由于子类中包含父类
//	 并且父类在前面
//
//	Father& rfa = s;// 引用的是子类中父类那一部分
//	cout << rfa.a << endl;
//
//
//	Father* rfa1 = &s;
//	cout << rfa1->a << endl;//// 指针指向的就是子类中父类那一部分
//
//
//
//	return 0;
//}