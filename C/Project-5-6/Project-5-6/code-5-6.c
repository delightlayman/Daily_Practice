#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//int imin(int, int);
//int main()//找出两数中的较小数字
//{
//	int evil1, evil2;
//	printf("Enter a pair of integers (q to quit):\n");
//	while (scanf("%d %d",&evil1,&evil2)==2)
//	{
//		printf("The lesser of %d and %d is %d.\n",evil1,evil2,imin(evil1,evil2));
//		printf("Enter a pair of integers (q to quit):\n");
//	}
//	printf("Bye.\n");
//	return 0;
//}
//
//int imin(int a, int b)
//{
//	int min;
//	if (a < b)
//		min = a;
//	else
//		min = b;
//	return min;
//}



//int imax();
//int main()//找出两数中的较大数字---老版本函数声明---有缺陷
//{
//	printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3));
//	printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));
//	return 0;
//}
//
//int imax(a,b)
//int a, b;
//{
//	return (a > b ? a : b);
//}




//int imax(int, int);
//int main()//找出两数中的较大数字---修改---并比较
//{
//	printf("The maximum of %d and %d is %d.\n",3,5,imax(3,5));
//	printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));//double转int
//	return 0;
//}
//
//int imax(int a, int b)
//{
//	return (a > b ? a : b);
//}


////递归演示---简单的说逐级调用（变量递变），逐级回归
//void up_and_down(int);
//
//int main()
//{
//	up_and_down(1);
//	
//	return 0;
//}
//
//void up_and_down(int n)
//{
//	printf("Level %d: n location %p\n", n, &n);
//	if (n < 4)
//		up_and_down(n + 1);
//	printf("Level %d: n location %p\n", n, &n);
//
//}



////循环与递归计算阶乘
//long fact(int n);
//long rfact(int n);
//
//int main()
//{
//	int num;
//
//	printf("This program calcurates factorials.\n");
//	printf("Enter a value in range 0-12 (q to quit):\n");
//	while (scanf("%d",&num)==1)
//	{
//		if (num < 0)
//			printf("No negative number,please.\n");
//		else if (num > 12)
//			printf("Keep input under 13.\n");
//		else
//		{
//			printf("loop: %d factorial =%ld\n", num, fact(num));
//			printf("recurion: %d factorial =%ld\n", num, rfact(num));
//		}
//		printf("Enter a value in range 0-12 (q to quit):\n");
//	}
//	printf("Bye.\n");
//
//	return 0;
//}
//
//
//long fact(int a)
//{
//	int ans;
//	for (ans = 1; a > 1; a--)
//		ans *= a;
//
//	return ans;
//}
//
//
//long rfact(int a)
//{
//	long ans;
//	if (a > 0)
//		ans = a * rfact(a - 1);
//	else
//		ans = 1;
//
//	return ans;
//}



//二进制打印整数
//void to_binary(unsigned long n);
//int main()
//{
//	unsigned long number;
//	printf("Enter an integer (q to quit):\n");
//	while (scanf("%lu", &number) == 1)
//	{
//		printf("Binary equivalent: ");
//		to_binary(number);
//		printf("\n");
//		printf("Enter an integer (q to quit):\n");
//	}
//	printf("Done.\n");
//	return 0;
//}
//
//
//void to_binary(unsigned long n)
//{
//	int a;
//
//	a = n % 2;
//	if (n >= 2)
//		to_binary(n / 2);
//	putchar(a == 0 ? '0' : '1');
//	return;
//}




