#define_CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	//��ʾ����ַ��������ƶ� ���м���
//	char a1[] = "!Do you love me!!!";
//	char a2[] = "##################";
//	int left = 0;
//	//int right = sizeof(a1) / sizeof(a1[0])-2;
//	int right = strlen(a1) - 1;
//	while (left <= right)
//	{
//		a2[left] = a1[left];
//		a2[right] = a1[right];
//		printf("%s\n", a2);
//		//��Ϣһ�� Ҳ����1000���� 
//		Sleep(1500);
//		system("cls"); //ִ��ϵͳ�����һ���⺯�� cls-�����Ļ
//
//		left++;
//		right--;
//	}
//	return 0;
//}
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", password);
		//�������ַ�����ȵ�ʱ�� ��������һ��0 �����һ�������ڵڶ��� ����������0 ���С�� �򷵻���С��0
		if (strcmp(password, "123456") == 0)   //������==���ж������ַ���֮��Ĵ�С�Ƿ����
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("��½ʧ�ܣ���������������");
		}
	
	}
	if (i == 3)
		printf("��������ȫ���� �˳�����");


	return 0;
}