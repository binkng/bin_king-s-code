
#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		//�������ַ�����ȵ�ʱ�� ��������һ��0 �����һ�������ڵڶ��� ����������0 ���С�� �򷵻���С��0
//		if (strcmp(password, "123456") == 0)   //������==���ж������ַ���֮��Ĵ�С�Ƿ����
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("��½ʧ�ܣ���������������");
//		}
//
//	}
//	if (i == 3)
//		printf("��������ȫ���� �˳�����");
//
//
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
// //��ʾ����ַ��������ƶ� ���м���
// char a1[] = "!ϣ������ͮ���Զ�Ե㣬��Զ������!";
// char a2[] = "##################################";
// int left = 0;
// //int right = sizeof(a1) / sizeof(a1[0])-2;
// int right = strlen(a1) - 1;
// while (left <= right)
// {
//  a2[left] = a1[left];
//  a2[right] = a1[right];
//  printf("%s\n", a2);
//  //��Ϣһ�� Ҳ����1000���� 
//  Sleep(1000);
//  //system("cls"); //ִ��ϵͳ�����һ���⺯�� cls-�����Ļ
//
//  left++;
//  right--;
// }
// return 0;
//}
int main()
{
	//д���뽫�������Ӵ�С���
	int a = 0;
	int b = 0; 
	int c = 0;
	int tmp=0;
	scanf("%d%d%d", &a, &b, &c);//%d֮��ո񲻿ո񶼿��� 
	// ע ���%d֮����������������磨# �����������������ʱ��Ҳ�����ϸ��ո�ʽ����Ӧ�ķ���

	//�㷨ʵ��
	//a�з����ֵ b��֮ c�з���С
	
	if(a<b)
	{
		//a = b; ���������Ǵ���� �����ᵼ��a��ֵ��ʧ
		// ������֮�佻��ֵ��ȷ��������������һ������
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d"��a, b, c);
	return 0;
}