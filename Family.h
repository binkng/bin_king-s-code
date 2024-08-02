#pragma once              //只编译一次  防止头文件被多次引用
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