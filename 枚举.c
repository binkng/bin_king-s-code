#include<stdio.h>
enum AA{shitou,jiandao=100,bu};// Ĭ�ϣ�shitou==0,jiandao==1,bu==2  
// Ҳ�������ڲ��� shitou jiandao bu ���и�ֵ
//ö�ٳ����Ƿ��ų����������й̶������ֺ���֮����������ֵ��
//������˴���Ŀɶ��ԺͿ�ά���ԡ�
//ö�ٳ�����C�����б���Ϊ���ͳ�����
//�����ṩ��һ�ַ���ķ�ʽ������һ������������ֵ��
//����˴���Ŀɶ��ԺͿ�ά���ԡ�
int main()
{
	enum AA a=shitou;//ʹ��ö�ٳ�������ʼ��ö�ٱ��� ����ߴ���Ŀɶ��ԺͿ�ά����
	switch(a)
	{
	case shitou:
		printf("ʯͷ\n");
		break;
	case jiandao:
		printf("����\n");
		break;
	case bu:
		printf("��\n");
		break;
	}

	return 0;
}