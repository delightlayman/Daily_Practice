#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
//酒店管理函数
#include <stdio.h>
#include <hotel.h>
int menu(void)
{
	int code, status;
	printf("\n%s%s\n", STARS, STARS);
	printf("Enter the number of desired hotel:\n"
            "1) Fairfield Arms            2) Hotel Olympic\n"
	    	"3) Chertowrthy Plzaz         4) The Stockon\n"
		    "5) Quit\n");
	printf("\n%s%s\n", STARS, STARS);
	while ((status=scanf("%d",&code))!=1||(code<1||code>5))
	{
		if (status != 1)
			scanf("%*s");//处理非整数输入
		printf("Enter an integer form 1 to 5,please.");

	}

	return code;
}


int getnights(void)
{
	int nights;
	printf("How many nights are needed?\n");
	while ((scanf("%d",&nights))!=1)
	{
		scanf("%*s");
		printf("Please enter integer,such as 2.\n");
	}
	return nights;
}

void showprice(double rate, int nights)
{
	int n;
	double total = 0.0;
	double factor = 1.0;
	for (n = 1; n <= nights; n++, factor *= DISCOUNT)
		total += rate * factor;
	printf("The total cost will be $%0.2f.\n",total);
}