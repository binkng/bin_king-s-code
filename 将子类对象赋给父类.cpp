//#include<iostream>
//using namespace std;
//
//class Father
//{
//public:
//	int a;
//public:
//	Father()
//	{
//		a = 100;
//	}
//};
//
//class Son :public Father
//{
//public:
//	int b;
//public:
//	Son()
//	{
//		b = 200;
//	}
//};
//int main()
//{
//	Son s;
//	cout << s.a << endl;
//	cout << s.b << endl;
//	Father fa;
//	cout << fa.a << endl;
//	
//
//	s.a = 10;
//	s.b = 20;
//
//	cout << s.a << endl;
//	cout << s.b << endl;
//	fa = s;////���Ը�ֵ ����ֵ��ֻ���Ǹ�����ӵ�еĳ�Ա
//	//fa.b;// ���� ��������µĳ�Ա
//	s = fa;//����  �����Ը������ֵ������
//	cout << fa.a << endl;
//
//	Ҳ���� ���� ָ�� �����������ֵ  �ر�ע��
//	 ���������а�������
//	 ���Ҹ�����ǰ��
//
//	Father& rfa = s;// ���õ��������и�����һ����
//	cout << rfa.a << endl;
//
//
//	Father* rfa1 = &s;
//	cout << rfa1->a << endl;//// ָ��ָ��ľ��������и�����һ����
//
//
//
//	return 0;
//}