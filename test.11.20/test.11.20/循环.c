//#include<stdio.h>
// 题目：求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字

//                算法一 暴力求解
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
//	int sn=Sn(a);//封装一个函数
//	printf("sn=%d\n", sn);
//	return 0;
//}

//               算法二  利用循环
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
//    int line;  // 菱形总行数
//    int column;  // 菱形总列数
//    int i;  // 当前行
//    int j;  // 当前列
//    printf("请输入菱形的行数(奇数)：");
//    scanf("%d", &line);
//    if (line % 2 == 0) {  // 判断是否是奇数
//        printf("必须输入奇数！\n");
//        exit(1);
//    }
//    column = line;  // 总行数和总列数相同
//    for (i = 1; i <= line; i++) {  // 遍历所有行
//        if (i < (line + 1) / 2 + 1) {  // 上半部分（包括中间一行）
//            for (j = 1; j <= column; j++) {  // 遍历上半部分的所有列
//                if ((column + 1) / 2 - (i - 1) <= j && j <= (column + 1) / 2 + (i - 1)) {
//                    printf("*");
//                }
//                else {
//                    printf(" ");
//                }
//            }
//        }
//        else {  // 下半部分
//            for (j = 1; j <= column; j++) {  // 遍历下半部分的所有列
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