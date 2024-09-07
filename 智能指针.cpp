//#include<iostream>
//#include<memory>
//using namespace std;
//
//int main()
//{
//	//int* p = nullptr;
//	//shared_ptr<int> sp1;
//	//{
//	//	shared_ptr<int> sp(new int(100));
//	//	*sp = 200;
//	//	sp1 = sp;
//	//	cout << *sp << endl;
//	//	p = sp.get();//得到sp的地址
//	//}//出局部作用域 sp自动销毁
//	////但是当存在多个智能指针 （sp1还指向该空间 所以不会销毁）
//
//	//sp1.reset();//手动可以释放
//	//cout << *p << endl;
//
//	//int* p1 = nullptr;
//	//unique_ptr<int> up1;
//	//{
//	//	unique_ptr<int> up(new int(300));
//	//	cout << *up << endl;
//	//	//up1 = up;
//	//	//错误 unique_ptr只允许一个指针只想一个空间 不支持空间共享
//	//}
//
//
//
//
//	return 0;
//}