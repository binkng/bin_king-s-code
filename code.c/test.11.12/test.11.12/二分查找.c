////��д������һ���������������в��Ҿ����ĳ����
//	//�ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ���
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k;
//	k = 6;
//	int sz;
//	sz = sizeof(arr) / sizeof(arr[0]);//��Ԫ�ظ���
//
//	int left;
//	left = 0; //���±�
//	int right;
//	right = sz - 1; //���±�
//	while (left <= right) //˵�������±�֮����Ԫ��
//	{
//		int mid;
//		mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//
//
//	return 0;
//
//}