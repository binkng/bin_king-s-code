#include"Qnode.h"
int main()
{
	Qlink Q;
	InitQueue(&Q);
	for (int i = 0; i < size; i++)
	{
		printf("请输入要入队的第%d个元素：\n",i+1);
		QueuePush(&Q);
	}
	Print(Q);
	int e = 0;
	QueueOut(&Q,&e);//  用e来接收
	printf("出队列的元素：%d\n", e);
	Print(Q);
	GetHead(Q,&e);
	printf("队尾元素为%d\n", e);
	Print(Q);
	return 0;
}