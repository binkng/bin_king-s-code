//#include<iostream>
//using namespace std;
////void show(int a)
////{
////	cout << a << endl;
////}
//
//class Father
//{
//public:
//	void Show(int n)
//	{
//		cout << n << endl;
//		cout << "Father" << endl;
//	}
//};
//
//class Son :public Father
//{
//public:
//	void Show(int n)
//	{
//		cout << n << endl;
//		cout << "Son" << endl;
//	}
//};
//
//int main()
//{
//	Father f;
//	void(Father::*p)(int) = &Father::Show;// ȡ��Ա������ַ
//	(f.*p)(100);
//	
//	p = (void(Father::*)(int)) & Son::Show;//ǿ������ת��
//	//p�����ҵ�Son�ĳ�Ա����show���������Ҳ�����Ա����
//	(f.*p)(200);
//
//	Father* fa = new Son;
//	//����һ��ָ�� Son ����� Father ����ָ�� fa��
//	(fa->*p)(1000);
//
//	return 0;
//}