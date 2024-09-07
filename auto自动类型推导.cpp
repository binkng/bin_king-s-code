//#include<iostream>
//#include<list>
//using namespace std;
//
//
//int main()
//{
//	auto a = 100;//自动推导出变量类型
//	auto b = 'Q';
//	auto c = "asdfghj";
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//
//	list<int> lst;
//	lst.push_back(2);
//	lst.push_back(8);
//	lst.push_back(5);
//	lst.push_back(3);
//	auto ite = lst.begin();//最经常用来定义迭代器
//	while (ite != lst.end())
//	{
//		cout << *ite << endl;
//		ite++;
//	}
//
//	return 0;
//}
//
////推导前 必须先初始化
////不能定义数组
////不能作为函数参数
////不能作为模板参数
////不能作为类中的非静态成员
