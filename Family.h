#pragma once              //ֻ����һ��  ��ֹͷ�ļ����������
#include<iostream>
using namespace std;
class Family
{
public:
	Person* arr[10];
public:
	Family();
public:
	void PushPerson(Person* pPs);
	void Play();
};