//#include<stdio.h>
//int main()
//{
//	//FILE* pfile = fopen("C:\VScode\wenjian.txt","r");
//	FILE* pfile = NULL;
//	fopen_s(&pfile, "C:\\VScode\\wenjian.txt", "a+");
//	// Ҫע��ѵ�б�ܡ�\����Ϊ��\\�����ߡ�/���������˴�Ϊб��
//	// �ļ�����
//	//fread ������
//	char str[1024] = { 0 };//��Ϊ�ַ����ֽڴ�СΪ1 �Ӷ���֤ÿ�����ܶ�ȡ����
//	//size_t nRead=fread(str, 2,5,pfile);//ÿ�ζ�ȡ2�ֽ� �ֳ�5��
//	//printf("%d\n", nRead);
//	//size_t nRead1 = fread(str, 1, 1024 , pfile);//ÿ�ζ�ȡ1�ֽ� �ֳ�1024��
//	// ʹ��nRead��ʾ�������������������
//	size_t nRead2 = fread(str, 1, 4, pfile);
//	printf("%s\n", str);
//	printf("%d\n", nRead2);
//
//	fseek(pfile, SEEK_CUR, 1);
//
//	//fwrite �ļ�д����
//	fwrite("12345", 1, 5, pfile);
//
//	//fseek(pfile, SEEK_CUR, 2);
//
//	fclose(pfile);
//
//
//	return 0;
//}