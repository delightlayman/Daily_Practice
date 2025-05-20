#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
#define PI 3.1415926
int main()
{
	float area, circum, radius;
	printf("What is the radius of your pizza?\n");
	scanf("%f", &radius);
	circum = PI * radius * 2.0;
	area = PI * radius * radius;
	printf("Your basic parameters are as follow:\n");
	printf("circumference=%2.2f,area=%2.2f\n", circum, area);

	return 0;
}