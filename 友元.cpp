//#include<iostream>
//using namespace std;
//
//class AA
//{
//private:
//	int a;
//public:
//	AA()
//	{
//		a = 100;
//	}
//
//public:
//	void show(BB& rb)
//	{
//		rb.b;
//	}
//
//	friend void Show(AA& ra);// ����һ��//���� ��Ԫ��������������ȫ�ֺ�����
//	//ʹ��Show()�������Է���AA��˽�г�Ա
//	friend class BB;// ��Ԫ��
//};
//
//class BB
//{
//private:
//	int b;
//public:
//	BB()
//	{
//		b = 200;
//	}
//public:
//	void show(AA& ra)
//	{
//		cout << ra.a << endl;
//	}
//	friend class AA;
//};
//
//class CC :public AA
//{
//	void show(AA& ra)
//	{
//		//ra.a;//�����Է��� ��Ԫ��ϵ���ܱ��̳�
//	}
//};
//
//void Show(AA& ra)
//{
//	cout << ra.a << endl;
//}
//
////��Ԫ�ǵ���� 
////��Ԫ��ϵ���ܱ��̳�
//
//int main()
//{
//	AA a;
//	Show(a);
//	////a.a;//���⻹�ǲ��������
//	BB b;
//	b.show(a);
//
//	return 0;
//}