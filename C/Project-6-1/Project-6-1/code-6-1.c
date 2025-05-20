#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
int units = 0;
void critic();
int 
main()
{
	extern int units;

	printf("How many pounds to a forkin of butter?\n");
	scanf("%d", &units);
	while (units != 56)
		critic();
	printf("You must have looked it up!\n");

	return 0;
}


void critic()
{
	printf("No luck,my friends.Try again.\n");
	scanf("%d", &units);
}