#include<iostream>
#include<unordered_map>
using namespace std;
//���� ����������map�÷�����һ�� ��ֵ���ظ�
int main()
{
	unordered_map<int, char> mp;
	mp[10] = 'a';
	mp[20] = 'p';
	mp[1] = 'q';

	unordered_map<int, char>::iterator ite = mp.begin();
	while (ite!=mp.end())
	{
		cout << ite->first << " " << ite->second << endl;
		ite++;
	}
	return 0;
}