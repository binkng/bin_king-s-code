//#include<stdio.h>
// ��Ŀ����Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������

//                �㷨һ �������
//int Sn(int a)
//{
//	int sum = 0;
//	sum = a + 10 * a + a + a + 10 * a + 100 * a + a + 10 * a + 100 * a + 1000 * a + a + 10 * a + 100 * a + 1000 * a + 10000 * a;
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int sn=Sn(a);//��װһ������
//	printf("sn=%d\n", sn);
//	return 0;
//}

//               �㷨��  ����ѭ��
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int sn = a;
//	int i = 0;
//	int b = a;
//	for (i = 1; i < 5; i++)
//	{
//		b = 10 * b + a;
//		sn = sn + b;
//	}
//	printf("sn=%d\n", sn);
//
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//    int line;  // ����������
//    int column;  // ����������
//    int i;  // ��ǰ��
//    int j;  // ��ǰ��
//    printf("���������ε�����(����)��");
//    scanf("%d", &line);
//    if (line % 2 == 0) {  // �ж��Ƿ�������
//        printf("��������������\n");
//        exit(1);
//    }
//    column = line;  // ����������������ͬ
//    for (i = 1; i <= line; i++) {  // ����������
//        if (i < (line + 1) / 2 + 1) {  // �ϰ벿�֣������м�һ�У�
//            for (j = 1; j <= column; j++) {  // �����ϰ벿�ֵ�������
//                if ((column + 1) / 2 - (i - 1) <= j && j <= (column + 1) / 2 + (i - 1)) {
//                    printf("*");
//                }
//                else {
//                    printf(" ");
//                }
//            }
//        }
//        else {  // �°벿��
//            for (j = 1; j <= column; j++) {  // �����°벿�ֵ�������
//                if ((column + 1) / 2 - (line - i) <= j && j <= (column + 1) / 2 + (line - i)) {
//                    printf("*");
//                }
//                else {
//                    printf(" ");
//                }
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}