#include<iostream>
using namespace std;

class AA
{
public:
	virtual void FunA()//
	{
		cout << "AA::A" << endl;
	}
	virtual void FunB()
	{
		cout << "AA::B" << endl;
	}
	void FunC()
	{
		cout << "AA::C" << endl;
	}
};

class BB :public AA
{
public:
	void FunA()
	{
		cout << "BB::A" << endl;
	}
	void FunC()
	{
		cout << "BB::C" << endl;
	}
	virtual void FunD()
	{
		cout << "BB::D" << endl;
	}
};

class CC :public BB
{
public:
	void FunA()
	{
		cout << "CC::A" << endl;
	}
	void FunB()
	{
		cout << "CC::B" << endl;
	}
	void FunC()
	{
		cout << "CC::C" << endl;
	}
};

int main()
{
	//cout << sizeof(AA) << endl;
	// 8���ֽ�����ָ�������

	AA* p = new BB;
	p->FunA();
	p->FunB();
	p->FunC();


	////AA * p = new CC;
	////p->FunA();
	////p->FunB();
	////p->FunC();// Cֻ����ͨ�ĳ�Ա����
	////// p->FunD();//����  ����p��AA*���͵� �Ҳ���BB�Ŀռ�



	//BB* p = new CC;
	//p->FunA();
	//p->FunB();
	//p->FunC();
	//p->FunD();

	return 0;
}


//��̬ ����ָ��ָ��������� ͨ������ָ��������ຯ�� ʹ����ָ���ж�����̬
//ʵ��ԭ��
//�����е��麯�� ����������д
//�����ǰ4����8����32 64λ��������� ��һ����ָ��
//���е��麯����ַ���һ���麯���б�vTable�� �����Ǻ���ָ������
//��ָ��ָ���麯���б�
//����������д���麯����ַ�Ḳ�ǵ��̳������麯���б��ж�Ӧ�����ĵ�ַ
//�����ú���ʱ���ݵ�ǰ���麯���б� ����ִ����һ������ĺ���



//��̬���ŵ�: ��߸����Ժ���չ��

//ȱ�㣺�ռ� Ч�� ��ȫ��


