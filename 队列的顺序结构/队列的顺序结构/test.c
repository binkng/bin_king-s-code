#include"SqQueue.h"
int main()
{
	SqQueue Q;
	InitQueue(&Q);
	int e = 0;
	for (int i = 1; i <= 10; i++)
	{
		printf("������Ҫ����еĵ�%d��Ԫ�أ�\n",i);
		scanf("%d", &e);
		QueuePush(&Q, e);
	}
	Print(Q);
	int ret = 0;
	for (int j = 1; j <= 5; j++)
	{
		QueueOut(&Q, &ret);
		printf("�����еĵ�%d��Ԫ�أ�%d\n", j,ret);
	}
	Print(Q);
	int ret1=QueueLength(Q);
	printf("����Ϊ%d\n", ret1);
	int ret2 = 0;
	GetHead(Q,&ret2);
	printf("��ͷԪ��Ϊ%d", ret2);
	return 0;
}