#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
//计算年总降水量，年平均降水量和5年中每月的平均降水量
#include <stdio.h>
#define MONTHS 12
#define YEARS 5
int main()
{
	const float rain[YEARS][MONTHS] =
	{
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};
	int year, month;
	float subtot, total;

	printf("YEAR     RAINFALL (inchs)\n");
	for (year = 0, total = 0; year < YEARS; year++)
	{
		for (month = 0, subtot = 0; month < MONTHS; month++)
			subtot += rain[year][month];//各年降雨量
		printf(" %5d     %15.1f\n", 2010 + year, subtot);
		total += subtot;//五年总降雨量
	}
	printf("\nThe yearly average is %.1f inches.\n\n", total / 5);
	printf("MONTHLY AVERAGES:\n\n");
	printf("JAN FEB MAR APR MAY JUN JUL AUG SEP OCT NOV DEC\N");
	
	for (month = 0; month < MONTHS; month++)
	{
		for (year = 0, subtot = 0; year < YEARS; year++)
			subtot += rain[year][month];//每年中每月总降水量
		printf("%4.1f ", subtot / YEARS);
	}
	printf("\n");
	return 0;
}