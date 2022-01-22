#include<stdio.h>
#include<stdlib.h>
#define size 20
#define error 0
#define OK 1
typedef struct
{
	int* data;// ÓÃmallocÉêÇëÒ»¿é¿Õ¼ä
	int length;
}Sqlist;
int Initlist(Sqlist* );
void Creatlist(Sqlist* , int );
void Print(Sqlist );
int Deletelist(Sqlist* L, int n);
int Getelem(Sqlist L, int i, int* e);
int LocateElem(Sqlist, int);
int ListInsert(Sqlist*, int,int);