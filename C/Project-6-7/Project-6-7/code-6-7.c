#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define MAX 41
//
//int main()
//{
//	FILE *fp;
//	char words[MAX];
//
//	if ((fp = fopen("wordy", "a+")) == NULL)
//	{
//		fprintf(stdout,"Cant't open \"wordy\" file\n");
//		exit(1);
//	}
//	puts("Enter words to add to file; press the # key at the begining of a line to terminate.");
//	while (fscanf(stdin,"%40s",words)==1&&words[0]!='#')
//		fprintf(fp,"%s\n",words);
//	
//	puts("File contents:");
//	rewind(fp);//返回文件开始处
//
//	while(fscanf(fp,"%s",words)==1)
//		puts(words);
//	puts("Done!");
//	if(fclose(fp)!=0)
//		fprintf(stderr,"Error in closing file\n");
//
//	return 0; 
//}



#define CNTL_Z '\032'
#define SLEN 81

int main()
{
	char file[SLEN];
	char ch;
	FILE* fp;
	long count, last;

	puts("ENter the naem of teh file to be processed:");
	scanf("%80s", file);
	//二进制只读模式
	if ((fp = fopen(file, "rb")) == NULL)
	{
		printf("reverse can't open %s\n", file);
		exit(EXIT_FAILURE);

	}
	fseek(fp, 0L, SEEK_END);//定位到文件结尾
	last = ftell(fp);

	for (count = 1L; count <= last; count++)//回退count个位置
	{
		fseek(fp, -count, SEEK_END);
		ch = getc(fp);
		if (ch != CNTL_Z && ch != '\r')
			putchar(ch);
	}
	putchar('\n');
	fclose(fp);


	return 0;
}
