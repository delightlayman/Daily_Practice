#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	int ch;//读取文件时，存储每个字符的地方
	FILE* fp;//文件指针

	unsigned long count = 0;
	if (argc != 2)
	{
		printf("Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);

	}
	if((fp=fopen(argv[1], "r"))== NULL)
	{
		printf("Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((ch = getc(fp)) != EOF);
	{
		putc(ch, stdout);
		count++;
	}
	fclose(fp);
	printf("File %s has %lu characters\n", argv[1], count);

	system("pause");
	return 0;
}
