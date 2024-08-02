//#include<iostream>
//using namespace std;
//
//class Father
//{
//public:
//	int a;
//	int b;
//private:
//	int c;
//public:
//	Father()
//	{
//		a = 10;
//		b = 20;
//		c = 30;
//	}
//public:
//	void show()
//	{
//		cout << a << " " << b << " " << c << endl;
//	}
//};
//
//class Son : protected Father//继承方式
//{
//public:
//	int d;
//	Son()
//	{
//		d = 40;
//	}
//public:
//	void SSS()
//	{
//		//cout << a << " " << b << " " << c << endl;
//		// 无法继承c
//		cout << d << endl;
//	}
//};
//class SSon : public Son
//{
//public:
//	void show()
//	{
//		cout << a << " " << b << " " << d << endl;
//	}
//};
//
////继承方式会修改成员的属性
////继承方式      父类   子类          父类   子类         父类   子类
////public       public->public      proceted->proceted   private->不可见 
////protected    public->protected   proceted->proceted    private->不可见 
////private      public-> private     proceted->privite     private->不可见
////父类成员在子类中的访问方式 最高不会高过继承方式
////类的默认继承方式为private
//int main()
//{
//	/*Father fa;
//	Son so;
//	fa.show();
//	so.SSS();
//	cout << sizeof(so) << endl;*/
//	SSon ss;
//	/*ss.a = 10;
//	ss.b = 20;*/  /// 都不可以使用了 由于a和b被Son以protected继承 不可以在类外被使用
//	ss.show();
//
//	return 0;
//}