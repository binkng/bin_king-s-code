//#include<stdio.h>
//#include<stdlib.h>//system
//#include<string.h>
//int main()
//{
//	char input[20] = { 0 };// 存储数据
//	// 关机命令shutdown -s -t 60
//	//systen()=执行系统命令的库函数
//	system("shutdown -s -t 60");
//	//while(1)
//	// break即可
//
//again:
//	printf("请注意，你的电脑在一分钟内关机，如果输入：我是猪，就取消关机\n请输入");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0) //比较两个字符串 使用库函数-strcmp()
//	{
//		system("shutdown -a"); //取消关机命令
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
////注意 也可以用while循环此时就不需要goto 和 goto again了
