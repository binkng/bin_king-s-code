#include"worker.h"
void WorkerList::add() //�������ʦ��Ϣ��Ӻ���ʵ��
{
	cout << "�������������ʦ��Ϣ:" << endl;
	cout << "����:";
	string num;
	cin >> num;
	for (int i = 0; i < NUM; i++)
		while (num == w[i].num)
		{
			cout << "���������ʦ����Ѵ��ڣ����������룺" << endl;
			cout << "����:";
			cin >> num;
		}
	w[NUM].num = num;
	cout << "����:"; cin >> w[NUM].name;
	cout << "�Ա�:"; cin >> w[NUM].sex;
	cout << "ѧ��:"; cin >> w[NUM].edu;
	cout << "����:"; cin >> w[NUM].age;
	cout << "����:"; cin >> w[NUM].salary;
	cout << "��ַ:"; cin >> w[NUM].address;
	cout << "�绰:"; cin >> w[NUM].tel;
	++NUM;
	count = NUM;
}

void worker::show() //�������ʦ��Ϣ��ʾ����ʵ��
{
	cout << "����:" << num << endl;
	cout << "����:" << name << endl;
	cout << "�Ա�:" << sex << endl;
	cout << "ѧ��:" << edu << endl;
	cout << "����:" << age << endl;
	cout << "����:" << salary << endl;
	cout << "��ַ:" << address << endl;
	cout << "�绰:" << tel << endl;
	cout << endl;
}

void WorkerList::modify() //�������ʦ��Ϣ�޸ĺ���ʵ��
{
	if (NUM <= 0)
	{
		cout << "û���������ʦ��Ϣ���룬ϵͳ���������˵�" << endl;
		menu();
	}
	cout << "��������Ҫ�޸���Ϣ�������ʦ�Ĺ��ţ�" << endl;
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
			cout << "�����ڴ�Ա�������������룺" << endl;
			j = 0;
			cin >> num1;
		}
	}
	cout << "��ѡ����������ʦ����ϢΪ��" << endl;
	cout << " ����:" << w[k].num << endl;
	cout << " ����:" << w[k].name << endl;
	cout << " �Ա�:" << w[k].sex << endl;
	cout << " ѧ��:" << w[k].edu << endl;
	cout << " ����:" << w[k].age << endl;
	cout << " ����:" << w[k].salary << endl;
	cout << " ��ַ:" << w[k].address << endl;
	cout << " �绰:" << w[k].tel << endl;
	cout << endl;
	cout << "***********************************************" << endl;
	cout << "** 1.�޸Ĺ��� **" << endl;
	cout << "** 2.�޸����� **" << endl;
	cout << "** 3.�޸��Ա� **" << endl;
	cout << "** 4.�޸�ѧ�� **" << endl;
	cout << "** 5.�޸����� **" << endl;
	cout << "** 6.�޸Ĺ��� **" << endl;
	cout << "** 7.�޸ĵ�ַ **" << endl;
	cout << "** 8.�޸ĵ绰 **" << endl;
	cout << "** 0.�������˵� **" << endl;
	cout << "***********************************************" << endl;
	cout << endl;
	cout << "��ѡ�����ֱ��0~8" << endl;
	int i3;
	cin >> i3;
	while (i3 < 0 || i3>1000)
	{
		cout << "�����������������룺" << endl;
		cin >> i3;
	}
	switch (i3)
	{
	case 1:
		cout << "�������µ��������ʦ����:";
		cin >> w[k].num;
		cout << "�޸���Ϣ�ѱ��棬�ַ������˵���" << endl;
		menu();
		break;
	case 2:
		cout << "�������µ��������ʦ����:";
		cin >> w[k].name;
		cout << "�޸���Ϣ�ѱ��棬�ַ������˵���" << endl;
		menu();
		break;
	case 3:
		cout << "�������µ��������ʦ�Ա�:";
		cin >> w[k].sex;
		cout << "�޸���Ϣ�ѱ��棬�ַ������˵���" << endl;
		menu();
		break;
	case 4:
		cout << "�������µ��������ʦѧ��:";
		cin >> w[k].edu;
		cout << "�޸���Ϣ�ѱ��棬�ַ������˵���" << endl;
		menu();
		break;
	case 5:
		cout << "�������µ��������ʦ����:";
		cin >> w[k].age;
		cout << "�޸���Ϣ�ѱ��棬�ַ������˵���" << endl;
		menu();
		break;
	case 6:
		cout << "�������µ��������ʦ����:";
		cin >> w[k].salary;
		cout << "�޸���Ϣ�ѱ��棬�ַ������˵���" << endl;
		menu();
		break;
	case 7:
		cout << "�������µ��������ʦ��ַ:";
		cin >> w[k].address;
		cout << "�޸���Ϣ�ѱ��棬�ַ������˵���" << endl;
		menu();
		break;
	case 8:
		cout << "�������µ��������ʦ�绰:";
		cin >> w[k].tel;
		cout << "�޸���Ϣ�ѱ��棬�ַ������˵���" << endl;
		menu();
		break;
	case 0:
		menu();
	default:
		break;
	}
}

