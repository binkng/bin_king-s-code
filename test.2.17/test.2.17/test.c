////#include <stdio.h>
////int main()
////{
////    int day = 0;
////    printf("请输入一个数:");
////    scanf("%d", &day);
////    switch (day)
////    {
////    /*default:
////        printf("error!!!");
////        break;*/
////    case 1:
////            printf("星期一\n");
////            break;
////        case 2:
////            printf("星期二\n");
////            break;
////        default://
////            printf("error!!!");
////            break;
////        case 3:
////            printf("星期三\n");
////            break;
////        case 4:
////            printf("星期四\n");
////            break;
////        case 5:
////            printf("星期五\n");
////            break;
////        case 6:
////            printf("星期六\n");
////            break;
////        case 7:
////            printf("星期天\n");
////            break;
////        /*default:
////            printf("error!!!");
////            break;*/
////    }
////    return 0;
////}
////#include <stdio.h>
//////switch代码演示
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
////break 代码实例
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
////continue 代码实例1
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
	printf("请输入密码：");
	scanf("%s ", p);
	//getchar();
	printf("请确认（N/Y）:");
	ret = getchar();
	printf("%d\n", ret);
	if (ret == 'Y')
		printf("成功\n");
	else
		printf("失败\n");
	return 0;
}