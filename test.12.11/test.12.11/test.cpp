#include"worker.h"
using namespace std;
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


int main()
{
	domain();
	return 0;
}