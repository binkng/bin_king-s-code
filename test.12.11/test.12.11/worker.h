#include<iostream>
#include"string"
#include<fstream>
#include <stdlib.h>
#include <stdio.h>
#define N 100 //N��Ϊ����������ʦ����
int f = 0; //f��Ϊ����
using namespace std;
string p; //p��Ϊ���ղ˵�ѡ����ַ���
void menu(); //��ʾ�˵�
class worker
{
public:
	//worker() {}
	void show(); //�������ʦ��Ϣ��ʾ 
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
	int NUM; //���������������ʦ��Ŀ
	int count; //������ʱ��¼��ǰ�����ڼ����������ʦ
public:
	void add(); //�������ʦ��Ϣ¼��
	void sort(); //�������ʦ��Ϣ����
	void search(); //�������ʦ��Ϣ����
	void dele(); //�������ʦ��Ϣɾ��
	void modify(); //�������ʦ��Ϣ�޸�
	void save(); //�������ʦ��Ϣ���ļ���ʽ����
	void showworker();//��ʾ�������ʦ��Ϣ����Ļ��
	WorkerList() {
		NUM = 0;
		count = 0;
	}
};

