#include<stdio.h>
int main()
{
	//�������������ҵ�������Ǹ������±�
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 7;
	int begin = 0;
	int end = 9;
	int mid = 0;
	while (begin<=end)
	{
		mid = (begin + end) / 2;
		if (arr[mid]<n)
		{
			begin = mid + 1;
		}
		else if (arr[mid] > n)
		{
			end = mid - 1;
		}
		else
		{
			printf("%d\n", mid);
			break;// ע���ҵ�֮�����������ѭ��
		}
	}
	printf("%d\n", arr[mid]);
	return 0;
}