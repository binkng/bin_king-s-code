////#include <stdio.h>
////int main()
////{
////    int day = 0;
////    printf("������һ����:");
////    scanf("%d", &day);
////    switch (day)
////    {
////    /*default:
////        printf("error!!!");
////        break;*/
////    case 1:
////            printf("����һ\n");
////            break;
////        case 2:
////            printf("���ڶ�\n");
////            break;
////        default://
////            printf("error!!!");
////            break;
////        case 3:
////            printf("������\n");
////            break;
////        case 4:
////            printf("������\n");
////            break;
////        case 5:
////            printf("������\n");
////            break;
////        case 6:
////            printf("������\n");
////            break;
////        case 7:
////            printf("������\n");
////            break;
////        /*default:
////            printf("error!!!");
////            break;*/
////    }
////    return 0;
////}
////#include <stdio.h>
//////switch������ʾ
////int main()
////{
////    int day = 6;
////    switch (day)
////    {
////    case 1:
////    case 2:
////    case 3:
////    default:
////        printf("error!!!");
////        break;
////    case 4:
////    case 5:
////        printf("not weekday\n");
////        break;
////    case 6:
////    case 7:
////        printf("weekend\n");
////        break;
////    }
////    return 0;
////}
////break ����ʵ��
////#include <stdio.h>
////int main()
////{
////	int i = 1;
////	while (i <= 10)
////	{
////		if (i == 5)
////			break;
////		printf("%d ", i);
////		i = i + 1;
////	}
////	return 0;
////}*/
////continue ����ʵ��1
////#include <stdio.h>
////int main()
////{
////	int i = 1;
////	while (i <= 10)
////	{
////		/*if (i == 5)
////			/continue;*/
////		/*printf("%d ", i);*/
////		i = i + 1;
////		if (i == 5)
////			continue;
////		printf("%d ", i);
////	}
////	return 0;
////}
////#include <stdio.h>
////int main()
////{
////    int i = 1;
////    while (i <= 10)
////    {
////        i = i + 1;
////        if (i == 5)
////            continue;
////        printf("%d ", i);
////    }
////    return 0;
////}
#include<stdio.h>
int main()
{
	int ret = 0;
	char p[10] = { 0 };
	printf("���������룺");
	scanf("%s ", p);
	//getchar();
	printf("��ȷ�ϣ�N/Y��:");
	ret = getchar();
	printf("%d\n", ret);
	if (ret == 'Y')
		printf("�ɹ�\n");
	else
		printf("ʧ��\n");
	return 0;
}