//#include<stdio.h>
//#include<assert.h>
////�㷨һ ������ⷨ
//void left1_move(char* a,int k)//k���������ַ��ĸ���
//{
//assert(a !=NULL);// assert()����
//	int len = strlen(a);
//	int i = 0;
//	for (i = 0; i < k;i++)
//	{
//		// ����һ���ַ�
//		char tmp = *a;// ����һ������������tmp
//		int j = 0;
//		for (j = 0;j<len-1;j++)
//		{
//			*(a + j) = *(a + j + 1);
//		}
//		*(a + len - 1) = tmp;
//	}
//}
//
//
//int main()
//{
//	char a[10] = { 0 };
//	scanf("%s", a);
//	printf("%s\n", a);
//	int k = 2;//Ҫ��תԪ�صĸ���
//	left1_move(a,k);
//	printf("%s\n", a);
//	return 0;
//}
// �㷨����������
//����ab cdef
// ba fedc �ȷֱ��ab��cdef��������
//cdefab
//#include<stdio.h>
//#include<assert.h>
//void reverse(char* left, char* right)//whileѭ����forѭ��
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr,int k)
//{
//	assert(arr != NULL);
//	int len = strlen(arr);
//	assert(k <= len);// Ҫ����ĸ��������С�����鱾���Ԫ�ظ���
//	reverse(arr, arr + k - 1);//�������
//	reverse(arr + k, arr + len - 1);//�����ұ�
//	reverse(arr, arr + len - 1);//��������
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 2;
//	printf("%s\n", arr);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}