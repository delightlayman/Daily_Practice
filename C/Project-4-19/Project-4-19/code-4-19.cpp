#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//#define RATE1 0.13230//360及以内的计费
//#define RATE2 0.15040//360后继续使用108的计费
//#define RATE3 0.30025
//#define RATE4 0.34025
//#define BREAK1 360.0//分界点1
//#define BREAK2 468.0
//#define BREAK3 720.0
//#define BASE1 (BREAK1*RATE1)//费用计算
//#define BASE2 (BASE1+RATE2*(BREAK2-BREAK1))
//#define BASE3 (BASE2+RATE3*(BREAK3-BREAK2))
//int main()
//{
//	double kwh;
//	double bill;
//	printf("Please enter teh kwh used.\n");
//	scanf("%Lf", &kwh);
//	if (kwh <= BREAK1)
//		bill = kwh * RATE1;
//	else if (kwh <= BREAK2)
//		bill = BASE1 + (kwh - BREAK1) * RATE2;
//	else if (kwh <= BREAK3)
//		bill = BASE2 + (kwh - BREAK2) * RATE3;
//	else if (kwh > BREAK3)
//		bill = BASE3 + (kwh - BREAK3) * RATE4;
//
//
//	printf("The charge for %.1f kwh is $%1.2f.\n",kwh,bill);
//
//	
//	return 0;
//}


#include <stdbool.h>
int main()//使用嵌套if语句显示一个数的约数
{
	unsigned long num,div;
	bool isprime;
	printf("Please enter another integer for analysis,");
	printf("enter q to quit.\n");
	while (scanf("%lu",&num)==1)
	{
		for (div = 2, isprime = true; (div * div) <= num; div++)
		{
			if (num % div == 0)
			{
				if (div * div != num)
					printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
				else
					printf("%lu is divisible by %lu.\n", num, div);
				isprime = false;
			}
		}
		if (isprime)
			printf("%lu is prime.\n", num);
		printf("Please enter another integer for analysis,");
		printf("enter q to quit.\n");
	}
	printf("Bye!\n");
	return 0;
}
