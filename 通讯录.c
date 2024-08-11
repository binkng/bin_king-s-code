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
	int currentpage;//��ǰҳ��
	int onepageInfol;//ÿҳ������
	int totalinfo;//������
	int totalpage;//��ҳ��

}Page;
// �������� ��ֹ��Ϊ˳�������
int g_Meantype;// �����ı�showmenu��ӡ����Ϣ
char g_key;//�����ж�search()���showmenu����ô�˳�����
List* Getnode();
void Addnode(List** phead, List** pend, List* pnode);
int Getid();
char* Getname();
char* Gettel();
void InitInfo(List** phead, List** pend, int n);//��ʼ������
Page* Getpage(List* phead,int n);//�õ�ҳ�����Ϣ
void ShowInfo(List* phead, Page* page);// ��ʾ��ĳҳ
void ShowMenu(Page* page);
void TurnPage(List* phead, Page* page);// ��ҳ
void Browse(List* phead);// ���
List* GetNodeIn();//�ֶ������Ϣ
char* GetString();//�ַ�������
void Search(List* phead);
void Deletenode(List** pphead, List** ppend, int id);// �����ɾ��
void DeleInfo(List** pphead);
void UpdateInfo(List* phead);//
int main()
{
	List* phead = NULL;
	List* pend = NULL; 

	InitInfo(&phead, &pend, 115);//һ��115��
	/*printf("1.�����Ϣ\n");
	printf("2.�����Ϣ\n");
	printf("3.��ѯ��Ϣ\n");
	printf("4.ɾ����Ϣ\n");
	printf("5.�޸���Ϣ\n");
	/*printf("q.�˳�\n");*/
	/*char c;
	scanf_s(" %c", &c);*/
	while (1) //ʹ�ò˵������ظ�����
	{
		printf("1.�����Ϣ\n");
		printf("2.�����Ϣ\n");
		printf("3.��ѯ��Ϣ\n");
		printf("4.ɾ����Ϣ\n");
		printf("5.�޸���Ϣ\n");
		printf("q.�˳�\n");
		char c;
		scanf_s(" %c", &c);//ʹ�ÿո������հ��ַ�
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
			// ʹ���ڲ�ѯ��ʱ�� �������²�ѯ��һѡ��
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
//��̬���������ں����ڲ�������Ҫ���ڴ�ռ䣬�����䴫�ݸ������ߡ�
//ʹ�� malloc ��̬�����ڴ棬ȷ��������ڴ���ں������غ���Ȼ��Ч��
//���Ա������߼���ʹ�ú͹���
//ʹ�� malloc �����ڴ�ռ���Ϊ��ȷ���ڴ�ĳ־��Ժ�����ԣ�
//ʹ���ַ����ں������غ���Ȼ��Ч�������ܹ��ɵ����߹�����ͷš�

List* Getnode()// ��ȡ���
{
	List* pnode = malloc(sizeof(List));
	pnode->id = Getid();
	pnode->name = Getname();
	pnode->tel = Gettel();
	pnode->next = NULL;
	return pnode;
}
void Addnode(List** phead, List** pend, List* pnode)// ��ӽ��
{
	if (*phead==NULL)//���ж��Ƿ��нڵ�
	{
		*phead = pnode;
	}
	else
	{
		//(*phead)->next = pnode;  /// ����д�� 
		// ��ȷд�� Ӧ����
		(*pend)->next = pnode;
		
	}
	*pend = pnode;
}
int Getid()
{
	static int id = 0;  // ʹ�õ��Ǿֲ���̬����
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
Page* Getpage(List* phead, int n)//�õ�ҳ�����Ϣ
{
	Page* page = malloc(sizeof(Page));
	page->currentpage = 0;
	page->onepageInfol = n;
	page->totalpage = 0;
	// �������� ����������
	page->totalinfo = 0;
	while (phead)
	{
		page->totalinfo++;
		phead = phead->next;
	}
	//������ҳ�� 
	//�����������Լ�ÿҳ��ʾ������������
	page->totalpage = page->totalinfo% page->onepageInfol == 0 ? page->totalinfo / page->onepageInfol :
	page->totalinfo / page->onepageInfol + 1;// ��ľ�����  ����
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
	// ÿһҳ���еĿ�ʼ�ͽ������
	int begin =(page->currentpage-1)* page->onepageInfol+1;
	int end = page->currentpage * page->onepageInfol;
	int count = 1;//����һ��������  ����������ǰ������������ڵ�����
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
void ShowMenu(Page* page)// ��ҳ�����в�����Ŀ¼
{
	///*printf("��ǰ��%dҳ ��%dҳ ��%d�� w��һҳ s��һҳ b����\n", page->currentpage, page->totalpage, page->totalinfo*/);
	switch (g_Meantype)
	{
	case 1:
		printf("��ǰ��%dҳ ��%dҳ ��%d�� w��һҳ s��һҳ b����\n", 
			page->currentpage, page->totalpage, page->totalinfo);
		break;
	case 3:
		printf("��ǰ��%dҳ ��%dҳ ��%d�� w��һҳ s��һҳ c���²�ѯ b����\n",
			page->currentpage, page->totalpage, page->totalinfo);
		break;
	case 4:
		printf("��ǰ��%dҳ ��%dҳ ��%d�� w��һҳ s��һҳ dɾ����Ŀ b����\n",
			page->currentpage, page->totalpage, page->totalinfo);
		break;
	case 5:
		printf("��ǰ��%dҳ ��%dҳ ��%d�� w��һҳ s��һҳ u�޸���Ŀ b����\n",
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
				printf("�Ѿ��ǵ�һҳ�ˣ���\n");
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
				printf("�Ѿ������һҳ�ˣ���\n");
			}
			break;
		case 'b':
			return;
			break;
		case 'c':
			// ����һ��case 'c' ʹ��turnpage�����е�while��1��ѭ�����ѽ��� 
		//�Ӷ�ʹ��Browse���ѽ���
			//�� c ���²�ѯ
			return;
			break;
		case 'd'://������ҳ
			return;
			break;
		case 'u'://����
			return;
			break;
		default:
			printf("�����ˣ�����\n");
			break;
		}
		scanf_s(" %c", &c);// �ر�ע�� ������á��ո�����ڴ滺�����еĻس���
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
List* GetNodeIn()//�����Ϣ  ��ʱ��Ҫ�ֶ���� �������Զ����
{
	List* pnode = malloc(sizeof(List));
	pnode->id = Getid();
	printf("������������\n");
	pnode->name = GetString();
	printf("������绰���룺\n");
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
	//scanf_s(" ");// ����ڴ滺�������µĿհ��ַ��� \n����ѡ2�󰴵Ļس�����
	while ((c = getchar()) != '\n')//ע�����ŵ�λ��Ҫ�Ӷ���
		/*((c = getchar() != '\n'))��  

		����ִ�� getchar() != '\n'���Ƚϴ������ȡ���ַ��뻻�з��Ƿ���ȡ�
		�ñȽϵĽ����һ������ֵ��0 ��ʾ��ȣ�1 ��ʾ����ȣ���
		Ȼ���������ֵ��ֵ�� c��
		������ʽ�ĺ����ǣ��������ж�ȡһ���ַ���
		�����ַ��Ƿ񲻵��ڻ��з������������0 �� 1����ֵ�� c��*/
	{
		str[count] = c;
		count++;
		if(count == size)
         //���ַ���������������󳤶�ʱ �Զ�����
		{
			size += 5;//����5 �ͻ��Զ�����
			str = realloc(str, size);
		}
	}
	str[count] = '\0';
	return str;
}
void Search(List* phead)
//ǰ׺ģ����ѯ
{
	List* pmark = phead;
	while (1)// Ŀ����Ϊ�˿������²�ѯ
	{
		char* str = NULL;
		while (1)// ȷ�����Զ������
		{
			//����ؼ���
			printf("������Ҫ��ѯ�Ĺؼ��֣�\n");//ǰ���������
			str = GetString();
			printf("��aȷ�� �������������룺\n");
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
		//�������� �����͵绰ͬʱ��ؼ���ƥ��
		phead = pmark;// ��֤��'c'���²�ѯʱ ��������ԭ�ȵ�����ͷ��ʼ��ѯ
		while (phead != NULL)
		{
			//����һ���µĽ�� ���½����ӵ���������
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
		// ����һ��case 'c' ʹ��turnpage�����е�while��1��ѭ�����ѽ��� 
		//�Ӷ�ʹ��Browse���ѽ���
		//���������
		while (pnewhead)
		{
			List* Pdel = pnewhead;
			pnewhead = pnewhead->next;
			free(Pdel);
			Pdel = NULL;
		}
		if (g_key == 'b' || g_key == 'd' || g_key == 'u')
			// ����ǰ�'b'��������ѯ
			//�򷵻����˵� ����d�����������while��1��ѭ��
		{
			break;//�˳����while()ѭ��
		}
	}
}

void Deletenode(List** pphead, List** ppend, int id)
{
	//ͷɾ
	List* Pdel = NULL;
	if ((*pphead)->id == id)
	{
		List* Pdel = (*pphead);
		*pphead = (*pphead)->next;
		free(Pdel);
		Pdel = NULL;
		return;
	}
	//�м�ɾ��
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
	// ���Խ�β�ڵ�ɾ�����뵽�м�ɾ���о��� ֻ��Ҫ�ж�ɾ���Ľ���ǲ���β��㼴��
	//βɾ��
	pmark = *pphead;
	if ((*ppend)->id == id)
	{
		while (pmark->next != (*ppend))//�ҵ�β�ڵ��ǰһ��
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
	Search(*pphead);// ��ѯ��Ҫɾ������Ŀ ͨ�����Ӱ�����d�����˳�Search��������
	if ('b' == g_key)//���ص��ʼ�����˵�
	{
		return;
	}
	printf("������Ҫɾ������Ŀ�ı�ţ�\n");
	int id;
	scanf_s(" %d", &id);
	Deletenode(pphead, ppend, id);
}
void UpdateInfo(List* phead)
{

	Search(phead);// ��ѯ��Ҫ���ĵ���Ŀ 
	//ͨ�����Ӱ�����u�����˳�Search��������
	if ('b' == g_key)//���ص��ʼ�����˵�
	{
		return;
	}
	printf("������Ҫ�޸ĵ���Ŀ�ı�ţ�\n");
	int id;
	scanf_s(" %d", &id);
	//�������� �ҵ���Ӧ�Ľ�� �޸������͵绰 
	while (phead)
	{
		if (phead->id == id)
		{
			printf("������������\n");
			char* str = GetString();
			if (strlen(str) > 0)  //����һ�㶼�Ǹ����������ߵ绰����һ�� 
				// ���Լ�һ���ַ������ж� ���á��س������������и���֮һ
			{
				free(phead->name);
				phead->name = str;
			}
			printf("������绰��\n");
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