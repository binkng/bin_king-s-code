//#include<iostream>
//using namespace std;
//
//class AA
//{
//public:
//	const int a;
//	int b;
//public:
//	AA() :a(200)
//	{
//		b = 100;
//	}
//public:
//	void show() const ///==AA const * const this
//	{
//		//b = 100;// ����const���ܶ�b�����޸�
//		cout << a << " " << b << endl;
//	}
//	void Show2()
//	{
//		b = 20;
//		cout << a << " " << b << endl;
//	}
//};
//
////const ���γ�Ա���� Ҫ�ڳ�ʼ���б����޸�
//// 
////const ���γ�Ա���� ���ں����ĺ��� ������ �����޸���ͨ��Ա����
//// 
////const���εĶ��� Ϊ������  �����޸���ͨ��Ա����ֻ�ܶ�ȡ 
////������ֻ��ʹ�ó����� ����ʹ����ͨ����
//
//
////const int* ptr��ָ����ָ���ֵ�ǳ�����ָ�뱾���ǿ��Ըı�ġ�
////int* const ptr��ָ�뱾���ǳ�������ָ����ָ���ֵ�ǿ��Ըı�ġ�
////const int* const ptr��ָ���ָ����ָ���ֵ���ǳ�����
//int main()
//{
//	AA aa;
//	aa.show();
//	aa.Show2();
//
//	const AA bb;
//	//bb.b = 100;//�����޸�
//
//
//
//	//������ֻ��ʹ�ó����� ����ʹ����ͨ����
//	bb.show();
//	//bb.Show2();//�����Ե���
//	return 0;
//}