#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> vec;
	cout << "size:" << vec.size() << "capacity:" << vec.capacity() << endl;


	vec.reserve(15);//增加容器的容量 可以预先预估一下所需要的容器容量

	for (int i = 0; i < 20; i++)
	{
		vec.push_back(i);//添加元素 不够会自动扩容容器大小
		cout << "size:" << vec.size() << "capacity:" << vec.capacity() << endl;
	}
	for (int j = 0; j < vec.size(); j++)
	{
		cout << vec[j] << endl;
	}
	return 0;
}