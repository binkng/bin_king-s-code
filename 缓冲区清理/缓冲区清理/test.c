//#include <stdio.h>
//#include <conio.h>
//void main(void)
//{
//    int integer;
//    char string[81];
//
//    /* Read each word as a string. */
//    printf("Enter a sentence of four words with scanf: ");
//    for (integer = 0; integer < 4; integer++)
//    {
//        scanf("%s", string);
//        printf("%s\n", string);
//    }
//
//    /* You must flush the input buffer before using gets. */
//    fflush(stdin);
//    printf("Enter the same sentence with gets: ");
//    gets(string);
//    printf("%s\n", string);
//}

          
fflush()������������ˢ�»�������fflush(stdin)ˢ�±�׼���뻺�����������뻺������Ķ���������
fflush(stdout)ˢ�±�׼������������������������Ķ���ǿ�ƴ�ӡ����׼����豸�ϡ�


                               ע�⣺fflush(stdin)���Ի���while(getchar() != '/n');ע�⣺scanf(" %d")//�ո��ǽ��հ��ַ����Ե�
#include<stdio.h>
int main()
{
	fflush(stdout);
	int i = 0;
	scanf("%d", &i);
	printf("������\n");

	//fflush(stdout);
	return 0;
}