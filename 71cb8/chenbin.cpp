#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0;
	char password[15] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", password);
		//�������ַ�����ȵ�ʱ�� ��������һ��0 �����һ�������ڵڶ��� ����������0 ���С�� �򷵻���С��0
		if (strcmp(password, "123456")==0)   //������==���ж������ַ���֮��Ĵ�С�Ƿ����
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
			printf("��½ʧ�ܣ���������������");
	}
	if (i == 3)
		printf("��������ȫ���� �˳�����");


	return 0;
}