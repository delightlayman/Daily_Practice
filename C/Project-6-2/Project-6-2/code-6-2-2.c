#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>

extern int count;//����ʽ�������ⲿ����

static int total = 0;//��̬���壬�ڲ�����
void accumulate(int k);//����ԭ��

void accumulate(int k)//k���п�������������
{
	static int subtotal = 0;//��̬��������

	if (k <= 0)
	{
		printf("loop cycle: %d\n", count);
		printf("subtotal: %d; total: %d\n", subtotal, total);
		subtotal = 0;
	}
	else
	{
		subtotal += k;
		total += k;
	}
}