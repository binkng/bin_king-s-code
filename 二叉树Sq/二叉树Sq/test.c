#include<stdio.h>
#include<conio.h>
#include<math.h>

#define MAX_SIZE 1024

//����˳��������
typedef char SeqTree[MAX_SIZE];

void InitSeqTree(SeqTree tree); //��ʼ���ն�����
void CreatSeqTree(SeqTree tree, int i); //iΪ������±�

void InitSeqTree(SeqTree tree)
{

	//���ַ������е�����Ԫ�س�ʼ����ֵ
	for (int i = 0; i < MAX_SIZE; i++)
	{
		tree[i] = '\0';
	}

}

void CreatSeqTree(SeqTree tree, int i)
{
	char ch;
	ch = getchar();
	fflush(stdin); //��ռ��̻�����
	if (ch == '^') { //������^ʱ�����ڵ�����
		tree[i] = '\0';
		return;
	}
	tree[i] = ch;
	//������ڵ���ʾ������������������
	printf("��������������\n");
	CreatSeqTree(tree, 2 * i + 1);
	printf("��������������\n");
	CreatSeqTree(tree, 2 * (i + 1));
}

//������ĸ��ڵ�
char GetSeqTreeRoot(SeqTree tree)
{
	return tree[0];
}

//��ȡ�ڵ�����
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

//��ȡ��� ���Ϊk�Ķ����������2^k - 1���ڵ�
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
	printf("��������ڵ����ݣ�");
	CreatSeqTree(tree, 0);
	PrintSeqTree(tree);
	GetSeqTreeDepth(tree);
}