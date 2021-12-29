//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char i;
//    while (scanf("%c", &i) != EOF)
//    {
//        char arr[] = "AaEeIiOoUu";
//        int len = strlen(arr);
//        int m = 0;
//        for (m = 0; m < len; m++)
//        {
//            if (i == arr[m])
//            {
//                printf("Vowel\n");
//                break;
//            }
//
//        }
//        if (m == 10)
//        {
//            printf("Consonant\n");
//        }
//        while (getchar() != '\n');
//    }
//
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	char a, b, c, s;
//	scanf("%d", &n);
//	getchar();//吸收回车键
//	while (n--)
//	{
//		scanf("%c%c%c", &a, &b, &c);
//		getchar();
//		if (a > b)
//		{
//			s = a;
//			a = b;
//			b = s;
//		}
//		if (a > c)
//		{
//			s = a;
//			a = c;
//			c = s;
//		}
//		if (b > c)
//		{
//			s = b;
//			b = c;
//			c = s;
//		}
//		printf("%c %c %c\n", a, b, c);
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int a[5] = { 2,4,6,8,10 };
//	int* p; 
//	int **k;
//	p = a;
//	k = &p;
//	printf("%d %d", *(p++),**k);// 2 4
//	// 注意k中存储了p的地址 p++使得p的地址发生了改变
//	return 0;
//}