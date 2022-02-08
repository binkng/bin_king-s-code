#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0;
	char password[15] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", password);
		//当两个字符串相等的时候 函数返回一个0 如果第一个数大于第二个 返回数大于0 如果小于 则返回数小于0
		if (strcmp(password, "123456")==0)   //不能用==来判断两个字符串之间的大小是否相等
		{
			printf("登陆成功\n");
			break;
		}
		else
			printf("登陆失败，请重新输入密码");
	}
	if (i == 3)
		printf("三次密码全错误 退出程序");


	return 0;
}