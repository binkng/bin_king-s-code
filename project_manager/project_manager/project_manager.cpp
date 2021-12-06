#include<iostream>
#include"string"
#include<fstream>
#include <stdlib.h>
#include <stdio.h>
#define N 100 //N作为最大软件工程师总数
int f = 0; //f作为开关
using namespace std;
string p; //p作为接收菜单选项的字符串


void menu(); //显示菜单
class worker
{
public:
	//worker() {}
	void show(); //软件工程师信息显示 
	//~worker() {}
	friend class WorkerList;
private:
	string num, name, sex, edu, address, tel;
	int age, salary;
};


class WorkerList
{
private:
	worker w[N];
	int NUM; //用来计算软件工程师数目
	int count; //用来暂时记录当前操作第几个软件工程师
public:
	void add(); //软件工程师信息录入
	void sort(); //软件工程师信息排序
	void search(); //软件工程师信息查找
	void dele(); //软件工程师信息删除
	void modify(); //软件工程师信息修改
	void save(); //软件工程师信息以文件形式保存
	void showworker();//显示软件工程师信息在屏幕上
	WorkerList() {
		NUM = 0;
		count = 0;
	}
};


void menu() //显示菜单
{
	cout << endl;
	cout << "***********************************************" << endl;
	cout << "** **" << endl;
	cout << "** 软件工程师信息管理系统主菜单 **" << endl;
	cout << "** **" << endl;
	cout << "** 1.软件工程师信息添加 **" << endl;
	cout << "** 2.软件工程师信息修改 **" << endl;
	cout << "** 3.软件工程师信息删除 **" << endl;
	cout << "** 4.软件工程师信息排序 **" << endl;
	cout << "** 5.软件工程师信息查找 **" << endl;
	cout << "** 6.软件工程师信息显示 **" << endl;
	cout << "** 7.软件工程师信息保存 **" << endl;
	cout << "** 0.退出 **" << endl;
	cout << "** **" << endl;
	cout << "***********************************************" << endl;
	cout << endl;
}

void domain() //主菜单函数实现
{

	WorkerList wl;
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
		case 1:wl.add(); break;
		case 2:wl.modify(); break;
		case 3:wl.dele(); break;
		case 4:wl.sort(); break;
		case 5:wl.search(); break;
		case 6:wl.showworker(); break;
		case 7:wl.save(); break;
		case 0:cout << "系统退出！！" << endl;
			exit(0);
		default:
			break;
		}
		cout << "是否返回主菜单? Y/N" << endl;
		cin >> p;
		if (p == "n" || p == "N")
		{
			cout << "系统退出！！" << endl;
			exit(0);
		}
	}
}

void WorkerList::add() //软件工程师信息添加函数实现
{
	cout << "请输入软件工程师信息:" << endl;
	cout << "工号:";
	string num;
	cin >> num;
	for (int i = 0; i < NUM; i++)
		while (num == w[i].num)
		{
			cout << "此软件工程师编号已存在，请重新输入：" << endl;
			cout << "工号:";
			cin >> num;
		}
	w[NUM].num = num;
	cout << "姓名:"; cin >> w[NUM].name;
	cout << "性别:"; cin >> w[NUM].sex;
	cout << "学历:"; cin >> w[NUM].edu;
	cout << "年龄:"; cin >> w[NUM].age;
	cout << "工资:"; cin >> w[NUM].salary;
	cout << "地址:"; cin >> w[NUM].address;
	cout << "电话:"; cin >> w[NUM].tel;
	++NUM;
	count = NUM;
}

void worker::show() //软件工程师信息显示函数实现
{
	cout << "工号:" << num << endl;
	cout << "姓名:" << name << endl;
	cout << "性别:" << sex << endl;
	cout << "学历:" << edu << endl;
	cout << "年龄:" << age << endl;
	cout << "工资:" << salary << endl;
	cout << "地址:" << address << endl;
	cout << "电话:" << tel << endl;
	cout << endl;
}

