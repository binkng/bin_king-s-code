#include<iostream>
using namespace std;

class AA
{
public:
	int a;
public:
	AA()
	{
		a = 100;
	}
};
class BB:virtual public AA
	//����virtual�������ݵ�����
{
public:
	int b;
public:
	BB()
	{
		b = 200;
	}
};
class CC:virtual public AA
	//����virtual�������ݵ�����
{
public:
	int c;
public:
	CC()
	{
		c = 300;
	}
};
class DD:public BB,public CC//��̳�
{
public:
	int d;
public:
	DD()
	{
		d = 400;
	}
};
int main()
{
	DD dd;
	cout << sizeof(dd) << endl;// 8+8+4
	/*cout << dd.AA::a << endl;
	cout << dd.BB::a << endl;
	cout << dd.CC::a << endl;*/
	return 0;
}