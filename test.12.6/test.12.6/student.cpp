#include "student.h"
void menu()
{
	cout << endl;
	cout << "***********************************************" << endl;
	cout << "** **" << endl;
	cout << "** 学生信息管理系统主菜单 **" << endl;
	cout << "** **" << endl;
	cout << "** 1.学生信息添加 **" << endl;
	cout << "** 2.学生信息修改 **" << endl;
	cout << "** 3.学生信息删除 **" << endl;
	cout << "** 4.学生信息排序 **" << endl;
	cout << "** 5.学生信息查找 **" << endl;
	cout << "** 6.学生信息显示 **" << endl;
	cout << "** 7.学生信息保存 **" << endl;
	cout << "** 0.退出 **" << endl;
	cout << "** **" << endl;
	cout << "***********************************************" << endl;
	cout << endl;
}
void domain() //主菜单函数实现
{

	StdList sl;
	while (1)
	{
		system("cls");
		menu();
		cout << "请选择数字编号0~7" << endl;
		int i1;
		cin >> i1;
		while (!(i1 >= 0 && i1 <= 1000))
		{
			cout << "输入有误，请重新输入：" << endl;
			cin >> i1;
		}
		switch (i1)
		{
		case 1:sl.add(); break;
		case 2:sl.modify(); break;
		case 3:sl.dele(); break;
		case 4:sl.sort(); break;
		case 5:sl.search(); break;
		case 6:sl.showworker(); break;
		case 7:sl.save(); break;
		case 0:cout << "系统退出！！" << endl;
			exit(0);
		default:
			break;
		}
		cout << "是否返回主菜单? Y/N" << endl;
		string p;
		cin >> p;
		if (p == "n" || p == "N")
		{
			cout << "系统退出！！" << endl;
			exit(0);
		}
	}
}

//void StdList::add() //软件工程师信息添加函数实现
//{
//	cout << "请输入软件工程师信息:" << endl;
//	cout << "工号:";
//	string num;
//	cin >> num;
//	for (int i = 0; i < NUM; i++)
//		while (num == w[i].num)
//		{
//			cout << "此软件工程师编号已存在，请重新输入：" << endl;
//			cout << "工号:";
//			cin >> num;
//		}
//	w[NUM].num = num;
//	cout << "姓名:"; cin >> w[NUM].name;
//	cout << "性别:"; cin >> w[NUM].sex;
//	cout << "学历:"; cin >> w[NUM].edu;
//	cout << "年龄:"; cin >> w[NUM].age;
//	cout << "工资:"; cin >> w[NUM].salary;
//	cout << "地址:"; cin >> w[NUM].address;
//	cout << "电话:"; cin >> w[NUM].tel;
//	++NUM;
//	count = NUM;
//}