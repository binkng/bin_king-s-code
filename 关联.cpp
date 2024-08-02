//#include<iostream>
//using namespace std;
//
//class Friend
//{
//public:
//	int nRp;//人品
//public:
//	Friend(int nRp)
//	{
//		this->nRp = nRp;
//	}
//public:
//	void Play()
//	{
//		cout << "玩玩玩" << endl;
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
//			cout << "可以交朋友" << endl;
//		}
//		else
//		{
//			cout << "人品不行" << endl;
//		}
//	}
//	void Play()
//	{
//		if (pFriend)
//		{
//			pFriend->Play();
//			cout<< "和friend一起玩" << endl;
//		}
//		else
//		{
//			cout << "自己一个人玩" << endl;
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