//#include<iostream>
//using namespace std;
//
//class AA
//{
//private:
//	int a;
//public:
//	AA()
//	{
//		a = 100;
//	}
//
//public:
//	void show(BB& rb)
//	{
//		rb.b;
//	}
//
//	friend void Show(AA& ra);// 声明一下//设置 友元函数（仅局限于全局函数）
//	//使得Show()函数可以访问AA的私有成员
//	friend class BB;// 友元类
//};
//
//class BB
//{
//private:
//	int b;
//public:
//	BB()
//	{
//		b = 200;
//	}
//public:
//	void show(AA& ra)
//	{
//		cout << ra.a << endl;
//	}
//	friend class AA;
//};
//
//class CC :public AA
//{
//	void show(AA& ra)
//	{
//		//ra.a;//不可以访问 友元关系不能被继承
//	}
//};
//
//void Show(AA& ra)
//{
//	cout << ra.a << endl;
//}
//
////友元是单向的 
////友元关系不能被继承
//
//int main()
//{
//	AA a;
//	Show(a);
//	////a.a;//类外还是不允许访问
//	BB b;
//	b.show(a);
//
//	return 0;
//}