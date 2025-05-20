#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
////块中的变量
//int main()
//{
//	int x = 30;//外层块x
//	printf("x in outer block: %d at %p\n", x, &x);
//	{
//		int x = 77; //新的内层块x, 隐藏外层块x
//		printf("x in inner block: %d at %p\n", x, &x);	
//	}
//	printf("x in outer block: %d at %p\n", x, &x);
//	while (x++<33)//外层块x
//	{
//		int x = 100;//新的内层块x,隐藏外层块x      每一次循环重新创建
//		x++;//内层块x递增
//		printf("x in while loop: %d at %p\n", x, &x);
//	}
//	printf("x in outer block: %d at %p\n", x, &x);
//
//	return 0;
//	}




////c99新特性
//int main()
//{
//	int n = 8;
//
//	printf("   Initially,n = %d at %p\n", n, &n);
//	for (int n = 1; n < 3; n++)
//		printf("    loop 1, n = %d at %p\n", n, &n);
//	printf("After loop 1, n = %d at %p\n", n, &n);
//
//	for (int n = 1; n < 3; n++)
//	{
//		printf(" loop 2 index n = %d at %p\n", n, &n);
//		int n = 6;
//		printf(" loop 2: n = %d at %p\n", n, &n);
//		n++;
//
//	}
//	printf("After loop 2, n = %d at %p\n", n, &n);
//	return 0;
//}




//块作用域的静态变量
void trystat(void);
int main()
{
	int count;

	for (count = 1; count <= 3; count++) 
	{
		printf("Here comes iteration %d:\n", count);
		trystat();
	}

	return 0;
}

void trystat()
{
	int fade = 1;
	static int stay = 1;

	printf("fade = %d and stry = %d\n", fade++, stay++);
}