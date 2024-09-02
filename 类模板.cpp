//#include<iostream>
//#include<string>
//using namespace std;
//template<class T1,class T2>
//
//class Point
//{
//public:
//		T1 a;
//	    T2 b;
//public:
//	Point(T1 a,T2 b)
//	{
//		this->a = a;
//		this->b = b;
//	}
//public:
//	void Show();
//};
//
//
//template<class T1, class T2>//模板头
//void Point<T1,T2>::Show()//函数体 有模板头 才会认识T1 T2
//{
//	cout << a << " " << b << endl;
//}
//int main()
//{
//
//	Point<int, float> p1(10, 10.34);//在使用类模板定义对象的时候 必须先指定类型
//	p1.Show();
//
//	Point<string, string>p2("我是谁", "shinina");
//	p2.Show();
//	return 0;
//}