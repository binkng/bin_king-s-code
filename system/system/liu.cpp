//#include<iostream>
//#include<string>
//#define MAX 1000//ͨѶ¼�����������
//using namespace std;
////������ϵ�˽ṹ�壻
//struct Lxr
//{
//	int tag;//tag��ʾ��ǰ�洢��Ԫ״̬��1��ʾ��ռ�ã�0��ʾ���У�
//	string name;
//	int sex;
//	int age;
//	string tel;
//	string address;
//};
//Lxr Info[MAX];//����ͨѶ¼��
//int Total = 0;//ͨѶ¼����������
//
//
//void Showmenu()
//{
//	cout << "********************" << endl;
//	cout << "***1�������ϵ��****" << endl;
//	cout << "***2����ʾ��ϵ��****" << endl;
//	cout << "***3��ɾ����ϵ��****" << endl;
//	cout << "***4��������ϵ��****" << endl;
//	cout << "***5���޸���ϵ��****" << endl;
//	cout << "***6�������ϵ��****" << endl;
//	cout << "***0���˳�ͨѶ¼****" << endl;
//	cout << "********************" << endl;
//}
////1����ʾ����ѡ��˵���
//
//int Find(struct Lxr* p, string s)
//{
//	int i, flag = 0;
//	for (i = 0; i < MAX; i++)
//	{
//		if (p[i].name == s)
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 1)
//		return i;
//	else
//		return -1;
//}
////2��������ϵ�ˣ����ҵ�����������λ�ã��Ҳ����򷵻�-1��
//
//void Add(Lxr* p)
//{
//	if (Total == MAX)
//	{
//		cout << "Your contacts have been full! Cannot append to the list!" << endl;
//	}
//	else
//	{
//		int flag = 0, k = 0;//flag��¼��������С�Ŀ���λ�ã�k��ʾ��ǰ���鵥Ԫռ��״̬��
//		for (int i = 0; i < MAX; i++)
//		{
//
//			if (p[i].tag == 0)
//			{
//				flag = i;
//				k = 1;//kΪ1��ʾռ�õ�ǰ���鵥Ԫ��
//				break;
//			}
//		}
//		if (k == 1)
//		{
//			cout << "Please input the name:";
//			cin >> p[flag].name;
//			int f = Find(Info, p[flag].name);
//			if (f != -1 && p[f].tag == 1)
//			{
//				cout << "Find repeated record! Cannot input!" << endl;
//			}
//			else
//			{
//				p[flag].tag = 1;//tagΪ1��ʾռ�õ�ǰ���鵥Ԫ��
//				cout << "sex(male is 1 and female is 2):";
//				cin >> p[flag].sex;
//				while (1)
//				{
//					if (p[flag].sex == 1 || p[flag].sex == 2)
//						break;
//					else
//					{
//						cout << "Wrong form! Please input again!" << endl;
//						cin >> p[flag].sex;
//					}
//				}
//				cout << "age:";
//				cin >> p[flag].age;
//				cout << "tel nember:";
//				cin >> p[flag].tel;
//				cout << "address:";
//				cin >> p[flag].address;
//				cout << "Succeed!" << endl;
//				Total++;
//			}
//
//		}
//	}
//	//�������������
//	system("pause");
//	system("cls");
//}
////3�������ϵ�ˣ�����MAX����
//
//void Showcontects(struct Lxr* p)
//{
//	if (Total == 0)
//	{
//		cout << "The contects is empty!" << endl;
//	}
//	else
//	{
//		cout << "Name\t" << "Sex:\t" << "Age:\t" << "Tel:\t\t" << "Address:" << endl;
//		for (int i = 0; i < MAX; i++)
//		{
//			if (p[i].tag == 1)
//			{
//				cout << p[i].name << "\t" << (p[i].sex == 1 ? "Male" : "Female")
//					<< "\t" << p[i].age << "\t" << p[i].tel << "\t\t"
//					<< p[i].address << endl;
//			}
//
//		}
//	}
//	//�������������
//	system("pause");
//	system("cls");
//}
////4����ʾͨѶ¼�е�������ϵ�ˣ�
//
//void Delete(struct Lxr* p)
//{
//	cout << "Please input the name:" << endl;
//	string k;
//	cin >> k;
//	int f = Find(p, k);
//	if (f == -1)
//	{
//		cout << "Cannot find the target! Please check again!" << endl;
//	}
//	else
//	{
//		p[f].tag = 0;
//		Total--;
//		cout << "Succeed in deleting the record!" << endl;
//	}
//	//�������������
//	system("pause");
//	system("cls");
//}
////5��ɾ����ϵ�ˣ�
//
//void Showone(struct Lxr* p, int pl)
//{
//	cout << "Name\t" << "Sex:\t" << "Age:\t" << "Tel:\t\t" << "Address:" << endl;
//	cout << p[pl].name << "\t" << (p[pl].sex == 1 ? "Male" : "Female") << "\t"
//		<< p[pl].age << "\t" << p[pl].tel << "\t\t" << p[pl].address << endl;
//	//�������������
//	system("pause");
//	system("cls");
//}
////6����ʾ������ϵ�ˣ�
//
//int Backtomenu()
//{
//	cout << "Please input ��B�� or ��b�� if you want to go back or input ��C��or ��c�� to continue!" << endl;
//	string b;
//	cin >> b;
//	if (b == "B" || b == "b")
//	{
//		//����
//		system("cls");
//		return 1;
//	}
//	return 0;
//}
////7�����ع���ѡ��˵�
//
//void Modify(struct Lxr* p)
//{
//	cout << "Please input the name of the target:" << endl;
//	string n;
//	cin >> n;
//	int f = Find(p, n);
//	while (f == -1)
//	{
//		cout << "Cannot find the target! Please input the name of the target again:" << endl;
//		cin >> n;
//		f = Find(p, n);
//	}
//	if (f != -1)
//	{
//		cout << "input the new name:";
//		cin >> p[f].name;
//		cout << "input the sex(male is 1 and female is 2):";
//		cin >> p[f].sex;
//		cout << "input the age:";
//		cin >> p[f].age;
//		cout << "input the tel number:";
//		cin >> p[f].tel;
//		cout << "input the address:";
//		cin >> p[f].address;
//	}
//	//�������������
//	system("pause");
//	system("cls");
//}
////8���޸���ϵ����Ϣ��
//
//void Clearall(struct Lxr* p)
//{
//	for (int i = 0; i < MAX; i++)
//	{
//		p[i].tag = 0;
//	}
//	Total = 0;
//	cout << "Succeed in clearing the contects!" << endl;
//	//�����������
//	system("pause");
//	system("cls");
//}
////9�����������ϵ��(����Ҫ������飬ֻ��Ҫ��tag���㣬���߼��ϵ���ռ���)��
//
//int main()
//{
//
//	int n;
//	cout << "Please input the service you need:" << endl;
//	Showmenu();
//	cin >> n;
//	while (n)
//	{
//		switch (n)
//		{
//		case 1:
//		{
//			if (Backtomenu() == 1)
//				break;
//			Add(Info);
//		}
//		break; //1�������ϵ��
//		case 2:
//		{
//			Showcontects(Info);
//		}
//		break; //2����ʾ��ϵ��
//		case 3:
//		{
//			if (Backtomenu() == 1)
//				break;
//			Delete(Info);
//		}
//		break;  //3��ɾ����ϵ��
//		case 4:
//		{
//			if (Backtomenu() == 1)
//				break;
//			cout << "please input the name:" << endl;
//			string s;
//			cin >> s;
//			int f = Find(Info, s);
//			if (f == -1)
//			{
//				cout << "Cannot find the target! Please check again!" << endl;
//				//�������������
//				system("pause");
//				system("cls");
//			}
//			else
//			{
//				Showone(Info, f);
//			}
//		}
//		break; //4��������ϵ��
//		case 5:
//		{
//			if (Backtomenu() == 1)
//				break;
//			Modify(Info);
//		}
//		break; //5���޸���ϵ��
//		case 6:
//		{
//			if (Backtomenu() == 1)
//				break;
//			Clearall(Info);
//		}
//		break; //6�������ϵ��
//		}
//		cout << "Please input the service you need:" << endl;
//
//		Showmenu();//�����˳������û�����һֱ�ڹ���ѡ��������ѡ��
//		cin >> n;
//	}
//	if (n == 0)
//		cout << "Thanks! Welcome to your use next time!" << endl;
//
//
//	system("pause");
//
//	return 0;
//}
