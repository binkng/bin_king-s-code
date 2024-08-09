//#include<stdio.h>
//int main()
//{
//	FILE* pfile1 = NULL;
//	FILE* pfile2 = NULL;
//	fopen_s(&pfile1, "C:\\VScode\\wenjian.txt", "r");
//	fopen_s(&pfile2, "C:\\VScode\\wenjianfuben.txt", "w");
//	char c;
//	while ((c = fgetc(pfile1)) != EOF)//返回int大小的字符
//	{
//		fputc( c, pfile2);
//	}
//	fclose(pfile1);
//	fclose(pfile2);
//	return 0;
//}