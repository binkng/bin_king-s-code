//#include<iostream>
//using namespace std;
//void Show(int a)
//{
//	cout << a << endl;
//}
//void Show(char a)
//{
//	cout << a << endl;
//}
//void Show(string a)
//{
//	cout << a << endl;
//}
////以上是函数重载
//
//
//
//template<typename T>
//// 模板头
//void Show1(T a)//单个参数模班
//{
//	cout << a << endl;
//}
//
//template<class T>
//void AA(T t1,T t2)//两个参数的模板
//{
//	cout << t1 << " " << t2 << endl;
//}
//template<class T1,class T2>
//void BB(T1 t1, T2 t2)
//{
//	cout << t1 << " " << t2 << endl;
//}
//template<class T1, class T2>
//void AA(T1 t1, T2 t2)
//{
//	cout << t1 << " " << t2 << endl;
//}
//
//int main()
//{
//	/*Show(6);
//	Show('A');
//	Show("abcde");
//	Show(3.1415926);*/
//
//	AA(10, 100);//可以重载 但是尽量不要使用重载
//	AA(10, 3.243);//用一个模板时 两个参数的类型必须一致
//
//	BB(10, 100);
//	BB(10, 3.243); //用两个模板时 两个参数的类型可以不一致
//
//
//	return 0;
//}
//
////函数模板  ：定义一个通用的函数 不指定具体的参数 用一个虚拟参数替代
////函数调用时 根据实参判断出具体的类型
////
////不要使用默认参数
////可以重载 但是尽量不要使用重载
