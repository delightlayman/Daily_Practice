#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
#include <ctype.h>
int main()//�滻�������ĸ������ĸ�ַ����ֲ���
{
	char ch;
	while ((ch=getchar())!='\n')
	{
		if (isalpha(ch))
			putchar(ch + 1);
		else
			putchar(ch);		
	}
	putchar(ch);
	return 0;
}

