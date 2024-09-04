//#include<iostream>
//#include<map>
//using namespace std;
////键值不可重复
////当键值相同的时候 输出的排列顺序按添加的顺序排列
//int main()
//{
//	multimap<int, char> mp;// 键值 实值
//	
//
//	pair<int, char> pa1(200, 'b');//定义一个pair对象
//	mp.insert(pa1);//插入一个pair对象
//	pair<int, char> pa2(200, 'Q');//定义一个pair对象
//	mp.insert(pa2);//插入一个pair对象
//	pair<int, char> pa3(250, 'A');//定义一个pair对象
//	mp.insert(pa3);//插入一个pair对象
//	pair<int, char> pa4(190, 'a');//定义一个pair对象
//	mp.insert(pa4);//插入一个pair对象
//	map<int, char>::iterator ite = mp.begin();
//
//	while (ite != mp.end())
//	{
//		cout << ite->first << "  " << ite->second << endl;
//
//		ite++;
//	}
//	return 0;
//}