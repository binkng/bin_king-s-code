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
	int operator++(int a);//规定（）里面带一个参数即为右++
};
int Num::operator++()
{
	n += 1;
	return n;
}
int Num::operator++(int a)
{
	//n = a;//可以用a来记录之前的n
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