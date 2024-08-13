//#include<stdio.h>
//#include<stdlib.h>
//typedef struct Node
//{
//	int nVal;
//	struct Node* pnext;
//}Stack;
//void Push(Stack** ptop, int n)//入栈
//{
//	Stack* ptemp = malloc(sizeof(Stack));
//	ptemp->nVal = n;
//	ptemp->pnext = NULL;
//	//先判断栈是否为空
//
//	ptemp->pnext = *ptop;
//	*ptop = ptemp;//代码优化 替换以下 if else 判断
//
//	/*if (*ptop)
//	{
//		ptemp->pnext = *ptop;
//		*ptop = ptemp;
//	}
//	else
//	{
//		*ptop = ptemp;
//	}*/
//}
//int Pop(Stack** pptop)
//{
//	int n = -1;//初始化返回值
//	//也是先判断栈是否为空
//	if (*pptop)
//	{
//		Stack* pDel = NULL;
//		pDel = *pptop;
//		n = pDel->nVal;
//		////特别注意：在释放当前栈顶元素 pDel 之后
//		//，函数试图访问 *pptop 来更新栈顶指针。
//		//	这会导致内存访问错误，
//		//	因为 *pptop 此时已经被释放了，访问已经释放的内存是未定义行为。
//
//		//所以是要先更新指针  再释放free
//			*pptop = (*pptop)->pnext;
//		free(pDel);
//		pDel = NULL;
//	}
//	return n;
//}
//int main()
//{
//	Stack* ptop = NULL;
//	Push(&ptop, 1);
//	Push(&ptop, 2);
//	Push(&ptop, 3);
//	Push(&ptop, 4);
//	Push(&ptop, 5);
//	Push(&ptop, 6);
//
//
//	Pop(&ptop);
//	Pop(&ptop);
//	Pop(&ptop);
//	//进栈从左往右入 先对栈顶赋值
//	/* 函数参数从右向左执行
//	printf("%c  %c", getchar(), getchar());*/
//
//	return 0;
//}