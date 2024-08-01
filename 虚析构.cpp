//#include<iostream>
//using namespace std;
//
//class Father
//{
//public:
//	Father()
//	{
//		cout << "Father" << endl;
//	}
//	virtual ~Father()//加上virtual 虚析构 使得父类析构时 会自动调用子类的析构
//	{
//		cout << "~Father" << endl;
//	}
//};
//
//class Son:public Father
//{
//public:
//	int* p;
//public:
//	Son()
//	{
//		cout << "Son" << endl;
//		p = new int(100);
//	}
//	~Son()
//	{
//		cout << "~Son" << endl;
//		delete p;
//	}
//};
//
//int main()
//{
//	Father* p = new Son;
//	int* pp = ((Son*)p)->p;
//	//delete (Son*)p;*/
//	//由于p是Father类型 所以需要强制转换成Son*类型 才可以找到Son的成员变量
//
//
//	delete p;
//	
//
//	cout << *pp << endl;
//
//	return 0;
//}
//
////无需构造