//#include<iostream>
//using namespace std;
//  //一来就是 一个类当作另一个类中某个成员函数的参数 这就是依赖关系
//class Computer
//{
//public:
//	void Debug()
//	{
//		cout << "I CAN CODE" << endl;
//	}
//};
//
//class Person
//{
//public:
//	void Code(Computer* pCom)
//	{
//		pCom->Debug();
//	}
//};
//
//int main()
//{
//	Computer com;
//	Person ps;
//	ps.Code(&com);
//
//
//	return 0;
//}