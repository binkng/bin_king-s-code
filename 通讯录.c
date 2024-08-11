#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
typedef struct node
{
	int id;
	char* name;
	char* tel;
	struct node* next;
}List;

typedef struct PAGE
{
	int currentpage;//当前页数
	int onepageInfol;//每页中条数
	int totalinfo;//总条数
	int totalpage;//总页数

}Page;
// 函数声明 防止因为顺序出问题
int g_Meantype;// 用来改变showmenu打印的信息
char g_key;//用来判断search()后的showmenu是怎么退出来的
List* Getnode();
void Addnode(List** phead, List** pend, List* pnode);
int Getid();
char* Getname();
char* Gettel();
void InitInfo(List** phead, List** pend, int n);//初始化数据
Page* Getpage(List* phead,int n);//得到页相关信息
void ShowInfo(List* phead, Page* page);// 显示出某页
void ShowMenu(Page* page);
void TurnPage(List* phead, Page* page);// 翻页
void Browse(List* phead);// 浏览
List* GetNodeIn();//手动添加信息
char* GetString();//字符串扩容
void Search(List* phead);
void Deletenode(List** pphead, List** ppend, int id);// 按编号删除
void DeleInfo(List** pphead);
void UpdateInfo(List* phead);//
int main()
{
	List* phead = NULL;
	List* pend = NULL; 

	InitInfo(&phead, &pend, 115);//一共115条
	/*printf("1.浏览信息\n");
	printf("2.添加信息\n");
	printf("3.查询信息\n");
	printf("4.删除信息\n");
	printf("5.修改信息\n");
	/*printf("q.退出\n");*/
	/*char c;
	scanf_s(" %c", &c);*/
	while (1) //使得菜单可以重复出现
	{
		printf("1.浏览信息\n");
		printf("2.添加信息\n");
		printf("3.查询信息\n");
		printf("4.删除信息\n");
		printf("5.修改信息\n");
		printf("q.退出\n");
		char c;
		scanf_s(" %c", &c);//使用空格跳过空白字符
		switch (c)
		{
		case '1':
			g_Meantype = 1;
			Browse(phead);
			break;
		case '2':
			Addnode(&phead, &pend, GetNodeIn());
			break;
		case '3':
			g_Meantype = 3;
			// 使得在查询的时候 还有重新查询这一选项
			Search(phead);
			break;
		case '4':
			g_Meantype = 4;
			DeleInfo(&phead, &pend);
			break;
		case '5':
			g_Meantype = 5;
			UpdateInfo(phead);
			break;
		case 'q':
			return 0;
			break;
		}
	}
	/*Browse(phead);*/
	//Page* ptest=Getpage(phead,10);

	//ptest->currentpage = 1;
	//TurnPage(phead, ptest);
	/*ShowInfo(phead, ptest);
	ShowMenu(ptest);*/
	//while (phead!=NULL)
	//{
	//	printf("%d %s %s\n", phead->id, phead->name, phead->tel);
	////	phead = phead->next;
	//}
	return 0;
}
//动态分配允许在函数内部创建需要的内存空间，并将其传递给调用者。
//使用 malloc 动态分配内存，确保分配的内存块在函数返回后仍然有效，
//可以被调用者继续使用和管理。
//使用 malloc 分配内存空间是为了确保内存的持久性和灵活性，
//使得字符串在函数返回后仍然有效，并且能够由调用者管理和释放。

