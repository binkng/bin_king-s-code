//#include<iostream>
//#include<map>
//using namespace std;
////键值不可重复
//int main()
//{
//	map<int, char> mp;// 键值 实值
//	mp[10] = 'A';
//	mp[100] = 'B';
//	mp[30] = 'C';
//	//根据键值来排序
//	map<int, char>::iterator ite=mp.begin();
//
//	while (ite != mp.end())
//	{
//		//ite->second = 'Q';// 可更改
//		cout << ite->first << "  " << ite->second << endl;
//		//first是键值 不可修改 second是实值 可以修改
//		//ite->first = 1000;  //不可以更改
//		ite++;
//	}
//	cout << endl;
//
//	pair<int, char> pa(250, 'b');//定义一个pair对象
//
//	mp.insert(pa);//插入一个pair对象
//
//	mp[100] = 'o';//直接对实值更改
//	ite = mp.begin();
//	while (ite != mp.end())
//	{
//		cout << ite->first << "  " << ite->second << endl;
//		
//		ite++;
//	}
//
//	ite = mp.find(100);//查找函数
//	cout << ite->first << "  " << ite->second << endl;
//	return 0;
//}