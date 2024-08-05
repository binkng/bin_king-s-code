//#include<iostream>
//using namespace std;
//
//class AA
//{
//public:
//	int a;
//	short b;
//public:
//	//void Init(int a, short b)
//	//{
//	//	this->a = a;
//	//	this->b = b;//this指针就是指向AA类型（也就是本类型）的指针
//	//	//指向调用成员函数的对象本身（此刻指向aa）
//	//}
//	void show()
//	{
//		cout << a << " " << b << endl;
//	}
//
//	void Show(int a)
//	{
//		this->a = a;
//		cout << this->a << endl;
//		cout << "aA" << endl;
//	}
//	void BB()
//	{
//		CC(this);//调用该成员函数的对象的地址
//	}
//};
//
//
//void CC(AA* p)
//{
//	cout << p->a <<" "<< p->b << endl;
//}
////空类可以定义对象 对象大小1个字节
////类的大小也是按照结构对齐计算
////成员变量是独立的 每个对象都有自己的一份 从而成员变量占用空间
////成员函数是公共的 所有对象共享一份       而成员函数不占用空间
////
////
////
////所有的非静态成员函数都有一个隐藏的参数（本类类型（this）的指针）
//// 指向指向调用成员函数的对象本身
////当对象调用成员函数时 会将对象的地址传过去
////this指针只能在非静态成员函数中使用 
//// 静态成员函数没有 this 指针，因为它们不属于任何特定对象。
//// this指针不能修改  例如：AA* const this
//int main()
//{
//	/*AA aa;
//	aa.a = 10;
//	aa.b = 20;
//	aa.Init(1000, 2000);
//	aa.show();
//	AA bb;
//	bb.Show(100);
//	cout << sizeof(AA) << endl;*/
//	AA cc;
//	cc.a = 1;
//	cc.b = 2;
//	//cc.Init(100, 200);
//	cc.BB();
//	return 0;
//}