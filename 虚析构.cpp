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
//	virtual ~Father()//����virtual ������ ʹ�ø�������ʱ ���Զ��������������
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
//	//����p��Father���� ������Ҫǿ��ת����Son*���� �ſ����ҵ�Son�ĳ�Ա����
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
////���蹹��