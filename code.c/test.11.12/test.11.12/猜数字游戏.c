//��������Ϸ
//���Ի�����һ�������
//������
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*************************\n");
	printf("**** 1:play   2:exit ****\n");
	printf("*************************\n");
}
//RAND_MAX rand()�������ص�������Χ��0��RAND_MAX��0x7fff��
// RAND_MAX-32767
// ע��0x ����Ϊʮ������ 7fff����ת��Ϊʮ����
void game()//  ��Ϸ�㷨��ʵ��
{
	//1����һ�������
	int ret = 0;
	int guess = 0;// ���ղµ�����
	// ��ʱ�����������������
	//time_t time(time_t *timer)
	//time()// ����һ��time_t(��ʵ����һ��������)
	// void srand(unsigned int seed);
	//time()�����Ų���������Ҫһ��ָ�� NULL��ָ��
	//srand((unsigned int)time(NULL)); //�ڵ���rand()����֮ǰ���ȵ���srand()����ȥ�����������������

	//����ʱ���
	// ʱ����ĸ��� ��ǰʱ��-������Ŀ�ʼʱ�䣨1970.1.1.0:0:0)=(xxx)��

	ret = rand() % 100 + 1;;// ������1��100֮��������// rand()����û�в���
	// ��������� ������ͷ�ļ�<stdlib.h>
	//printf("%d\n", ret); ע���������ɵ������
	// 2������
	while (1)
	{
		printf("������֣�");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else  
		{
			printf("��ϲ��,�¶���\n");
			break;

		}


	}




	
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//ֻ��Ҫ����һ��������ʼ�����
	do
	{
		menu();// �˵����� ����ѭ��һ������
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//  ��������Ϸ����
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}


	} while (input);  //�������inputΪ0ʱ ����ѭ��һ�ξ��˳� ��0ʱ����Լ�������ѭ��
	return 0;
}