void WorkerList::modify() //软件工程师信息修改函数实现
{
	if (NUM <= 0)
	{
		cout << "没有软件工程师信息存入，系统将返回主菜单" << endl;
		menu();
	}
	cout << "请输入需要修改信息软件工程师的工号：" << endl;
	string num1;
	cin >> num1;
	int j = 0, k;
	int flag = 1;
	while (flag)
	{
		for (; j < count; j++)
		{
			if (num1 == w[j].num)
			{
				flag = 0;
				k = j;
				break;
			}
		}
		if (flag)
		{
			cout << "不存在此员工，请重新输入：" << endl;
			j = 0;
			cin >> num1;
		}
	}
	cout << "你选择的软件工程师的信息为：" << endl;
	cout << " 工号:" << w[k].num << endl;
	cout << " 姓名:" << w[k].name << endl;
	cout << " 性别:" << w[k].sex << endl;
	cout << " 学历:" << w[k].edu << endl;
	cout << " 年龄:" << w[k].age << endl;
	cout << " 工资:" << w[k].salary << endl;
	cout << " 地址:" << w[k].address << endl;
	cout << " 电话:" << w[k].tel << endl;
	cout << endl;
	cout << "***********************************************" << endl;
	cout << "** 1.修改工号 **" << endl;
	cout << "** 2.修改姓名 **" << endl;
	cout << "** 3.修改性别 **" << endl;
	cout << "** 4.修改学历 **" << endl;
	cout << "** 5.修改年龄 **" << endl;
	cout << "** 6.修改工资 **" << endl;
	cout << "** 7.修改地址 **" << endl;
	cout << "** 8.修改电话 **" << endl;
	cout << "** 0.返回主菜单 **" << endl;
	cout << "***********************************************" << endl;
	cout << endl;
	cout << "请选择数字编号0~8" << endl;
	int i3;
	cin >> i3;
	while (i3 < 0 || i3>1000)
	{
		cout << "输入有误，请重新输入：" << endl;
		cin >> i3;
	}
	switch (i3)
	{
	case 1:
		cout << "请输入新的软件工程师工号:";
		cin >> w[k].num;
		cout << "修改信息已保存，现返回主菜单：" << endl;
		menu();
		break;
	case 2:
		cout << "请输入新的软件工程师姓名:";
		cin >> w[k].name;
		cout << "修改信息已保存，现返回主菜单：" << endl;
		menu();
		break;
	case 3:
		cout << "请输入新的软件工程师性别:";
		cin >> w[k].sex;
		cout << "修改信息已保存，现返回主菜单：" << endl;
		menu();
		break;
	case 4:
		cout << "请输入新的软件工程师学历:";
		cin >> w[k].edu;
		cout << "修改信息已保存，现返回主菜单：" << endl;
		menu();
		break;
	case 5:
		cout << "请输入新的软件工程师年龄:";
		cin >> w[k].age;
		cout << "修改信息已保存，现返回主菜单：" << endl;
		menu();
		break;
	case 6:
		cout << "请输入新的软件工程师工资:";
		cin >> w[k].salary;
		cout << "修改信息已保存，现返回主菜单：" << endl;
		menu();
		break;
	case 7:
		cout << "请输入新的软件工程师地址:";
		cin >> w[k].address;
		cout << "修改信息已保存，现返回主菜单：" << endl;
		menu();
		break;
	case 8:
		cout << "请输入新的软件工程师电话:";
		cin >> w[k].tel;
		cout << "修改信息已保存，现返回主菜单：" << endl;
		menu();
		break;
	case 0:
		menu();
	default:
		break;
	}
}

void WorkerList::showworker() //软件工程师信息显示函数实现
{
	if (NUM <= 0)
	{
		cout << "没有软件工程师信息存入，系统将返回主菜单" << endl;
		menu();
	}
	else
		cout << "已保存的软件工程师信息如下：" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << "***********************************************" << endl;
		cout << " 工号:" << w[i].num << endl;
		cout << " 姓名:" << w[i].name << endl;
		cout << " 性别:" << w[i].sex << endl;
		cout << " 学历:" << w[i].edu << endl;
		cout << " 年龄:" << w[i].age << endl;
		cout << " 工资:" << w[i].salary << endl;
		cout << " 地址:" << w[i].address << endl;
		cout << " 电话:" << w[i].tel << endl;
		cout << "***********************************************" << endl;
	}
}


