//#include<iostream>
//using namespace std;
//class Num
//{
//private:
//	int a;
//public:
//	Num(int n)
//	{
//		a = n;
//	}
//public:
//	int operator=(int n);
//	int operator+(int n);
//		//������Ϊ������� �������������� 
//		//������Ϊ���Ҳ��� �������������� 
//
//public:
//	friend int operator+(int n, Num& ra);
//};
//
//int Num::operator=(int n)
//{
//	a = n;
//	return n;
//}
//
//int Num::operator+(int n)
//{
//	return n+a;
//}
//
//int operator+(int n, Num& ra)
//{
//	return n + ra.a;//��Ҫ����һ��friend
//}
//int main()
//{
//	Num n=100;// ��ֱ�ӶԶ����ʼ��ʱ  ִ�е����вι���
//
//	n = 20;//�����ִ��һ��"="������ ����Լ�����������
//	//����һ��Ĭ�ϵ����� ��n��ֵ��a
//
//
//	int num1 = n + 10;
//	//������Ϊ������� �������������� 
//	//������Ϊ���Ҳ��� �������������� 
//	int num2 = 10 + n;
//	cout << num1 << "  " << num2 << endl;
//	return 0;
//}
//
////sizeof() :: .   ����(��ľ���㲻��������)
////�Բ��������� ����ı����ȼ��ͽ���� 
////���ز�����������ʹ��Ĭ�ϲ���
////->  []  =   ()  �������������� ����������������