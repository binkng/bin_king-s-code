//#include<iostream>
//#include<list>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int a = 100;
//	int b = 200;
//
//	auto pfun1 = [] { cout << "Aaaa" << endl; };// �������� 
//	//������ֵ��֪����ʲô���͵�ʱ��Ϳ����� auto���Զ��Ƶ�
//	//���������Ǻ����ĵ�ַ
//	pfun1();
//	auto pfun2 = [=]()->int {return a + b; };
//	// �����зŵ��ǲ���   ->�Ƿ���ֵ
//
//	cout << pfun2() << endl;
//
//	//lambda��������ʹ�ó���
//
//	list<int> lst;
//	lst.push_back(1);
//	lst.push_back(7);
//	lst.push_back(9);
//
//	for_each(lst.begin(), lst.end(), [](int a) { cout << a << endl; });
//
//	return 0;
//}