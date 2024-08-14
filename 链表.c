//#include<stdio.h>
//typedef struct Node
//{
//	int id;
//	char* name;
//	struct Node* next;
//
//}List;
//int main()
//{
//	List a = { 1,"kebe",NULL };
//	List b = { 2,"james",NULL };
//	List c = { 3,"curry",NULL };
//	List d = { 4,"haden",NULL };
//	a.next = &b;
//	b.next = &c;
//	c.next = &d;
//
//	// ±éÀúÁ´±í¡¢
//	List* p = &a;
//	while (p)
//	{
//		printf("%d\n", p->id);
//		printf("%s\n", p->name);
//		p = p->next;
//	}
//
//	return 0;
//}