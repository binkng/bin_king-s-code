//#include<stdio.h>
//int main()
//{
//	//FILE* pfile = fopen("C:\VScode\wenjian.txt","r");
//	FILE* pfile = NULL;
//	fopen_s(&pfile, "C:\\VScode\\wenjian.txt", "a+");
//	// 要注意把单斜杠“\”改为“\\”或者“/”来表明此处为斜杠
//	// 文件操作
//	//fread 读操作
//	char str[1024] = { 0 };//因为字符型字节大小为1 从而保证每个都能读取完整
//	//size_t nRead=fread(str, 2,5,pfile);//每次读取2字节 分成5项
//	//printf("%d\n", nRead);
//	//size_t nRead1 = fread(str, 1, 1024 , pfile);//每次读取1字节 分成1024项
//	// 使得nRead表示的是最大读满的项的数量
//	size_t nRead2 = fread(str, 1, 4, pfile);
//	printf("%s\n", str);
//	printf("%d\n", nRead2);
//
//	fseek(pfile, SEEK_CUR, 1);
//
//	//fwrite 文件写操作
//	fwrite("12345", 1, 5, pfile);
//
//	//fseek(pfile, SEEK_CUR, 2);
//
//	fclose(pfile);
//
//
//	return 0;
//}