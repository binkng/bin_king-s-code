#include"worker.h"
using namespace std;
void domain() //���˵�����ʵ��
{

	WorkerList wl;
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
		case 1:wl.add(); break;
		case 2:wl.modify(); break;
		case 3:wl.dele(); break;
		case 4:wl.sort(); break;
		case 5:wl.search(); break;
		case 6:wl.showworker(); break;
		case 7:wl.save(); break;
		case 0:cout << "ϵͳ�˳�����" << endl;
			exit(0);
		default:
			break;
		}
		cout << "�Ƿ񷵻����˵�? Y/N" << endl;
		cin >> p;
		if (p == "n" || p == "N")
		{
			cout << "ϵͳ�˳�����" << endl;
			exit(0);
		}
	}
}


int main()
{
	domain();
	return 0;
}