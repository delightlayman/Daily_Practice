#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//double power(double n, int p);//函数原型
//int main()//计算数的整数次幂
//{
//	double x, xpow;
//	int exp;
//	printf("Enter a number and the positiive integer power to\n");
//	printf("which the number will be raised.Enter q to quit.\n");
//	while (scanf("%lf %d",&x,&exp)==2)
//	{
//		xpow = power(x,exp);
//		printf("%.3g to power %d is %.5g\n", x, exp, xpow);
//		printf("Enter next pair of numbers or q to quit.\n");
//
//	}
//	printf("Hope you enjoy this power trip---bye!\n");
//	return 0;
//}
//double power(double n, int p)//函数定义
//{
//	double pow = 1;//pow个n的乘积
//	int i;//幂次的计数
//	for (i = 1; i <= p; i++)
//		pow *= n;
//	return pow;
//}




//int main()//0℃以下天数占总天数的百分比
//{
//	const int FREEZEING = 0;
//	float temperature;
//	int cold_days=0;
//	int all_days=0;
//	printf("Enter the list of daily low temperature.\n");
//	printf("Use Celsius,and enter q to quit.\n");
//	while (scanf("%f",&temperature)==1)
//	{
//		all_days++;
//		if (temperature < FREEZEING)
//			cold_days++;
//	}
//	if (all_days != 0)
//			printf("%d days total: %.1f%% were below freezing.\n",
//all_days,100.0*(float)cold_days/all_days);
//	if (all_days == 0)
//		printf("No data entered!\n");
//	return 0;
//}



#define SPACE ' ' //一个空格
//int main()//更改输入，空格不变
//{
//	char ch;
//	ch = getchar();//读取一个字符
//	while (ch!='\n')
//	{
//		if (ch == SPACE)
//			putchar(ch);
//		else
//			putchar(ch + 1);
//		ch = getchar();
//	}
//	putchar(ch);
//	return 0;
//}




int main()//更改输入，空格不变
{
	char ch;
	while ((ch = getchar()) != '\n')
	{
		if (ch == SPACE)
			putchar(ch);
		else
			putchar(ch + 1);
	}
	putchar(ch);
	return 0;
}


