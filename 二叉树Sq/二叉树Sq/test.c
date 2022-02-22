#include<stdio.h>
#include<conio.h>
#include<math.h>

#define MAX_SIZE 1024

//定义顺序树类型
typedef char SeqTree[MAX_SIZE];

void InitSeqTree(SeqTree tree); //初始化空二叉树
void CreatSeqTree(SeqTree tree, int i); //i为数组的下标

void InitSeqTree(SeqTree tree)
{

	//将字符数组中的所有元素初始化赋值
	for (int i = 0; i < MAX_SIZE; i++)
	{
		tree[i] = '\0';
	}

}

void CreatSeqTree(SeqTree tree, int i)
{
	char ch;
	ch = getchar();
	fflush(stdin); //清空键盘缓存区
	if (ch == '^') { //当输入^时结束节点输入
		tree[i] = '\0';
		return;
	}
	tree[i] = ch;
	//建立完节点提示输入左子树和右子树
	printf("请输入左子树：\n");
	CreatSeqTree(tree, 2 * i + 1);
	printf("请输入右子树：\n");
	CreatSeqTree(tree, 2 * (i + 1));
}

//获得树的根节点
char GetSeqTreeRoot(SeqTree tree)
{
	return tree[0];
}

//获取节点总数
int GetSeqTreeLength(SeqTree tree)
{
	int len = 0;
	for (int i = 0; i < MAX_SIZE; i++)
	{
		if (tree[i] == '\0') {
			continue;
		}
		len++;
	}
	return len;
}

//获取深度 深度为k的二叉树最多有2^k - 1个节点
int GetSeqTreeDepth(SeqTree tree)
{
	int depth = 0;
	int len = GetSeqTreeLength(tree);
	while ((int)pow(2, depth) - 1 < len)
	{
		depth++;
	}
	return depth;
}

void PrintSeqTree(SeqTree tree)
{
	for (int i = 0; i < MAX_SIZE; i++)
	{
		printf("%c", tree[i]);
	}
}

void main()
{
	SeqTree tree;
	InitSeqTree(tree);
	printf("请输入根节点内容：");
	CreatSeqTree(tree, 0);
	PrintSeqTree(tree);
	GetSeqTreeDepth(tree);
}