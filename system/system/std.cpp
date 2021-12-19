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
	string a;//�����жϲ˵�ѡ��
	Menu();
	while (cin >> a)
	{
		if (a == "1")
		{
			cout << "��ѡ����1:¼��ѧ��" << endl;
			Input(stu, currentN);//����
			Menu();
		}
		else if (a == "2")
		{
			cout << "��ѡ����2:��ʾ��Ϣ" << endl;
			Output(stu, currentN);//����ɼ���Ϣ
			Menu();
		}
		else if (a == "3")
		{
			cout << "��ѡ����3:��������" << endl;
			Order(stu, currentN);
			Menu();
		}
		else if (a == "4")
		{
			cout << "��ѡ����4:����ѧ��" << endl;
			Search(stu, currentN);
			Menu();
		}
		else if (a == "5")
		{
			cout << "��ѡ����5:����ѧ��" << endl;
			Input(stu, currentN);
			Menu();
		}
		else if (a == "6")
		{
			cout << "��ѡ����6:ɾ��ѧ��" << endl;
			Delete(stu, currentN);
			Menu();
		}
		else if (a == "7")
		{
			cout << "��ѡ����7:ͳ������" << endl;
			cout << "     100~90    89~80    79~70    69~60     <60" << endl;
			Statis(stu, currentN);
			Menu();
		}
		else if (a == "0")
		{
			cout << "�˳��ɹ���";
			return 0;
		}
		else
		{
			cout << "����Ƿ������������룡" << endl;
			Menu();
		}
	}
	return 0;
}
//����ɼ� 
void Input(float stu[], int& num)
{
	float score;//ѧ���ɼ�
	int i = 0; //����
	string str;//�����ж��Ƿ����������ַ���
	if (num == 0)
	{
		while (true)
		{
			cout << "������ɼ���0~100����";
			cin >> score;
			if (score >= 0 && score <= 100)
			{
				stu[i] = score;
				i++;
				cout << "��������ѧ������ �밴y��Y��";
				cin >> str;
				if (i == MAX_STUDENT_NUM)
				{
					cout << "�����Ѵﵽ" << MAX_STUDENT_NUM << "�����ޣ��޷������룡\n";
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
				cout << "������󣬳ɼ�Ӧ����0��100֮�䣡\n";
				cout << "��������ѧ������ �밴y��Y��";
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
			cout << "�����Ѵﵽ" << MAX_STUDENT_NUM << "�����ޣ��޷��ٲ��룡\n";
		}
		else
		{
			i = num;//��ǰ����Ԫ�ظ���
			while (true)
			{
				cout << "������ɼ���0~100����";
				cin >> score;

				if (score >= 0 && score <= 100)
				{
					stu[i] = score;
					i++;
					cout << "��������ѧ�������밴y��Y��";
					cin >> str;
					if (i == MAX_STUDENT_NUM)
					{
						cout << "�����Ѵﵽ" << MAX_STUDENT_NUM << "�����ޣ��޷������룡\n";
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
					cout << "������󣬳ɼ�Ӧ����0��100֮�䣡\n";
					cout << "��������ѧ�������밴y��Y��";
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
			num = i;//��ǰ����Ԫ��
		}
	}
}
//����ɼ���Ϣ 
void Output(float stu[], int num)
{
	if (num != 0)
	{
		cout << "�ɼ���Ϣ���£�" << endl;
		for (int i = 0; i < num; i++)
		{
			cout << " " << setiosflags(ios::fixed) << setprecision(1) << stu[i];
		}
		cout << endl;
	}
	else
	{
		cout << "���޳ɼ���Ϣ����ѡ��1:¼��ѧ����Ϣ" << endl;
	}
}
//ͳ������ 
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
//���� 
void Order(float stu[], int num)
{
	if (num != 0)
	{
		int temp = 0, i, j, k;
		for (i = 0; i < num; i++)
		{
			for (j = 0; j < num - i - 1; j++)
			{
				if (stu[j] < stu[j + 1])//���ǰһ��Ԫ��С�ں�һ��Ԫ��
				{
					temp = stu[j];
					stu[j] = stu[j + 1];
					stu[j + 1] = temp;
				}
			}
		}
		cout << "�ɼ���Ϣ���£�" << endl;
		for (k = 0; k < num; k++)
		{
			cout << setw(9) << stu[k];
		}
		cout << endl;
	}
	else
	{
		cout << "���޳ɼ���Ϣ����ѡ��1:¼��ѧ����Ϣ" << endl;
	}
}
//���� 
void Search(float stu[], int num)
{
	float score;
	string str;//�����ж��Ƿ����������ַ���
	while (true)
	{
		cout << "��������Ҫ���ҵĳɼ���";
		cin >> score;
		int flag = 0;
		if (score >= 0 && score <= 100)
		{
			for (int i = 0; i < num; i++)
			{
				if (stu[i] == score)
				{
					flag++;
					cout << "���ҵ���" << flag << "������ɼ���  " << stu[i] << endl;
				}
			}
			if (flag == 0)
			{
				cout << "û�и�ѧ����Ϣ��" << endl;
			}
			cout << "���������밴y��Y��";
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
			cout << "������󣬳ɼ�Ӧ����0��100֮�䣡\n";
			cout << "���������밴y��Y��";
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
//ɾ�� 
void Delete(float stu[], int& num)
{
	float score;
	string str;//�����ж��Ƿ����������ַ���
	while (true)
	{
		cout << "��������Ҫɾ���ĳɼ���";
		cin >> score;
		int flag = 0;//����ͳ��ɾ����ʣ�������Ԫ�ظ���
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
				cout << "û�и�ѧ����" << endl;
			}
			else
			{
				num = flag;
				for (int k = 0; k < num; k++)
				{
					stu[k] = a[k];
				}
				cout << setiosflags(ios::fixed) << setprecision(1) << score << "��ѧ����Ϣɾ���ɹ���" << endl;
			}
			cout << "����ɾ������ѧ���밴y��Y��";
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
			cout << "������󣬳ɼ�Ӧ����0��100֮�䣡\n";
			cout << "����ɾ������ѧ���밴y��Y��";
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
//���˵� 
void Menu()
{
	cout << "          *************************************************\n";
	cout << "          *             ��ӭʹ�óɼ�����ϵͳ              *\n";
	cout << "          *           1:¼��ѧ��     2:��ʾ��Ϣ           *\n";
	cout << "          *           3:��������     4:����ѧ��           *\n";
	cout << "          *           5:����ѧ��     6:ɾ��ѧ��           *\n";
	cout << "          *           7:ͳ������     0:�˳�               *\n";
	cout << "          *************************************************\n";
	cout << "��ѡ��:";

}

