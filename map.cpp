//#include<iostream>
//#include<map>
//using namespace std;
////��ֵ�����ظ�
//int main()
//{
//	map<int, char> mp;// ��ֵ ʵֵ
//	mp[10] = 'A';
//	mp[100] = 'B';
//	mp[30] = 'C';
//	//���ݼ�ֵ������
//	map<int, char>::iterator ite=mp.begin();
//
//	while (ite != mp.end())
//	{
//		//ite->second = 'Q';// �ɸ���
//		cout << ite->first << "  " << ite->second << endl;
//		//first�Ǽ�ֵ �����޸� second��ʵֵ �����޸�
//		//ite->first = 1000;  //�����Ը���
//		ite++;
//	}
//	cout << endl;
//
//	pair<int, char> pa(250, 'b');//����һ��pair����
//
//	mp.insert(pa);//����һ��pair����
//
//	mp[100] = 'o';//ֱ�Ӷ�ʵֵ����
//	ite = mp.begin();
//	while (ite != mp.end())
//	{
//		cout << ite->first << "  " << ite->second << endl;
//		
//		ite++;
//	}
//
//	ite = mp.find(100);//���Һ���
//	cout << ite->first << "  " << ite->second << endl;
//	return 0;
//}