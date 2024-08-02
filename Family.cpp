#include"Family.h"
#include"Person.h"

Family::Family()
{
	for (int i = 0; i < 10; i++)
	{
		arr[i] = NULL;
	}
}
void Family::PushPerson(Person* pPs)
//void Family::PushPerson(Person* pPs)
{
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == NULL)
		{
			arr[i] = pPs;
			return;//添加一个就可以直接退出了
		}
	}

}

void Family::Play()
{
	for (int i = 0; i < 10; i++)
	{
		if (arr[i])
		{
			arr[i]->Play();
		}
		else
		{
			cout << "-------NULL--------" << endl;
		}

	}
}