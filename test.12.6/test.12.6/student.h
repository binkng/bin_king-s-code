#include<iostream>
#define N 10 // 学生管理系统中人数总个数
using namespace std;
void domain(); //对主菜单函数的声明
class Std // 定义一个学生类
{
public:
	void show(); // 学生信息的展示
	friend class StdList;
private:
	string name, major, sex, id, add, tel;
	int age;
} sl;

class StdList
{
private:
	Std s[N];
	int NUM; //用来计算学生的数目
	int count; //用来暂时记录当前操作第几个软件工程师
public:
	void add(); //学生信息录入
	void sort(); //学生信息排序
	void search(); //学生信息查找
	void dele(); //学生信息删除
	void modify(); //学生信息修改
	void save(); //学生信息以文件形式保存
	void showworker();//显示学生信息在屏幕上
	StdList() {
		NUM = 0;
		count = 0;
	}
};
