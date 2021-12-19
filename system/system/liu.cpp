//#include<iostream>
//#include<string>
//#define MAX 1000//通讯录的最大容量；
//using namespace std;
////定义联系人结构体；
//struct Lxr
//{
//	int tag;//tag表示当前存储单元状态，1表示被占用，0表示空闲；
//	string name;
//	int sex;
//	int age;
//	string tel;
//	string address;
//};
//Lxr Info[MAX];//创建通讯录；
//int Total = 0;//通讯录中总人数；
//
//
//void Showmenu()
//{
//	cout << "********************" << endl;
//	cout << "***1、添加联系人****" << endl;
//	cout << "***2、显示联系人****" << endl;
//	cout << "***3、删除联系人****" << endl;
//	cout << "***4、查找联系人****" << endl;
//	cout << "***5、修改联系人****" << endl;
//	cout << "***6、清空联系人****" << endl;
//	cout << "***0、退出通讯录****" << endl;
//	cout << "********************" << endl;
//}
////1、显示功能选择菜单；
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
////2、查找联系人，若找到返回其所在位置，找不到则返回-1；
//
//void Add(Lxr* p)
//{
//	if (Total == MAX)
//	{
//		cout << "Your contacts have been full! Cannot append to the list!" << endl;
//	}
//	else
//	{
//		int flag = 0, k = 0;//flag记录数组中最小的空闲位置，k表示当前数组单元占用状态；
//		for (int i = 0; i < MAX; i++)
//		{
//
//			if (p[i].tag == 0)
//			{
//				flag = i;
//				k = 1;//k为1表示占用当前数组单元；
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
//				p[flag].tag = 1;//tag为1表示占用当前数组单元；
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
//	//按任意键清屏；
//	system("pause");
//	system("cls");
//}
////3、添加联系人，上限MAX名；
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
//	//按任意键清屏；
//	system("pause");
//	system("cls");
//}
////4、显示通讯录中的所有联系人；
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
//	//按任意键清屏；
//	system("pause");
//	system("cls");
//}
////5、删除联系人；
//
//void Showone(struct Lxr* p, int pl)
//{
//	cout << "Name\t" << "Sex:\t" << "Age:\t" << "Tel:\t\t" << "Address:" << endl;
//	cout << p[pl].name << "\t" << (p[pl].sex == 1 ? "Male" : "Female") << "\t"
//		<< p[pl].age << "\t" << p[pl].tel << "\t\t" << p[pl].address << endl;
//	//按任意键清屏；
//	system("pause");
//	system("cls");
//}
////6、显示单个联系人；
//
//int Backtomenu()
//{
//	cout << "Please input “B” or “b” if you want to go back or input “C”or “c” to continue!" << endl;
//	string b;
//	cin >> b;
//	if (b == "B" || b == "b")
//	{
//		//清屏
//		system("cls");
//		return 1;
//	}
//	return 0;
//}
////7、返回功能选择菜单
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
//	//按任意键清屏；
//	system("pause");
//	system("cls");
//}
////8、修改联系人信息；
//
//void Clearall(struct Lxr* p)
//{
//	for (int i = 0; i < MAX; i++)
//	{
//		p[i].tag = 0;
//	}
//	Total = 0;
//	cout << "Succeed in clearing the contects!" << endl;
//	//按任意键清屏
//	system("pause");
//	system("cls");
//}
////9、清空所有联系人(不需要清空数组，只需要将tag置零，做逻辑上的清空即可)；
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
//		break; //1、添加联系人
//		case 2:
//		{
//			Showcontects(Info);
//		}
//		break; //2、显示联系人
//		case 3:
//		{
//			if (Backtomenu() == 1)
//				break;
//			Delete(Info);
//		}
//		break;  //3、删除联系人
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
//				//按任意键清屏；
//				system("pause");
//				system("cls");
//			}
//			else
//			{
//				Showone(Info, f);
//			}
//		}
//		break; //4、查找联系人
//		case 5:
//		{
//			if (Backtomenu() == 1)
//				break;
//			Modify(Info);
//		}
//		break; //5、修改联系人
//		case 6:
//		{
//			if (Backtomenu() == 1)
//				break;
//			Clearall(Info);
//		}
//		break; //6、清空联系人
//		}
//		cout << "Please input the service you need:" << endl;
//
//		Showmenu();//若不退出，则用户可以一直在功能选择界面进行选择；
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
