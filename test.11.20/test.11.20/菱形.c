#include<stdio.h>
//   ��ӡ����
int main()
{
	int i = 0;
	int j = 0;// i��jΪ��ǰԪ������λ������
	int a = 0;//�������ε������������
	scanf("%d", &a);// a������ӡ���������ε���������
	for (i= 1; i<= (a+1)/2; i++);//   ����ÿһ��
	{
		for (j = 1; j <= a; j++)    // ����ÿһ����ÿ�е�Ԫ��
		{
			if ((a + 1) / 2 - (i - 1) <= j && (a + 1) / 2 + (i - 1) >=j)
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	// ��ʱ��ӡ�����ϰ벿��
	// ���ڵĴ�ӡ�°벿��
	for (i = (a + 1) / 2 + 1; i <= a; i++)
	{
		for (j = 1; j <= a; j++)
		{
			if ((a + 1) / 2 - (a - i) <= j && (a + 1) / 2 + (a - i) >= j)
				printf("*");
			else
				printf(" ");

		}
		printf("\n");
	}

	return 0;
}