#include<stdio.h>
//int Find(int arr[4][4], int k,int row,int col)
//{
//	int i = 0;
//	int j = col-1;
//	while (i <= row - 1 && j >= 0)
//	{
//		if (arr[i][j] > k)
//		{
//			j--;
//		}
//		else if (arr[i][j]<k)
//		{
//			i++;
//		}
//		else
//		{
//           printf("λ���ǣ�%d %d\n", i, j); // ����дҲ���� ����̫low��
//			return 1;//  ˵����ʱ�ҵ���
//		}
//	}
//	return 0; // û�ҵ�
//}
//int main()
//{
//	int arr[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	// �ҳ������ľ���λ��
//	int k = 5;
//	int x = 4;
//	int y = 4;
//	int ret=Find(arr,5,4,4);// �����˼����������ϻ�����
//	if (ret == 1)
//		printf("�ҵ���");
//	else
//		printf("û�ҵ�");
//	return 0;
//}

int Find(int arr[4][4], int k, int* row, int* col)
{
	int i = 0;
	int j = *col  - 1;
	while (i <= *row - 1 && j >= 0)
	{
		if (arr[i][j] > k)
		{
			j--;
		}
		else if (arr[i][j]<k)
		{
			i++;
		}
		else
		{
			*row = i;
			*col = j;
			return 1;//  ˵����ʱ�ҵ���
		}
	}
	return 0; // û�ҵ�
}
int main()
{
	int arr[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	// �ҳ������ľ���λ��
	int k = 8;
	int x = 4;
	int y = 4;
	int ret = Find(arr, k, &x, &y);// �����Ͳ��� ��ַ
	//int ret=Find(arr,5,4,4);// �����˼����������ϻ�����
	if (ret == 1)
	{
		printf("�ҵ���\n");
		printf("λ���ǣ�%d %d", x, y);
	}
	else
		printf("û�ҵ�");
	return 0;
}