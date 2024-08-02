//#include<iostream>
//using namespace std;
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
//class Son : public Father
//{
//public:
//	int a;
//public:
//	Son()
//	{
//		a = 200;
//	}
//};
//
//int main()
//{
//
//	Son s;
//	cout << s.a << endl;
//	cout << s.Father::a << endl;
//	cout << sizeof(s) << endl;
//
//	//继承关系中 如果父类成员与子类重名 优先使用子类成员 如果想使用父类成员 成员名字+父类类名：：
//	return 0;
//}