//#include<iostream>
//using namespace std;
//
//class Friend
//{
//public:
//	int nRp;//��Ʒ
//public:
//	Friend(int nRp)
//	{
//		this->nRp = nRp;
//	}
//public:
//	void Play()
//	{
//		cout << "������" << endl;
//	}
//};
//class Person
//{
//private:
//	Friend* pFriend;
//public:
//	Person()
//	{
//		pFriend = NULL;
//	}
//public:
//	void SetFriend(Friend* pFriend)
//	{
//		if (pFriend->nRp > 50)
//		{
//			cout << "���Խ�����" << endl;
//		}
//		else
//		{
//			cout << "��Ʒ����" << endl;
//		}
//	}
//	void Play()
//	{
//		if (pFriend)
//		{
//			pFriend->Play();
//			cout<< "��friendһ����" << endl;
//		}
//		else
//		{
//			cout << "�Լ�һ������" << endl;
//		}
//	}
//};
//
//int main()
//
//{
//	Friend fr(9);
//	Person ps;
//	ps.SetFriend(&fr);
//	ps.Play();
//
//
//
//
//	return 0;
//}