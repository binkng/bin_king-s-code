#include<iostream>
#include"string"
#include<fstream>
#include <stdlib.h>
#include <stdio.h>
#define N 100 //N作为最大软件工程师总数
int f = 0; //f作为开关
using namespace std;
string p; //p作为接收菜单选项的字符串
void menu(); //显示菜单
class worker
{
public:
	//worker() {}
	void show(); //软件工程师信息显示 
	//~worker() {}
	friend class WorkerList;
private:
	string num, name, sex, edu, address, tel;
	int age, salary;
};


class WorkerList
{
private:
	worker w[N];
	int NUM; //用来计算软件工程师数目
	int count; //用来暂时记录当前操作第几个软件工程师
public:
	void add(); //软件工程师信息录入
	void sort(); //软件工程师信息排序
	void search(); //软件工程师信息查找
	void dele(); //软件工程师信息删除
	void modify(); //软件工程师信息修改
	void save(); //软件工程师信息以文件形式保存
	void showworker();//显示软件工程师信息在屏幕上
	WorkerList() {
		NUM = 0;
		count = 0;
	}
};

