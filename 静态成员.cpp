//#include<iostream>
//using namespace std;
//
//class AA
//{
//public:
//	static int a;//��̬��Ա����
//public:
//	void show()
//	{
//		cout << a << endl;
//	}
//	void SS()
//	{
//		a = 201;
//	}
//
//	static void SHOW(int n)//Ҳ������������г�ʼ�� Ҳ��ǿ��static
//	{
//		a = n;
//		cout << "AAA" << endl;
//	}
//};
//int AA::a = 1001;
////��̬��Ա����Ҫ�������ʼ�� ȥ��static�ؼ���+   ����+��������+������
////��̬��Ա�����������κζ��� ���ж�����һ��
////��̬��Ա���Բ�ͨ������ֱ�ӷ��� ���ʷ�ʽ:  ��������+��Ա��
////��̬��Ա�����ܷ������η���Լ��
////��̬��Ա����  ������ʹ�÷Ǿ�̬��Ա ��̬��Ա����û��thisָ��
//int main()
//{
//	AA aa;
//	aa.a = 100;//����Ҫ�ȳ�ʼ��
//	aa.show();
//	aa.SS();
//	aa.show();
//	cout << sizeof(AA) << endl;
//	AA::SHOW(10111);
//	cout << AA::a << endl;
//	cout << sizeof(AA) << endl;
//	return 0;
//}