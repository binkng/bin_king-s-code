//#include<stdio.h>
////  ����һ���ṹ�ĳ�Ա
////  .   �ṹ�塣��Ա��
////  ->   �ṹ��ָ��->��Ա��
//
//
//
//
//
//
//
//
//
//
////ѧ��
////����һ���ṹ������-struct stu
//struct stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char id[20];
//};
//
//
//int main()
//{
//	int a = 0;
//	struct stu s1 = { "��",21,"294u385" };//ʹ��struct stu������ʹ�����һ��ѧ������s1������ʼ��
//	// ��һ                  /*printf("%s\n", s1.name);
//	                     printf("%d\n", s1.age);
//	                     printf("%s\n", s1.id);
//	//�ṹ�����.��Ա��  .������
//	//����
//	struct stu* ps = &s1;//  ע�⽫struct stu�����ṹ������ ��ͬ�����͸����� �ַ���
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	//  ����
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//  �ṹ��ָ��->��Ա��
//	return 0;
//}