#include"SqQueue.h"
int main()
{
	SqQueue Q;
	InitQueue(&Q);
	int e = 0;
	for (int i = 1; i <= 10; i++)
	{
		printf("请输入要入队列的第%d个元素：\n",i);
		scanf("%d", &e);
		QueuePush(&Q, e);
	}
	Print(Q);
	int ret = 0;
	for (int j = 1; j <= 5; j++)
	{
		QueueOut(&Q, &ret);
		printf("出队列的第%d个元素：%d\n", j,ret);
	}
	Print(Q);
	int ret1=QueueLength(Q);
	printf("长度为%d\n", ret1);
	int ret2 = 0;
	GetHead(Q,&ret2);
	printf("队头元素为%d", ret2);
	return 0;
}