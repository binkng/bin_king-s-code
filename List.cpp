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
			//������ĳ����������ǰ�� ���صľ���������Ԫ�صĵ���������ַ��

			//	cout << *ite << endl;
			//	ite++;


			ite=lst.erase(ite);
			//���ص�����ɾ������������ָ����Ǹ�Ԫ�أ�����һ��
		}
		
		cout << *ite << endl;
		ite++;
	}


	return 0;
}