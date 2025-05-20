#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
#include <stdlib.h>

extern void srand1(unsigned int seed);
extern int rand1(void);

int main()
{
	int count;
	unsigned seed;

	printf("Enter your choice for seed.\n");
	while (scanf("%d", &seed) == 1)
	{
		srand1(seed);
		for (count = 0; count < 5; count++)
			printf("%d\n", rand1());
		printf("Enter your choice for seed.\n");
	}

	printf("Done!");
	return 0;
}
