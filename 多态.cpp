//#include<iostream>
//using namespace std;
//
//
//class Drink
//{
//public:
//	virtual void Show()//加虚拟关键字virtual  虚函数
//	{
//		cout << "Drink" << endl;
//	}
//};
////多态 父类只能使用子类的成员函数
//class Water :public Drink
//{
//public:
//	void Show()
//	{
//		cout << "water" << endl;
//	}
//};
//class Milk :public Drink
//{
//public:
//	void Show()
//	{
//		cout << "Milk" << endl;
//	}
//};
//class Coffee :public Drink
//{
//public:
//	void Show()
//	{
//		cout << "Coffee" << endl;
//	}
//};
//
//void Glass(Drink& rd)//子类对象赋给父类
//{
//	rd.Show();
//}
//
////void Glass(Water& rw)// 这利用的是函数重载
////{
////	rw.Show();
////}
////void Glass(Milk& rm)
////{
////	rm.Show();
////}
////void Glass(Coffee& rc)
////{
////	rc.Show();
////}
//int main()
//{
//
//	Water w;
//	Milk m;
//	Coffee c;
//	Glass(w);
//	Glass(m);
//	Glass(c);
//
//
//	return 0;
//}
//
//
////实现多态的必要条件 
//// 1.继承 
//// 2.父类中有虚函数
////3.在子类中对父类的虚函数重写
//// 4. 将子类对象赋给父类 通过父类调用虚函数 将执行子类的函数 