List* Getnode()// 获取结点
{
	List* pnode = malloc(sizeof(List));
	pnode->id = Getid();
	pnode->name = Getname();
	pnode->tel = Gettel();
	pnode->next = NULL;
	return pnode;
}
void Addnode(List** phead, List** pend, List* pnode)// 添加结点
{
	if (*phead==NULL)//先判断是否有节点
	{
		*phead = pnode;
	}
	else
	{
		//(*phead)->next = pnode;  /// 错误写法 
		// 正确写法 应该是
		(*pend)->next = pnode;
		
	}
	*pend = pnode;
}
int Getid()
{
	static int id = 0;  // 使用的是局部静态变量
	id++;
	return id;
}
char* Getname()
{
	char* str = malloc(6);
	for (int i = 0; i < 5; i++)
	{
		str[i] = rand() % 26 + 'a';
	}
	str[5] = '\0';
	return str;
}
char* Gettel()
{
	char* str = malloc(12);
	switch (rand() % 4)
	{
	case 0:
		str[0] = '1';
		str[1] = '7';
		str[2] = '8';
		break;
	case 1:
		strcpy_s(str, 12, "182");
		break;
	case 2:
		strcpy_s(str, 12, "192");
		break;
	case 3:
		strcpy_s(str, 12, "188");
		break;
	}
	for (int i = 3; i < 11; i++)
	{
		str[i] = rand() % 10 + '0';
	}
	str[11] = '\0';
	return str;
	
}
void InitInfo(List** phead,List** pend,int n)
{
	srand(time(NULL));
	for (int i = 1; i <= n; i++)
	{
		Addnode(phead, pend, Getnode());
	}
}
Page* Getpage(List* phead, int n)//得到页相关信息
{
	Page* page = malloc(sizeof(Page));
	page->currentpage = 0;
	page->onepageInfol = n;
	page->totalpage = 0;
	// 遍历链表 计算总条数
	page->totalinfo = 0;
	while (phead)
	{
		page->totalinfo++;
		phead = phead->next;
	}
	//计算总页数 
	//根据总条数以及每页显示多少条来计算
	page->totalpage = page->totalinfo% page->onepageInfol == 0 ? page->totalinfo / page->onepageInfol :
	page->totalinfo / page->onepageInfol + 1;// 三木运算符  ？：
	/*if ((page->totalinfo % page->onepageInfol) == 0)
	{
		page->totalpage = page->totalinfo / page->onepageInfol;
	}
	else
	{
	//	page->totalpage = page->totalinfo / page->onepageInfol + 1;
	//}*/
	return page;
}
void ShowInfo(List* phead, Page* page)
{
	// 每一页当中的开始和结束序号
	int begin =(page->currentpage-1)* page->onepageInfol+1;
	int end = page->currentpage * page->onepageInfol;
	int count = 1;//定义一个计数器  用来计数当前遍历到的链表节点的序号
	while (phead)
	{
		if (count >= begin && count <= end)
		{
			printf("%d %s %s\n", phead->id, phead->name, phead->tel);
		}
		phead = phead->next;
		count++;
	}
}
void ShowMenu(Page* page)// 翻页过程中产生的目录
{
	///*printf("当前第%d页 共%d页 共%d条 w上一页 s下一页 b返回\n", page->currentpage, page->totalpage, page->totalinfo*/);
	switch (g_Meantype)
	{
	case 1:
		printf("当前第%d页 共%d页 共%d条 w上一页 s下一页 b返回\n", 
			page->currentpage, page->totalpage, page->totalinfo);
		break;
	case 3:
		printf("当前第%d页 共%d页 共%d条 w上一页 s下一页 c重新查询 b返回\n",
			page->currentpage, page->totalpage, page->totalinfo);
		break;
	case 4:
		printf("当前第%d页 共%d页 共%d条 w上一页 s下一页 d删除条目 b返回\n",
			page->currentpage, page->totalpage, page->totalinfo);
		break;
	case 5:
		printf("当前第%d页 共%d页 共%d条 w上一页 s下一页 u修改条目 b返回\n",
			page->currentpage, page->totalpage, page->totalinfo);
		break;
	}
	
}
void TurnPage(List* phead, Page* page)
{
	char c='s';
	while (1)
	{
		switch (c)
		{
		case 'w':
			if (page->currentpage >1)
			{
				page->currentpage--;
				ShowInfo(phead, page);
				ShowMenu(page);
			}else
			{
				printf("已经是第一页了！！\n");
			}
			break;
		case 's':
			if ( page->currentpage <page->totalpage)
			{
				page->currentpage++;
				ShowInfo(phead, page);
				ShowMenu(page);
			}
			else
			{
				printf("已经是最后一页了！！\n");
			}
			break;
		case 'b':
			return;
			break;
		case 'c':
			// 加上一个case 'c' 使得turnpage（）中的while（1）循环的已结束 
		//从而使得Browse得已结束
			//按 c 重新查询
			return;
			break;
		case 'd'://结束翻页
			return;
			break;
		case 'u'://跳出
			return;
			break;
		default:
			printf("按错了！！！\n");
			break;
		}
		scanf_s(" %c", &c);// 特别注意 这边利用“空格”清空内存缓冲区中的回车符
		g_key = c;
	}
}

