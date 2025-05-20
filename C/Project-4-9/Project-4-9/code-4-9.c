#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//int main()//递增的前后缀---相似
//{
//	int ultra = 0, super = 0;
//	while (super < 5)
//	{
//	
//		super++;
//		++ultra;
//		printf("super=%d,ultra=%d\n", super, ultra);
//	}
//	return 0;
//}




//int main()//递增的前后缀---不同:作用时间
//{
//	int a = 1, b = 1;
//	int a_post, pre_b;
//	a_post = a++;
//	pre_b = ++b;
//	printf("a    a_post     b    pre_b\n");
//	printf("%d %9d %5d %8d\n", a, a_post, b, pre_b);
//	return 0;
//}
//



#define MAX 100
int main()//递减的前后缀
{
	int count = MAX + 1;
	while (--count>0)
	{
		printf("%d bottles of spring water on the wall,\
%d bottles of spring water!\n", count, count);
		printf("Take one down and pass it around,\n");
		printf("%d bottles of spring water!\n\n", count-1);
	}
	return 0;
}
