#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> vec;
	cout << "size:" << vec.size() << "capacity:" << vec.capacity() << endl;


	vec.reserve(15);//�������������� ����Ԥ��Ԥ��һ������Ҫ����������

	for (int i = 0; i < 20; i++)
	{
		vec.push_back(i);//���Ԫ�� �������Զ�����������С
		cout << "size:" << vec.size() << "capacity:" << vec.capacity() << endl;
	}
	for (int j = 0; j < vec.size(); j++)
	{
		cout << vec[j] << endl;
	}
	return 0;
}