void WorkerList::showworker() //�������ʦ��Ϣ��ʾ����ʵ��
{
	if (NUM <= 0)
	{
		cout << "û���������ʦ��Ϣ���룬ϵͳ���������˵�" << endl;
		menu();
	}
	else
		cout << "�ѱ�����������ʦ��Ϣ���£�" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << "***********************************************" << endl;
		cout << " ����:" << w[i].num << endl;
		cout << " ����:" << w[i].name << endl;
		cout << " �Ա�:" << w[i].sex << endl;
		cout << " ѧ��:" << w[i].edu << endl;
		cout << " ����:" << w[i].age << endl;
		cout << " ����:" << w[i].salary << endl;
		cout << " ��ַ:" << w[i].address << endl;
		cout << " �绰:" << w[i].tel << endl;
		cout << "***********************************************" << endl;
	}
}


void WorkerList::search() //�������ʦ��Ϣ��ѯ����ʵ��
{
	if (NUM <= 0)
	{
		cout << "û���������ʦ��Ϣ���룬ϵͳ���������˵�" << endl;
		menu();
	}
	else
		cout << "***********************************************" << endl;
	cout << "** ��ѡ����ҷ�ʽ�� **" << endl;
	cout << "** 1.�����Ų��� **" << endl;
	cout << "** 2.���������� **" << endl;
	cout << "** 3.��ѧ������ **" << endl;
	cout << "** 0.�������˵� **" << endl;
	cout << "***********************************************" << endl;
	cout << endl;
	cout << "��ѡ�����ֱ��0~3" << endl;
	int i4;
	cin >> i4;
	while (i4 < 0 || i4>3)
	{
		cout << "�����������������룺" << endl;
		cin >> i4;
	}
	if (i4 == 1)
	{
		string num2;
		cout << "������Ҫ��ѯ���������ʦ�Ĺ��ţ�" << endl;
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
					cout << "��ѯ���������ʦ��Ϣ���£�" << endl;
					cout << " ����:" << w[k].num << endl;
					cout << " ����:" << w[k].name << endl;
					cout << " �Ա�:" << w[k].sex << endl;
					cout << " ѧ��:" << w[k].edu << endl;
					cout << " ����:" << w[k].age << endl;
					cout << " ����:" << w[k].salary << endl;
					cout << " ��ַ:" << w[k].address << endl;
					cout << " �绰:" << w[k].tel << endl;
					break;
				}
			}
			if (flag)
			{
				flag = 0;
				cout << "�����ڴ��������ʦ!!\n�������˵�" << endl;
				break;
			}
		}
	}
	else if (i4 == 2)
	{
		string name2;
		cout << "������Ҫ��ѯ���������ʦ��������" << endl;
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
					cout << "��ѯ���������ʦ��Ϣ���£�" << endl;
					cout << " ����:" << w[k2].num << endl;
					cout << " ����:" << w[k2].name << endl;
					cout << " �Ա�:" << w[k2].sex << endl;
					cout << " ѧ��:" << w[k2].edu << endl;
					cout << " ����:" << w[k2].age << endl;
					cout << " ����:" << w[k2].salary << endl;
					cout << " ��ַ:" << w[k2].address << endl;
					cout << " �绰:" << w[k2].tel << endl;
					break;
				}
			}
			if (flag2)
			{
				flag2 = 0;
				cout << "�����ڴ��������ʦ!!\n�������˵�" << endl;
				break;
			}
		}

	}
	else if (i4 == 3)
	{
		string edu2;
		cout << "������Ҫ��ѯ���������ʦ��ѧ����" << endl;
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
					cout << "��ѯ���������ʦ��Ϣ���£�" << endl;
					cout << " ����:" << w[k4].num << endl;
					cout << " ����:" << w[k4].name << endl;
					cout << " �Ա�:" << w[k4].sex << endl;
					cout << " ѧ��:" << w[k4].edu << endl;
					cout << " ����:" << w[k4].age << endl;
					cout << " ����:" << w[k4].salary << endl;
					cout << " ��ַ:" << w[k4].address << endl;
					cout << " �绰:" << w[k4].tel << endl;
					break;
				}
			}
			if (flag4)
			{
				flag4 = 0;
				cout << "�����ڴ��������ʦ!!\n�������˵�" << endl;
				break;
			}
		}

	}
	else if (i4 == 0)
		menu();
}

