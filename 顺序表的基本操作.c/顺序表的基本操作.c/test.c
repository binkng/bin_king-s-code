#include"Sqlist.h"
int main()
{
	Sqlist L1;
	int ret=Initlist(&L1);//初始化顺序表
	printf("%p \n", &L1);
	printf("%p \n", L1.data);
	if (ret)
		printf("初始化成功！\n");
	else
		printf("初始化失败！\n");
	int n = 0;
	printf("请输入想要创建的元素的个数：\n");
	scanf("%d", &n);//   n代表创建顺序表打元素的个数
	Creatlist(&L1,n);//创建顺序表 向顺序中添加元素
	Print(L1);
	int m = 0;
	printf("请输入想要删除的元素的序号：\n");
	scanf("%d", &m);//  输入要删除元素的序号
	Deletelist(&L1,m);
	Print(L1);
	int i = 0;
	printf("请输入想要的元素的序号：\n");
	scanf("%d", &i);
	int e = 0;
	Getelem(L1, i, &e);// 将序号为i的值赋给e 并返回
	printf("%d\n", e);
	int E = 0;
	printf("请输入要查元素的大小：\n");
	scanf("%d", &E);
	int ret1 = LocateElem(L1, E);
	if (ret1)
		printf("查找成功！\n");
	else
		printf("查找失败！\n");
	int j = 0;
	printf("输入要插入的位置：");
	scanf("%d", &j);
	int Ine = 0;
	printf("请输入要插入的元素：");
	scanf("%d", &Ine);
	ListInsert(&L1, j,Ine);
	Print(L1);
	return 0;
}