//#include<iostream>
//using namespace std;
//struct AA
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//public:
//	AA()
//	{
//		a = 10;
//		b = 20;
//		c = 30;
//	}
//public:
//	void SS()
//	{
//		cout << a << " " << b << " " << c << endl;
//	}
//};
//
//struct BB : private AA
//{
//public:
//	void show()
//	{
//		cout << a << " " << b << " " << c << endl;
//	}
//};
//
//struct CC :BB
//{
//public:
//	void show()
//	{
//		cout << a << " " << b << " " << c << endl;
//	}
//};
//
////���Ĭ�Ϸ������η���private  �ṹ���Ĭ�Ϸ��ʷ������η���public
////���Ĭ�ϼ̳з�ʽ��private �ṹ���Ĭ�ϼ̳з�ʽpublic
////������ڽṹ��Ļ����� ����� �����Ͼ�������������
//int main()
//{
//	AA aa;
//	aa.SS();
//
//
//	return 0;
//}