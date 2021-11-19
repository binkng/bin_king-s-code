//猜数字游戏
//电脑会生成一个随机数
//猜数字
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*************************\n");
	printf("**** 1:play   2:exit ****\n");
	printf("*************************\n");
}
//RAND_MAX rand()函数返回的整数范围在0到RAND_MAX（0x7fff）
// RAND_MAX-32767
// 注：0x 代表为十六进制 7fff可以转换为十进制
void game()//  游戏算法的实现
{
	//1生成一个随机数
	int ret = 0;
	int guess = 0;// 接收猜的数字
	// 拿时间戳设置随机数的起点
	//time_t time(time_t *timer)
	//time()// 返回一个time_t(其实就是一个长整型)
	// void srand(unsigned int seed);
	//time()中括号参数本来需要一个指针 NULL空指针
	//srand((unsigned int)time(NULL)); //在调用rand()函数之前得先调用srand()函数去设置随机数的生成器

	//引入时间戳
	// 时间戳的概念 当前时间-计算机的开始时间（1970.1.1.0:0:0)=(xxx)秒

	ret = rand() % 100 + 1;;// 想生成1—100之间的随机数// rand()函数没有参数
	// 生成随机数 的引用头文件<stdlib.h>
	//printf("%d\n", ret); 注：测试生成的随机数
	// 2猜数字
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else  
		{
			printf("恭喜你,猜对了\n");
			break;

		}


	}




	
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//只需要设置一个生成起始点就行
	do
	{
		menu();// 菜单函数 进入循环一经调用
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//  猜数字游戏函数
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}


	} while (input);  //当输入的input为0时 进入循环一次就退出 非0时则可以继续进入循环
	return 0;
}