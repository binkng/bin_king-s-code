#include<iostream>
#define N 10 // ѧ������ϵͳ�������ܸ���
using namespace std;
void domain(); //�����˵�����������
class Std // ����һ��ѧ����
{
public:
	void show(); // ѧ����Ϣ��չʾ
	friend class StdList;
private:
	string name, major, sex, id, add, tel;
	int age;
} sl;

class StdList
{
private:
	Std s[N];
	int NUM; //��������ѧ������Ŀ
	int count; //������ʱ��¼��ǰ�����ڼ����������ʦ
public:
	void add(); //ѧ����Ϣ¼��
	void sort(); //ѧ����Ϣ����
	void search(); //ѧ����Ϣ����
	void dele(); //ѧ����Ϣɾ��
	void modify(); //ѧ����Ϣ�޸�
	void save(); //ѧ����Ϣ���ļ���ʽ����
	void showworker();//��ʾѧ����Ϣ����Ļ��
	StdList() {
		NUM = 0;
		count = 0;
	}
};
