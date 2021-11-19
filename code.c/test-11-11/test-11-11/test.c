#define_CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	//演示多个字符从两端移动 向中间汇聚
//	char a1[] = "!Do you love me!!!";
//	char a2[] = "##################";
//	int left = 0;
//	//int right = sizeof(a1) / sizeof(a1[0])-2;
//	int right = strlen(a1) - 1;
//	while (left <= right)
//	{
//		a2[left] = a1[left];
//		a2[right] = a1[right];
//		printf("%s\n", a2);
//		//休息一秒 也就是1000毫秒 
//		Sleep(1500);
//		system("cls"); //执行系统命令的一个库函数 cls-清空屏幕
//
//		left++;
//		right--;
//	}
//	return 0;
//}
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", password);
		//当两个字符串相等的时候 函数返回一个0 如果第一个数大于第二个 返回数大于0 如果小于 则返回数小于0
		if (strcmp(password, "123456") == 0)   //不能用==来判断两个字符串之间的大小是否相等
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("登陆失败，请重新输入密码");
		}
	
	}
	if (i == 3)
		printf("三次密码全错误 退出程序");


	return 0;
}