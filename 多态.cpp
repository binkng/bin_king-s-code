//#include<iostream>
//using namespace std;
//
//
//class Drink
//{
//public:
//	virtual void Show()//������ؼ���virtual  �麯��
//	{
//		cout << "Drink" << endl;
//	}
//};
////��̬ ����ֻ��ʹ������ĳ�Ա����
//class Water :public Drink
//{
//public:
//	void Show()
//	{
//		cout << "water" << endl;
//	}
//};
//class Milk :public Drink
//{
//public:
//	void Show()
//	{
//		cout << "Milk" << endl;
//	}
//};
//class Coffee :public Drink
//{
//public:
//	void Show()
//	{
//		cout << "Coffee" << endl;
//	}
//};
//
//void Glass(Drink& rd)//������󸳸�����
//{
//	rd.Show();
//}
//
////void Glass(Water& rw)// �����õ��Ǻ�������
////{
////	rw.Show();
////}
////void Glass(Milk& rm)
////{
////	rm.Show();
////}
////void Glass(Coffee& rc)
////{
////	rc.Show();
////}
//int main()
//{
//
//	Water w;
//	Milk m;
//	Coffee c;
//	Glass(w);
//	Glass(m);
//	Glass(c);
//
//
//	return 0;
//}
//
//
////ʵ�ֶ�̬�ı�Ҫ���� 
//// 1.�̳� 
//// 2.���������麯��
////3.�������жԸ�����麯����д
//// 4. ��������󸳸����� ͨ����������麯�� ��ִ������ĺ��� 