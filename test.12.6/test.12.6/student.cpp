#include "student.h"
void menu()
{
	cout << endl;
	cout << "***********************************************" << endl;
	cout << "** **" << endl;
	cout << "** ѧ����Ϣ����ϵͳ���˵� **" << endl;
	cout << "** **" << endl;
	cout << "** 1.ѧ����Ϣ��� **" << endl;
	cout << "** 2.ѧ����Ϣ�޸� **" << endl;
	cout << "** 3.ѧ����Ϣɾ�� **" << endl;
	cout << "** 4.ѧ����Ϣ���� **" << endl;
	cout << "** 5.ѧ����Ϣ���� **" << endl;
	cout << "** 6.ѧ����Ϣ��ʾ **" << endl;
	cout << "** 7.ѧ����Ϣ���� **" << endl;
	cout << "** 0.�˳� **" << endl;
	cout << "** **" << endl;
	cout << "***********************************************" << endl;
	cout << endl;
}
void domain() //���˵�����ʵ��
{

	StdList sl;
	while (1)
	{
		system("cls");
		menu();
		cout << "��ѡ�����ֱ��0~7" << endl;
		int i1;
		cin >> i1;
		while (!(i1 >= 0 && i1 <= 1000))
		{
			cout << "�����������������룺" << endl;
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
		case 0:cout << "ϵͳ�˳�����" << endl;
			exit(0);
		default:
			break;
		}
		cout << "�Ƿ񷵻����˵�? Y/N" << endl;
		string p;
		cin >> p;
		if (p == "n" || p == "N")
		{
			cout << "ϵͳ�˳�����" << endl;
			exit(0);
		}
	}
}

//void StdList::add() //�������ʦ��Ϣ��Ӻ���ʵ��
//{
//	cout << "�������������ʦ��Ϣ:" << endl;
//	cout << "����:";
//	string num;
//	cin >> num;
//	for (int i = 0; i < NUM; i++)
//		while (num == w[i].num)
//		{
//			cout << "���������ʦ����Ѵ��ڣ����������룺" << endl;
//			cout << "����:";
//			cin >> num;
//		}
//	w[NUM].num = num;
//	cout << "����:"; cin >> w[NUM].name;
//	cout << "�Ա�:"; cin >> w[NUM].sex;
//	cout << "ѧ��:"; cin >> w[NUM].edu;
//	cout << "����:"; cin >> w[NUM].age;
//	cout << "����:"; cin >> w[NUM].salary;
//	cout << "��ַ:"; cin >> w[NUM].address;
//	cout << "�绰:"; cin >> w[NUM].tel;
//	++NUM;
//	count = NUM;
//}