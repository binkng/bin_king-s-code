//#include<iostream>
//#include<algorithm>//算法头文件
//#include<list>
//#include<vector>
//using namespace std;
//
//void show(int n)
//{
//	cout << n << endl;
//}
//
////void show2(char n)
////{
////	cout << n << endl;
////}
//int main()
//{
//	list<int> lst;
//	lst.push_back(3);
//	lst.push_back(4);
//	lst.push_back(1);
//	lst.push_back(2);
//	//list<int>::iterator ite=find(lst.begin(), lst.end(), 3);//查找函数
//	//返回的是当前指向这个元素的迭代器
//	/*cout << *ite << endl;
//	cout << endl;*/
//
//
//	for_each(lst.begin(), lst.end(), &show);
// （for_each中第三个参数）fn：是一个函数对象（可以是函数指针、仿函数或 lambda 表达式），
// for_each 会对范围内的每个元素应用这个函数对象。
// //通用遍历函数 第三个参数是具体的功能(参数为函数的地址)
//
//	/*list<int> lst2;
//	lst2.push_back(3);
//	lst2.push_back(2);
//	lst2.push_back(1);
//	lst2.push_back(4);
//	sort(lst2.begin(), lst2.end());
//	for_each(lst2.begin(), lst2.end(), &show1);
//*/
//
//
//
//	/*vector<char> vec;
//	vec.push_back('a');
//	vec.push_back('b');
//	vec.push_back('c');
//	vec.push_back('d');
//	sort(vec.begin(), vec.end())//排序
//
//	for_each(vec.begin(), vec.end(), &show2);*/
//	return 0;
//}
//
//
//
////STL的底层实现逻辑
////array vector    动态数组
////deque           多段连续空间
////list            双向链表
////map  set        红黑树
//
////under_map       哈希表