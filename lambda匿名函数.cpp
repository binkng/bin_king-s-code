//#include<iostream>
//#include<list>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int a = 100;
//	int b = 200;
//
//	auto pfun1 = [] { cout << "Aaaa" << endl; };// 匿名函数 
//	//当返回值不知道是什么类型的时候就可以用 auto来自动推导
//	//函数名就是函数的地址
//	pfun1();
//	auto pfun2 = [=]()->int {return a + b; };
//	// （）中放的是参数   ->是返回值
//
//	cout << pfun2() << endl;
//
//	//lambda匿名函数使用场景
//
//	list<int> lst;
//	lst.push_back(1);
//	lst.push_back(7);
//	lst.push_back(9);
//
//	for_each(lst.begin(), lst.end(), [](int a) { cout << a << endl; });
//
//	return 0;
//}