void WorkerList::search() //软件工程师信息查询函数实现
{
	if (NUM <= 0)
	{
		cout << "没有软件工程师信息存入，系统将返回主菜单" << endl;
		menu();
	}
	else
		cout << "***********************************************" << endl;
	cout << "** 请选择查找方式： **" << endl;
	cout << "** 1.按工号查找 **" << endl;
	cout << "** 2.按姓名查找 **" << endl;
	cout << "** 3.按学历查找 **" << endl;
	cout << "** 0.返回主菜单 **" << endl;
	cout << "***********************************************" << endl;
	cout << endl;
	cout << "请选择数字编号0~3" << endl;
	int i4;
	cin >> i4;
	while (i4 < 0 || i4>3)
	{
		cout << "输入有误，请重新输入：" << endl;
		cin >> i4;
	}
	if (i4 == 1)
	{
		string num2;
		cout << "请输入要查询的软件工程师的工号：" << endl;
		cin >> num2;
		int j = 0, k;
		int flag = 1;
		while (flag)
		{
			for (; j < count; j++)
			{
				if (num2 == w[j].num)
				{
					flag = 0;
					k = j;
					cout << "查询的软件工程师信息如下：" << endl;
					cout << " 工号:" << w[k].num << endl;
					cout << " 姓名:" << w[k].name << endl;
					cout << " 性别:" << w[k].sex << endl;
					cout << " 学历:" << w[k].edu << endl;
					cout << " 年龄:" << w[k].age << endl;
					cout << " 工资:" << w[k].salary << endl;
					cout << " 地址:" << w[k].address << endl;
					cout << " 电话:" << w[k].tel << endl;
					break;
				}
			}
			if (flag)
			{
				flag = 0;
				cout << "不存在此软件工程师!!\n返回主菜单" << endl;
				break;
			}
		}
	}
	else if (i4 == 2)
	{
		string name2;
		cout << "请输入要查询的软件工程师的姓名：" << endl;
		cin >> name2;
		int j2 = 0, k2;
		int flag2 = 1;
		while (flag2)
		{
			for (; j2 < count; j2++)
			{
				if (name2 == w[j2].name)
				{
					flag2 = 0;
					k2 = j2;
					cout << "查询的软件工程师信息如下：" << endl;
					cout << " 工号:" << w[k2].num << endl;
					cout << " 姓名:" << w[k2].name << endl;
					cout << " 性别:" << w[k2].sex << endl;
					cout << " 学历:" << w[k2].edu << endl;
					cout << " 年龄:" << w[k2].age << endl;
					cout << " 工资:" << w[k2].salary << endl;
					cout << " 地址:" << w[k2].address << endl;
					cout << " 电话:" << w[k2].tel << endl;
					break;
				}
			}
			if (flag2)
			{
				flag2 = 0;
				cout << "不存在此软件工程师!!\n返回主菜单" << endl;
				break;
			}
		}

	}
	else if (i4 == 3)
	{
		string edu2;
		cout << "请输入要查询的软件工程师的学历：" << endl;
		cin >> edu2;
		int j4 = 0, k4;
		int flag4 = 1;
		while (flag4)
		{
			for (; j4 < count; j4++)
			{
				if (edu2 == w[j4].edu)
				{
					flag4 = 0;
					k4 = j4;
					cout << "查询的软件工程师信息如下：" << endl;
					cout << " 工号:" << w[k4].num << endl;
					cout << " 姓名:" << w[k4].name << endl;
					cout << " 性别:" << w[k4].sex << endl;
					cout << " 学历:" << w[k4].edu << endl;
					cout << " 年龄:" << w[k4].age << endl;
					cout << " 工资:" << w[k4].salary << endl;
					cout << " 地址:" << w[k4].address << endl;
					cout << " 电话:" << w[k4].tel << endl;
					break;
				}
			}
			if (flag4)
			{
				flag4 = 0;
				cout << "不存在此软件工程师!!\n返回主菜单" << endl;
				break;
			}
		}

	}
	else if (i4 == 0)
		menu();
}

