#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> lst;

	lst.push_back(1);
	lst.push_back(3);
	lst.push_back(5);

	lst.push_front(7);
	lst.push_front(9);
	lst.push_front(11);

	list<int>::iterator ite = lst.begin();
	while (ite != lst.end())
	{
		
		if (*ite == 9)
		{
			//	ite=lst.insert(ite,666);
			//插入在某个迭代器的前面 返回的就是所插入元素的迭代器（地址）

			//	cout << *ite << endl;
			//	ite++;


			ite=lst.erase(ite);
			//返回的是所删除迭代器（所指向的那个元素）的下一个
		}
		
		cout << *ite << endl;
		ite++;
	}


	return 0;
}