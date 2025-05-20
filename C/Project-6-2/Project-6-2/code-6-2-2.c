#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>

extern int count;//引用式声明，外部链接

static int total = 0;//静态定义，内部链接
void accumulate(int k);//函数原型

void accumulate(int k)//k具有块作用域，无连接
{
	static int subtotal = 0;//静态，无连接

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