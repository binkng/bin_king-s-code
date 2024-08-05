//#include<iostream>
//using namespace std;
//
//class AA
//{
//public:
//	int* p;
//public:
//	AA()
//	{
//		p = new int(100);// 初始化int=100
//		cout << "AA" << endl;
//	}
//	~AA()
//	{
//		delete p;
//		cout << "~AA" << endl;
//	}
//public:
//	void show()
//	{
//		cout << *p << endl;
//	}
//};
//
////析构函数 只有一个 没有返回值+ ~ + 类名+ （）
//// 析构函数 在对象销毁时执行
////当类中无析构函数时 会存在一个默认的析构函数（跟构造函数一样也是什么都没有）
//int main()
//{
//	//int* pp = NULL;
//	////花括号 { } 用于定义一个新的作用域 (scope)。
//	////在作用域结束时，该作用域中的所有局部变量都会被销毁。
//	//{
//	//	AA a;
//	//	a.show();
//	//	pp = a.p;
//	//}
//	//cout << *pp <<endl;
//
//	//在堆区定义一个类变量
//	AA* aa = new AA;
//	delete aa;
//
//	AA* bb = (AA*)malloc(sizeof(AA));
//	free(bb);// 未执行构造或者析构
//
//	return 0;
//}
//
//
////new 关键字 可以直接赋值 可执行构造函数         delete 执行析构函数
////malloc 函数 不能直接赋值 不执行构造函数        free   不执行析构函数