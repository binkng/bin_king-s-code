#include"Qnode.h"
int main()
{
	Qlink Q;
	InitQueue(&Q);
	for (int i = 0; i < size; i++)
	{
		printf("������Ҫ��ӵĵ�%d��Ԫ�أ�\n",i+1);
		QueuePush(&Q);
	}
	Print(Q);
	int e = 0;
	QueueOut(&Q,&e);//  ��e������
	printf("�����е�Ԫ�أ�%d\n", e);
	Print(Q);
	GetHead(Q,&e);
	printf("��βԪ��Ϊ%d\n", e);
	Print(Q);
	return 0;
}