#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//void mikado(int);
//int main()
//{
//	int pooh = 2, bah = 5;
//
//	printf("In main(),pooh = %d and &pooh = %p\n", pooh, &pooh);
//	printf("In main(),bah = %d and &bah = %p\n", bah, &bah);
//	mikado(pooh);
//	return 0;
//}
//
//
//void mikado(int bah) 
//{
//	int pooh = 10;
//	printf("In mikado(),pooh = %d and &pooh = %p\n", pooh, &pooh);
//	printf("In mikado(),bah = %d and &bah = %p\n", bah, &bah);
//}


////交换函数---但是交换失败
//void interchange(int u,int v);
//int main()
//{
//	int x = 5, y = 10;
//
//	printf("Originally x = %d and y = %d.\n", x, y);
//	interchange(x, y);
//	printf("Now x = %d and y %d.\n", x, y);
//	return 0;
//}
//
//
//void interchange(int u,int v)
//{
//	int temp;
//
//	temp = u;
//	u = v;
//	v = temp;
//}



////交换函数---但是交换失败---检测---被调函数与主调函数互不影响，被调函数的参数未传回主调函数
//void interchange(int u, int v);
//int main()
//{
//	int x = 5, y = 10;
//
//	printf("Originally x = %d and y = %d.\n", x, y);
//	interchange(x, y);
//	printf("Now x = %d and y %d.\n", x, y);
//	return 0;
//}
//
//
//void interchange(int u, int v)
//{
//	int temp;
//
//	printf("Originally u = %d and v = %d.\n", u, v);
//	temp = u;
//	u = v;
//	v = temp;
//	printf("Now u = %d and v %d.\n", u, v);
//}



//使用指针解决减缓函数的问题
void interchange(int * u, int * v);
int main()
{
	int x = 5, y = 10;

	printf("Originally x = %d and y = %d.\n", x, y);
	interchange(&x, &y);//把地址发给函数
	printf("Now x = %d and y %d.\n", x, y);
	return 0;
}


void interchange(int * u, int * v)
{
	int temp;

	temp = *u;//temp获得u指向的值
	*u = *v;
	*v = temp;
}