//#include<iostream>
//using namespace std;
//
//class Father
//{
//public:
//	int a;
//	int b;
//private:
//	int c;
//public:
//	Father()
//	{
//		a = 10;
//		b = 20;
//		c = 30;
//	}
//public:
//	void show()
//	{
//		cout << a << " " << b << " " << c << endl;
//	}
//};
//
//class Son : protected Father//�̳з�ʽ
//{
//public:
//	int d;
//	Son()
//	{
//		d = 40;
//	}
//public:
//	void SSS()
//	{
//		//cout << a << " " << b << " " << c << endl;
//		// �޷��̳�c
//		cout << d << endl;
//	}
//};
//class SSon : public Son
//{
//public:
//	void show()
//	{
//		cout << a << " " << b << " " << d << endl;
//	}
//};
//
////�̳з�ʽ���޸ĳ�Ա������
////�̳з�ʽ      ����   ����          ����   ����         ����   ����
////public       public->public      proceted->proceted   private->���ɼ� 
////protected    public->protected   proceted->proceted    private->���ɼ� 
////private      public-> private     proceted->privite     private->���ɼ�
////�����Ա�������еķ��ʷ�ʽ ��߲���߹��̳з�ʽ
////���Ĭ�ϼ̳з�ʽΪprivate
//int main()
//{
//	/*Father fa;
//	Son so;
//	fa.show();
//	so.SSS();
//	cout << sizeof(so) << endl;*/
//	SSon ss;
//	/*ss.a = 10;
//	ss.b = 20;*/  /// ��������ʹ���� ����a��b��Son��protected�̳� �����������ⱻʹ��
//	ss.show();
//
//	return 0;
//}