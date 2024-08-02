#include<iostream>
using namespace std;

class AA
{
public:
	virtual void FunA()//
	{
		cout << "AA::A" << endl;
	}
	virtual void FunB()
	{
		cout << "AA::B" << endl;
	}
	void FunC()
	{
		cout << "AA::C" << endl;
	}
};

class BB :public AA
{
public:
	void FunA()
	{
		cout << "BB::A" << endl;
	}
	void FunC()
	{
		cout << "BB::C" << endl;
	}
	virtual void FunD()
	{
		cout << "BB::D" << endl;
	}
};

class CC :public BB
{
public:
	void FunA()
	{
		cout << "CC::A" << endl;
	}
	void FunB()
	{
		cout << "CC::B" << endl;
	}
	void FunC()
	{
		cout << "CC::C" << endl;
	}
};

int main()
{
	//cout << sizeof(AA) << endl;
	// 8个字节是虚指针引起的

	AA* p = new BB;
	p->FunA();
	p->FunB();
	p->FunC();


	////AA * p = new CC;
	////p->FunA();
	////p->FunB();
	////p->FunC();// C只是普通的成员函数
	////// p->FunD();//错误  由于p是AA*类型的 找不到BB的空间



	//BB* p = new CC;
	//p->FunA();
	//p->FunB();
	//p->FunC();
	//p->FunD();

	return 0;
}


//多态 父类指针指向子类对象 通过父类指针调用子类函数 使父类指针有多种形态
//实现原理：
//父类中的虚函数 在子类中重写
//对象的前4个或8个（32 64位程序决定） 是一个虚指针
//所有的虚函数地址组成一个虚函数列表（vTable） 本质是函数指针数组
//虚指针指向虚函数列表
//在子类中重写的虚函数地址会覆盖掉继承来的虚函数列表中对应函数的地址
//当调用函数时根据当前的虚函数列表 决定执行哪一个具体的函数



//多态的优点: 提高复用性和拓展性

//缺点：空间 效率 安全性


