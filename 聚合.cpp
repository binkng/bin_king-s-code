//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	void Play()
//	{
//		cout << "������" << endl;
//	}
//};
//class Family
//{
//public:
//	Person* arr[10];
//public:
//	Family()
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			arr[i] = NULL;
//		}
//	}
//public:
//	void PushPerson(Person* pPs)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			if (arr[i] == NULL)
//			{
//				arr[i] = pPs;
//				return;//���һ���Ϳ���ֱ���˳���
//			}
//		}
//
//	}
//	void Play()
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			if (arr[i])
//			{
//				arr[i]->Play();
//			}
//			//cout << "-------NULL--------" << endl;
//		}
//		cout << "-------NULL--------" << endl;
//	}
//};
//
//int main()
//{
//
//	Person ps1, ps2, ps3, ps4;
//	Family fam;
//	fam.arr[0] = &ps1;
//	fam.arr[1] = &ps2;
//	fam.arr[2] = &ps3;
//	fam.arr[3] = &ps4;
//	fam.Play();
//
//	return 0;
//}