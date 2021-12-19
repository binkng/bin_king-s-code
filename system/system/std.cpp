#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
const int MAX_STUDENT_NUM = 5;
void Input(float stu[], int& num);
void Output(float stu[], int num);
void Statis(float stu[], int num);
void Order(float stu[], int num);
void Search(float stu[], int num);
void Delete(float stu[], int& num);
void Menu();
int main()
{
	int currentN = 0;
	float stu[MAX_STUDENT_NUM];
	string a;//用来判断菜单选择
	Menu();
	while (cin >> a)
	{
		if (a == "1")
		{
			cout << "您选择了1:录入学生" << endl;
			Input(stu, currentN);//输入
			Menu();
		}
		else if (a == "2")
		{
			cout << "您选择了2:显示信息" << endl;
			Output(stu, currentN);//输出成绩信息
			Menu();
		}
		else if (a == "3")
		{
			cout << "您选择了3:排序总评" << endl;
			Order(stu, currentN);
			Menu();
		}
		else if (a == "4")
		{
			cout << "您选择了4:查找学生" << endl;
			Search(stu, currentN);
			Menu();
		}
		else if (a == "5")
		{
			cout << "您选择了5:插入学生" << endl;
			Input(stu, currentN);
			Menu();
		}
		else if (a == "6")
		{
			cout << "您选择了6:删除学生" << endl;
			Delete(stu, currentN);
			Menu();
		}
		else if (a == "7")
		{
			cout << "您选择了7:统计人数" << endl;
			cout << "     100~90    89~80    79~70    69~60     <60" << endl;
			Statis(stu, currentN);
			Menu();
		}
		else if (a == "0")
		{
			cout << "退出成功！";
			return 0;
		}
		else
		{
			cout << "输入非法，请重新输入！" << endl;
			Menu();
		}
	}
	return 0;
}
//输入成绩 
void Input(float stu[], int& num)
{
	float score;//学生成绩
	int i = 0; //人数
	string str;//用来判断是否继续输入的字符串
	if (num == 0)
	{
		while (true)
		{
			cout << "请输入成绩（0~100）：";
			cin >> score;
			if (score >= 0 && score <= 100)
			{
				stu[i] = score;
				i++;
				cout << "继续输入学生数据 请按y或Y：";
				cin >> str;
				if (i == MAX_STUDENT_NUM)
				{
					cout << "人数已达到" << MAX_STUDENT_NUM << "人上限，无法再输入！\n";
					break;
				}
				if (str == "y" || str == "Y")
				{
					continue;
				}
				else
				{
					break;
				}
			}
			else
			{
				cout << "输入错误，成绩应该在0到100之间！\n";
				cout << "继续输入学生数据 请按y或Y：";
				cin >> str;
				if (str == "y" || str == "Y")
				{
					continue;
				}
				else
				{
					break;
				}
			}
		}
		num = i;
	}
	else
	{
		if (num == MAX_STUDENT_NUM)
		{
			cout << "人数已达到" << MAX_STUDENT_NUM << "人上限，无法再插入！\n";
		}
		else
		{
			i = num;//当前数组元素个数
			while (true)
			{
				cout << "请输入成绩（0~100）：";
				cin >> score;

				if (score >= 0 && score <= 100)
				{
					stu[i] = score;
					i++;
					cout << "继续输入学生数据请按y或Y：";
					cin >> str;
					if (i == MAX_STUDENT_NUM)
					{
						cout << "人数已达到" << MAX_STUDENT_NUM << "人上限，无法再输入！\n";
						break;
					}
					if (str == "y" || str == "Y")
					{
						continue;
					}
					else
					{
						break;
					}
				}
				else
				{
					cout << "输入错误，成绩应该在0到100之间！\n";
					cout << "继续输入学生数据请按y或Y：";
					cin >> str;
					if (str == "y" || str == "Y")
					{
						continue;
					}
					else
					{
						break;
					}
				}
			}
			num = i;//当前数组元素
		}
	}
}
//输出成绩信息 
void Output(float stu[], int num)
{
	if (num != 0)
	{
		cout << "成绩信息如下：" << endl;
		for (int i = 0; i < num; i++)
		{
			cout << " " << setiosflags(ios::fixed) << setprecision(1) << stu[i];
		}
		cout << endl;
	}
	else
	{
		cout << "暂无成绩信息，请选择1:录入学生信息" << endl;
	}
}
//统计人数 
void Statis(float stu[], int num)
{
	int	i, a[5] = { 0 };
	for (i = 0; i < num; i++)
	{
		if (stu[i] >= 90 && stu[i] <= 100)
		{
			a[0] += 1;
		}
		else if (stu[i] >= 80 && stu[i] < 90)
		{
			a[1] += 1;
		}
		else if (stu[i] >= 70 && stu[i] < 80)
		{
			a[2] += 1;
		}
		else if (stu[i] >= 60 && stu[i] < 70)
		{
			a[3] += 1;
		}
		else
		{
			a[4] += 1;
		}
	}
	for (i = 0; i < 5; i++)
	{
		cout << setw(9) << a[i];
	}
	cout << endl;
}
//排序 
void Order(float stu[], int num)
{
	if (num != 0)
	{
		int temp = 0, i, j, k;
		for (i = 0; i < num; i++)
		{
			for (j = 0; j < num - i - 1; j++)
			{
				if (stu[j] < stu[j + 1])//如果前一个元素小于后一个元素
				{
					temp = stu[j];
					stu[j] = stu[j + 1];
					stu[j + 1] = temp;
				}
			}
		}
		cout << "成绩信息如下：" << endl;
		for (k = 0; k < num; k++)
		{
			cout << setw(9) << stu[k];
		}
		cout << endl;
	}
	else
	{
		cout << "暂无成绩信息，请选择1:录入学生信息" << endl;
	}
}
//查找 
void Search(float stu[], int num)
{
	float score;
	string str;//用来判断是否继续输入的字符串
	while (true)
	{
		cout << "请输入您要查找的成绩：";
		cin >> score;
		int flag = 0;
		if (score >= 0 && score <= 100)
		{
			for (int i = 0; i < num; i++)
			{
				if (stu[i] == score)
				{
					flag++;
					cout << "查找到第" << flag << "个相符成绩：  " << stu[i] << endl;
				}
			}
			if (flag == 0)
			{
				cout << "没有该学生信息！" << endl;
			}
			cout << "继续查找请按y或Y：";
			cin >> str;
			if (str == "y" || str == "Y")
			{
				continue;
			}
			else
			{
				break;
			}
		}
		else
		{
			cout << "输入错误，成绩应该在0到100之间！\n";
			cout << "继续查找请按y或Y：";
			cin >> str;
			if (str == "y" || str == "Y")
			{
				continue;
			}
			else
			{
				break;
			}
		}
	}
}
//删除 
void Delete(float stu[], int& num)
{
	float score;
	string str;//用来判断是否继续输入的字符串
	while (true)
	{
		cout << "请输入您要删除的成绩：";
		cin >> score;
		int flag = 0;//用来统计删除后剩余的数组元素个数
		float a[100];
		if (score >= 0 && score <= 100)
		{
			for (int i = 0; i < num; i++)
			{
				if (stu[i] != score)
				{
					a[flag] = stu[i];
					flag++;
				}
			}
			if (flag == num)
			{
				cout << "没有该学生！" << endl;
			}
			else
			{
				num = flag;
				for (int k = 0; k < num; k++)
				{
					stu[k] = a[k];
				}
				cout << setiosflags(ios::fixed) << setprecision(1) << score << "分学生信息删除成功！" << endl;
			}
			cout << "继续删除其他学生请按y或Y：";
			cin >> str;
			if (str == "y" || str == "Y")
			{
				continue;
			}
			else
			{
				break;
			}
		}
		else
		{
			cout << "输入错误，成绩应该在0到100之间！\n";
			cout << "继续删除其他学生请按y或Y：";
			cin >> str;
			if (str == "y" || str == "Y")
			{
				continue;
			}
			else
			{
				break;
			}
		}
	}
}
//主菜单 
void Menu()
{
	cout << "          *************************************************\n";
	cout << "          *             欢迎使用成绩管理系统              *\n";
	cout << "          *           1:录入学生     2:显示信息           *\n";
	cout << "          *           3:排序总评     4:查找学生           *\n";
	cout << "          *           5:插入学生     6:删除学生           *\n";
	cout << "          *           7:统计人数     0:退出               *\n";
	cout << "          *************************************************\n";
	cout << "请选择:";

}

