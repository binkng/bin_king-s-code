#include"Person.h"
#include"Family.h"

extern int a;//外部引用
//extern int b;// 错误 不可以外部引用

int main()
{
	/*Person ps;
	ps.Play();*/

	/*Person ps1, ps2, ps3, ps4;
	Family fam;
	fam.arr[0] = &ps1;
	fam.arr[1] = &ps2;
	fam.arr[2] = &ps3;
	fam.arr[3] = &ps4;

	fam.Play();*/

	cout << a << endl;
	cout << b << endl;



	return 0;
}