#include<iostream>
using namespace std;
class Num
{
public:
	int n;
public:
	Num(int a)
	{
		n = a;
	}
public:
	int operator++();
	int operator++(int a);//�涨���������һ��������Ϊ��++
};
int Num::operator++()
{
	n += 1;
	return n;
}
int Num::operator++(int a)
{
	//n = a;//������a����¼֮ǰ��n
	n += 1;
	return n;
}

int main()
{
	Num num = 100;
	cout << num++ << endl;
	cout << ++num << endl;

	return 0;
}