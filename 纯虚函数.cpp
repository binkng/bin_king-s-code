//#include<iostream>
//using namespace std;
//
//class Drink
//{
//public:
//	/*void show()
//	{
//		cout << "Drink" << endl;
//	}*/
//
//	void virtual show() = 0;// 纯虚函数 
//
//	void AA()/ //抽象类中也允许有其他函数
//	{
//		cout << "AA" << endl;
//	}
//
//};
//
//class Water:public Drink
//{
//public:
//	void show()
//	{
//		cout << "Water" << endl;
//	}
//};
////包含纯虚函数的类 称为抽象类
////抽象类 不允许实例化
////子类中必须对纯虚函数重写
////所有函数都是纯虚函数的类 接口类
//int main()
//{
//	//Drink d;//抽象类 不允许实例化
//	Drink* p = new Water;
//	p->show();
//	p->AA();
//	return 0;
//}