void WorkerList::sort() //软件工程师信息排序功能实现
{
	if (NUM <= 0)
	{
		cout << "没有软件工程师信息存入，系统将返回主菜单" << endl;
		menu();
	}
	else
		cout << "***********************************************" << endl;
	cout << "** 请选择排序方式： **" << endl;
	cout << "** 1.按工资排序（升序） **" << endl;
	cout << "** 2.按工资排序（降序） **" << endl;
	cout << "** 0.返回主菜单 **" << endl;
	cout << "***********************************************" << endl;
	cout << endl;
	cout << "请选择数字编号0~2" << endl;
	int i5;
	cin >> i5;
	while (i5 < 0 || i5>2)
	{
		cout << "输入有误，请重新输入：" << endl;
		cin >> i5;
	}
	if (i5 == 1)
	{
		for (int i = 0; i < count - 1; i++)
			for (int j = 0; j < count - i - 1; j++)
				if (w[j].salary > w[j + 1].salary)
				{
					worker temp;
					temp = w[j];
					w[j] = w[j + 1];
					w[j + 1] = temp;
				}
		cout << "按工资升序后的信息如下：" << endl;
		for (int i = 0; i < count; i++)
		{
			cout << "***********************************************" << endl;
			cout << " 工号:" << w[i].num << endl;
			cout << " 姓名:" << w[i].name << endl;
			cout << " 性别:" << w[i].sex << endl;
			cout << " 学历:" << w[i].edu << endl;
			cout << " 年龄:" << w[i].age << endl;
			cout << " 工资:" << w[i].salary << endl;
			cout << " 地址:" << w[i].address << endl;
			cout << " 电话:" << w[i].tel << endl;
			cout << "***********************************************" << endl;
		}
	}
	else if (i5 == 2)
	{
		for (int i = 0; i < count - 1; i++)
			for (int j = 0; j < count - i - 1; j++)
				if (w[j].salary < w[j + 1].salary)
				{
					worker temp;
					temp = w[j];
					w[j] = w[j + 1];
					w[j + 1] = temp;
				}
		cout << "按工资降序后的信息如下：" << endl;
		for (int i = 0; i < count; i++)
		{
			cout << "***********************************************" << endl;
			cout << " 工号:" << w[i].num << endl;
			cout << " 姓名:" << w[i].name << endl;
			cout << " 性别:" << w[i].sex << endl;
			cout << " 学历:" << w[i].edu << endl;
			cout << " 年龄:" << w[i].age << endl;
			cout << " 工资:" << w[i].salary << endl;
			cout << " 地址:" << w[i].address << endl;
			cout << " 电话:" << w[i].tel << endl;
			cout << "***********************************************" << endl;
		}
	}
	else if (i5 == 0)
		menu();
}
void WorkerList::dele() //软件工程师信息删除函数实现
{
	if (NUM <= 0)
	{
		cout << "没有软件工程师信息存入，系统将返回主菜单" << endl;
		menu();
	}
	cout << "请输入需要删除信息软件工程师的工号：" << endl;
	string num3;
	cin >> num3;
	int j = 0, k;
	int flag = 1;
	while (flag)
	{
		for (; j < count; j++)
		{
			if (num3 == w[j].num)
			{
				flag = 0;
				k = j;
				break;
			}
		}
		if (flag)
		{
			cout << "不存在此员工，请重新输入：" << endl;
			j = 0;
			cin >> num3;
		}
	}
	cout << "你选择的软件工程师的信息为：" << endl;
	cout << " 工号:" << w[k].num << endl;
	cout << " 姓名:" << w[k].name << endl;
	cout << " 性别:" << w[k].sex << endl;
	cout << " 学历:" << w[k].edu << endl;
	cout << " 年龄:" << w[k].age << endl;
	cout << " 工资:" << w[k].salary << endl;
	cout << " 地址:" << w[k].address << endl;
	cout << " 电话:" << w[k].tel << endl;
	cout << endl;
	cout << "确认删除请输入Y，返回主菜单请输入N " << endl;
	string p;
	cin >> p;
	while (1)
	{
		if (p == "y" || p == "Y")
		{
			cout << "员工信息已删除！" << endl;
			for (int i = 0; i < count; i++)
				if (w[i].num == num3)
					int j = i;
			for (; j <= count - 1; j++)
				w[j] = w[j + 1];
			count--;
			break;
		}
		else if (p == "n" || p == "N")
		{
			menu();
		}
		else
		{
			cout << "输入有误，请重新输入：";
			cin >> p;
		}
	}
}
void WorkerList::save() //软件工程师信息保存函数实现
{
	if (NUM <= 0)
	{
		cout << "没有软件工程师信息存入，系统将返回主菜单" << endl;
		menu();
	}
	else
	{
		ofstream fout;
		fout.open("D:\\worker.txt", ios::out);
		cout << "文件正在保存......请稍候！！" << endl;
		cout << "数据保存成功！！！" << endl;
		fout << "已保存员工信息如下：" << endl;
		for (int i = 0; i < count; i++)
		{
			fout << "***********************************************" << endl;
			fout << " 工号:" << w[i].num << endl;
			fout << " 姓名:" << w[i].name << endl;
			fout << " 性别:" << w[i].sex << endl;
			fout << " 学历:" << w[i].edu << endl;
			fout << " 年龄:" << w[i].age << endl;
			fout << " 工资:" << w[i].salary << endl;
			fout << " 地址:" << w[i].address << endl;
			fout << " 电话:" << w[i].tel << endl;
			fout << "***********************************************" << endl;
		}
		cout << "系统返回主菜单：" << endl;
		menu();
		fout.close();
	}
}
int main()
{
	domain();
	return 0;
}