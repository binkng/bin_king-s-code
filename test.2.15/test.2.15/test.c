//#include <stdio.h>
////代码1
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("未成年\n");
//    }
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 0)
//        if (b == 2)
//            printf("hehe\n");
//    else//就近原则 与较近的if进行匹配
//            printf("haha\n");
//    return 0;
//}
#include <stdio.h>
int main()
{
    int day = 0;
    switch (day)
    {
        case 1:
            printf("星期一\n");
            break;
        case 2:
            printf("星期二\n");
            break;
        case 3:
            printf("星期三\n");
            break;
        case 4:
            printf("星期四\n");
            break;
        case 5:
            printf("星期五\n");
            break;
        case 6:
            printf("星期六\n");
            break;
        case 7:
            printf("星期天\n");
            break;
    }
    return 0;
}