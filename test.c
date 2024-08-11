#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	char* name;
	char* tel;
	int id;
	struct node* next;
}List;
//List* Getnode(); 
//char* Getname();
//char* Gettel();
char* Getstring();
int main()
{
	List* phead = NULL;
	List* pend = NULL;

	char* str = Getstring();

	return 0;
}
//List* Getnode()
//{
//	List* pnode = malloc(sizeof(List));
//	pnode->id = 1;
//	pnode->name=Getname();
//	pnode->tel=Gettel();
//	pnode->next = NULL;
//	return pnode;
//}
//char* Getname()
//{
//
//}
char* Getstring()
{
	int size = 5;
	char* str = malloc(5);
	char c;
	int i = 0;
	while ((c = getchar()) != '\n')
	{
		str[i] = c;
		if (i==size)
		{
			size += 5;
			str = realloc(str, size);
		}
		i++;
	}
	str[i] = '\0';
	return str;
}