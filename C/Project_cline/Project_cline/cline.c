#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int i, times;

	if (argc < 2 || (times = atoi(argv[1])) < 1)
		printf("Usage: %s positive-number\n", argv[0]);
	else
		for (i = 0; i < times; i++)
			puts("Hello,good looking!");


	return 0;
}