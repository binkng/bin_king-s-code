#include<iostream>
using namespace std;

template<class T>
class ARR
{
public:
	int nlen;
	T* p;
public:
	ARR(int n)
	{
		nlen = n;
		p = new T[n];
	}
	~ARR()
	{
		delete p;
		p = NULL;
	}
public:
	int size()
	{
		return nlen;
	}

	T& operator[](int n)
	{
		return *(p + n);
	}
};

int main()
{
	ARR<int> arr(5);
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << endl;//需要重载操作符
	}
	return 0;
}