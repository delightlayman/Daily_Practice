#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//#define ADJUST 7.31
//int main()
//{
//	const double SCALE = 0.333;
//	double shoe, foot;
//	shoe = 9.0;
//	foot = SCALE * shoe + ADJUST;
//	printf("Shoe size (men's)\tfoot length\n");
//	printf("%10.1f %15.2f inches\n",shoe,foot);
//
//	return 0;
//
//}






#define ADJUST 7.31
int main()
{
	const double SCALE = 0.333;
	double shoe, foot;	
	printf("Shoe size (men's)\tfoot length\n");
	shoe = 3.0;
	while (shoe < 18.5)  //ÕâÀïÃ»Ã°ºÅ
	{
	foot = SCALE * shoe + ADJUST;
	printf("%10.1f %15.2f inches\n", shoe, foot);
	shoe = shoe + 1.0;
	}
	printf("If the shoe fits,wear it.\n");

	return 0;

}