void WorkerList::sort() //�������ʦ��Ϣ������ʵ��
{
	if (NUM <= 0)
	{
		cout << "û���������ʦ��Ϣ���룬ϵͳ���������˵�" << endl;
		menu();
	}
	else
		cout << "***********************************************" << endl;
	cout << "** ��ѡ������ʽ�� **" << endl;
	cout << "** 1.�������������� **" << endl;
	cout << "** 2.���������򣨽��� **" << endl;
	cout << "** 0.�������˵� **" << endl;
	cout << "***********************************************" << endl;
	cout << endl;
	cout << "��ѡ�����ֱ��0~2" << endl;
	int i5;
	cin >> i5;
	while (i5 < 0 || i5>2)
	{
		cout << "�����������������룺" << endl;
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
		cout << "��������������Ϣ���£�" << endl;
		for (int i = 0; i < count; i++)
		{
			cout << "***********************************************" << endl;
			cout << " ����:" << w[i].num << endl;
			cout << " ����:" << w[i].name << endl;
			cout << " �Ա�:" << w[i].sex << endl;
			cout << " ѧ��:" << w[i].edu << endl;
			cout << " ����:" << w[i].age << endl;
			cout << " ����:" << w[i].salary << endl;
			cout << " ��ַ:" << w[i].address << endl;
			cout << " �绰:" << w[i].tel << endl;
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
		cout << "�����ʽ�������Ϣ���£�" << endl;
		for (int i = 0; i < count; i++)
		{
			cout << "***********************************************" << endl;
			cout << " ����:" << w[i].num << endl;
			cout << " ����:" << w[i].name << endl;
			cout << " �Ա�:" << w[i].sex << endl;
			cout << " ѧ��:" << w[i].edu << endl;
			cout << " ����:" << w[i].age << endl;
			cout << " ����:" << w[i].salary << endl;
			cout << " ��ַ:" << w[i].address << endl;
			cout << " �绰:" << w[i].tel << endl;
			cout << "***********************************************" << endl;
		}
	}
	else if (i5 == 0)
		menu();
}
void WorkerList::dele() //�������ʦ��Ϣɾ������ʵ��
{
	if (NUM <= 0)
	{
		cout << "û���������ʦ��Ϣ���룬ϵͳ���������˵�" << endl;
		menu();
	}
	cout << "��������Ҫɾ����Ϣ�������ʦ�Ĺ��ţ�" << endl;
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
			cout << "�����ڴ�Ա�������������룺" << endl;
			j = 0;
			cin >> num3;
		}
	}
	cout << "��ѡ����������ʦ����ϢΪ��" << endl;
	cout << " ����:" << w[k].num << endl;
	cout << " ����:" << w[k].name << endl;
	cout << " �Ա�:" << w[k].sex << endl;
	cout << " ѧ��:" << w[k].edu << endl;
	cout << " ����:" << w[k].age << endl;
	cout << " ����:" << w[k].salary << endl;
	cout << " ��ַ:" << w[k].address << endl;
	cout << " �绰:" << w[k].tel << endl;
	cout << endl;
	cout << "ȷ��ɾ��������Y���������˵�������N " << endl;
	string p;
	cin >> p;
	while (1)
	{
		if (p == "y" || p == "Y")
		{
			cout << "Ա����Ϣ��ɾ����" << endl;
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
			cout << "�����������������룺";
			cin >> p;
		}
	}
}
void WorkerList::save() //�������ʦ��Ϣ���溯��ʵ��
{
	if (NUM <= 0)
	{
		cout << "û���������ʦ��Ϣ���룬ϵͳ���������˵�" << endl;
		menu();
	}
	else
	{
		ofstream fout;
		fout.open("D:\\worker.txt", ios::out);
		cout << "�ļ����ڱ���......���Ժ򣡣�" << endl;
		cout << "���ݱ���ɹ�������" << endl;
		fout << "�ѱ���Ա����Ϣ���£�" << endl;
		for (int i = 0; i < count; i++)
		{
			fout << "***********************************************" << endl;
			fout << " ����:" << w[i].num << endl;
			fout << " ����:" << w[i].name << endl;
			fout << " �Ա�:" << w[i].sex << endl;
			fout << " ѧ��:" << w[i].edu << endl;
			fout << " ����:" << w[i].age << endl;
			fout << " ����:" << w[i].salary << endl;
			fout << " ��ַ:" << w[i].address << endl;
			fout << " �绰:" << w[i].tel << endl;
			fout << "***********************************************" << endl;
		}
		cout << "ϵͳ�������˵���" << endl;
		menu();
		fout.close();
	}
}