void Browse(List* phead)
{
	Page* ptest = Getpage(phead, 10);
	TurnPage(phead, ptest);
	free(ptest);
	ptest = NULL;
}
List* GetNodeIn()//添加信息  此时需要手动添加 而不是自动添加
{
	List* pnode = malloc(sizeof(List));
	pnode->id = Getid();
	printf("请输入姓名：\n");
	pnode->name = GetString();
	printf("请输入电话号码：\n");
	pnode->tel = GetString();
	pnode->next = NULL;
	return pnode;
}
char* GetString()
{
	int size = 5;
	char* str = malloc(size);
	int count = 0;
	char c;
	scanf_s("%c", &c);
	if (c!='\n')
	{
		str[count] = c;
		count++;
	}
	//scanf_s(" ");// 清除内存缓存区留下的空白字符“ \n”（选2后按的回车符）
	while ((c = getchar()) != '\n')//注意括号的位置要加对了
		/*((c = getchar() != '\n'))：  

		首先执行 getchar() != '\n'，比较从输入读取的字符与换行符是否相等。
		该比较的结果是一个布尔值（0 表示相等，1 表示不相等）。
		然后将这个布尔值赋值给 c。
		这个表达式的含义是：从输入中读取一个字符，
		检查该字符是否不等于换行符，并将结果（0 或 1）赋值给 c。*/
	{
		str[count] = c;
		count++;
		if(count == size)
         //当字符数量等于数组最大长度时 自动扩容
		{
			size += 5;//超过5 就会自动扩容
			str = realloc(str, size);
		}
	}
	str[count] = '\0';
	return str;
}
void Search(List* phead)
//前缀模糊查询
{
	List* pmark = phead;
	while (1)// 目的是为了可以重新查询
	{
		char* str = NULL;
		while (1)// 确保可以多次输入
		{
			//输入关键字
			printf("请输入要查询的关键字：\n");//前几个数相等
			str = GetString();
			printf("按a确认 其他键重新输入：\n");
			char c;
			scanf_s(" %c", &c);
			if (c == 'a')
			{
				break;
			}
			else
			{
				free(str);
				str = NULL;
			}
		}
		/*printf("%s\n", str);*/
		List* pnewhead = NULL;
		List* pnewend = NULL;
		//遍历链表 姓名和电话同时与关键字匹配
		phead = pmark;// 保证按'c'重新查询时 还可以重原先的链表头开始查询
		while (phead != NULL)
		{
			//复制一个新的结点 将新结点添加到新链表上
			if (0 == strncmp(str, phead->name, strlen(str)) 
				|| 0 == strncmp(str, phead->tel, strlen(str)))
			{
				List* ptemp = malloc(sizeof(List));
				ptemp->id = phead->id;
				ptemp->name = phead->name;
				ptemp->tel = phead->tel;
				ptemp->next = NULL;
				Addnode(&pnewhead, &pnewend, ptemp);
			}
			phead = phead->next;
		}
		Browse(pnewhead);
		// 加上一个case 'c' 使得turnpage（）中的while（1）循环的已结束 
		//从而使得Browse得已结束
		//清空新链表
		while (pnewhead)
		{
			List* Pdel = pnewhead;
			pnewhead = pnewhead->next;
			free(Pdel);
			Pdel = NULL;
		}
		if (g_key == 'b' || g_key == 'd' || g_key == 'u')
			// 如果是按'b'来结束查询
			//则返回主菜单 按‘d’来结束大的while（1）循环
		{
			break;//退出大的while()循环
		}
	}
}

void Deletenode(List** pphead, List** ppend, int id)
{
	//头删
	List* Pdel = NULL;
	if ((*pphead)->id == id)
	{
		List* Pdel = (*pphead);
		*pphead = (*pphead)->next;
		free(Pdel);
		Pdel = NULL;
		return;
	}
	//中间删除
	List* pmark = *pphead;
	while (pmark)
	{
		if (pmark->next->id == id)
		{
			List* Pdel = pmark->next;
			pmark->next = Pdel->next;
			free(Pdel);
			Pdel = NULL;
			return;
		}
		pmark = pmark->next;
	}
	// 可以将尾节点删除并入到中间删除中就行 只需要判断删除的结点是不是尾结点即可
	//尾删除
	pmark = *pphead;
	if ((*ppend)->id == id)
	{
		while (pmark->next != (*ppend))//找到尾节点的前一个
		{
			pmark = pmark->next;
		}
		Pdel = (*ppend);
		*ppend = pmark;
		(*ppend)->next = NULL;
		free(Pdel);
		Pdel = NULL;
		return;
	}
}
void DeleInfo(List** pphead,List** ppend)
{
	Search(*pphead);// 查询想要删除的条目 通过增加按键“d”来退出Search（）函数
	if ('b' == g_key)//返回到最开始的主菜单
	{
		return;
	}
	printf("请输入要删除的条目的编号：\n");
	int id;
	scanf_s(" %d", &id);
	Deletenode(pphead, ppend, id);
}
void UpdateInfo(List* phead)
{

	Search(phead);// 查询想要更改的条目 
	//通过增加按键“u”来退出Search（）函数
	if ('b' == g_key)//返回到最开始的主菜单
	{
		return;
	}
	printf("请输入要修改的条目的编号：\n");
	int id;
	scanf_s(" %d", &id);
	//遍历链表 找到对应的结点 修改姓名和电话 
	while (phead)
	{
		if (phead->id == id)
		{
			printf("请输入姓名：\n");
			char* str = GetString();
			if (strlen(str) > 0)  //由于一般都是更改姓名或者电话其中一个 
				// 所以加一个字符长度判断 利用“回车符”跳过其中更改之一
			{
				free(phead->name);
				phead->name = str;
			}
			printf("请输入电话：\n");
			str = GetString();
			if (strlen(str) > 0)
			{
				free(phead->tel);
				phead->tel = str;
			}
		}
		phead = phead->next;
	}
}