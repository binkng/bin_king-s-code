#include<stdio.h>
// ��Ŀ�����������˴��屾������ѡ����
int main()
{
	int a, b, c = 0;
	int cnt = 0;// ������¼���е�ѡ��
	printf("A B C��������ѡ����ŷֱ�Ϊ��\n");
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				if ((a != b) && (a != c) && (b != c))//  �㷨���ص㣺ֻҪ��������ѡ����Ų�ͬ��Ϊһ�ֽ��ķ���
				{
					printf("A:%d B:%d C:%d |", a, b, c);
					cnt++;
					if (cnt % 5 == 0)//��ӡ����
					{
						printf("\n");
					}
				}
			}
		}
	}
	printf("�ܹ���%d��ѡ��", cnt);
	return 0;
}