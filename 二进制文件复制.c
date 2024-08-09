#include<stdio.h>
int main()
{

	FILE* pfile1 = NULL;
	FILE* pfile2 = NULL;

	fopen_s(&pfile1, "C:\\VScode\\фад╩╫ьм╪ 2024-07-20 112920.png", "rb");
	fopen_s(&pfile2, "C:\\VScode\\wenjian.png", "wb");

	char buf[1024];

	/*size_t nRead = fread(buf, 1, 1024, pfile1);
	printf("%s\n", buf);
	printf("%d\n", nRead1);*/
	size_t nRead, nWrite;
	while ((nRead = fread(buf, 1, 1024, pfile1)) > 0)
	{
		nWrite=fwrite(buf, 1, nRead, pfile2);
		printf("%d %d\n", nRead, nWrite);
	}

	fclose(pfile1);
	fclose(pfile2);

	return 0;
}