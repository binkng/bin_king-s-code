#include"Sqlist.h"
int main()
{
	Sqlist L1;
	int ret=Initlist(&L1);//��ʼ��˳���
	printf("%p \n", &L1);
	printf("%p \n", L1.data);
	if (ret)
		printf("��ʼ���ɹ���\n");
	else
		printf("��ʼ��ʧ�ܣ�\n");
	int n = 0;
	printf("��������Ҫ������Ԫ�صĸ�����\n");
	scanf("%d", &n);//   n������˳����Ԫ�صĸ���
	Creatlist(&L1,n);//����˳��� ��˳�������Ԫ��
	Print(L1);
	int m = 0;
	printf("��������Ҫɾ����Ԫ�ص���ţ�\n");
	scanf("%d", &m);//  ����Ҫɾ��Ԫ�ص����
	Deletelist(&L1,m);
	Print(L1);
	int i = 0;
	printf("��������Ҫ��Ԫ�ص���ţ�\n");
	scanf("%d", &i);
	int e = 0;
	Getelem(L1, i, &e);// �����Ϊi��ֵ����e ������
	printf("%d\n", e);
	int E = 0;
	printf("������Ҫ��Ԫ�صĴ�С��\n");
	scanf("%d", &E);
	int ret1 = LocateElem(L1, E);
	if (ret1)
		printf("���ҳɹ���\n");
	else
		printf("����ʧ�ܣ�\n");
	int j = 0;
	printf("����Ҫ�����λ�ã�");
	scanf("%d", &j);
	int Ine = 0;
	printf("������Ҫ�����Ԫ�أ�");
	scanf("%d", &Ine);
	ListInsert(&L1, j,Ine);
	Print(L1);
	return 0;
}