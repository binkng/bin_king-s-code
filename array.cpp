#include<iostream>
#include<array>
using namespace std;

int main()
{
	array<int, 6> arr = { 1,2,3,4,5,6 };

	//for (int i = 0; i < 6; i++)
	//{
	//	cout << arr[i] << endl;
	//}

	//array<int, 6>::iterator ite=arr.begin();//ÕıÏòµü´ú
	array<int, 6>::iterator ite = arr.rbegin();
	while (ite !=arr.rend() )
	{
		cout << *ite << endl;
		ite++;
	}

	return 0;
}