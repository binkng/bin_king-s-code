#include<iostream>
using namespace std;
//int main()
//{
//	int i = 2;
//	int& j = i;//  i��j����ͬһ��ռ�
//	i = 9;
//	j = 8;
//	cout << "i=" << i << "j=" << j<<endl;
//	return 0;
//}
//void swap(int& m, int& n)//  ������
//{
//	int temp;
//	temp = n;
//	n = m;
//	m = temp;
//}
//void main()
//{
//	int a, b;
//	cin >> a >> b;
//	swap(a, b);
//	cout << a << " " << b << endl;
//}
void Print(int &m)
{
	cout << m;
}
void main()
{
	int a = 8;
	Print(a);
}