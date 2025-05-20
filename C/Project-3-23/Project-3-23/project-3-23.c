#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
#include <string.h>
//#define DENSITY 62.4
//int main()
//{
//	float weight, volume;
//	int size, letters;
//	char name[40];
//	printf("what's your first name?\n");
//	scanf("%s", &name);
//	printf("%s,what's your weight in pounds?\n", name);
//	scanf("%f", &weight);
//	size = sizeof(name);
//	letters = strlen(name);
//	volume = weight / DENSITY;
//	printf("well,%s,your volume is %2.2f cubic feet.\n", name, volume);
//	printf("also,your name has %d letters,\n", letters);
//	printf("and,we have %d bytes to store it.\n", size);
//	return 0;
//}
#define PRAISE "You are a extraordinary being."
//int main()
//{
//	char name[40];
//	printf("What's your name?\n");
//	scanf("%s", name);
//	printf("Hello,%s.%s\n", name, PRAISE);
//
//	return 0;
//}

int main()
{
	char name[40];
	printf("What's your name?\n");
	scanf("%s", name);
	printf("Hello,%s.%s\n", name, PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof name);
	printf("The phrase of praise has %zd letters", strlen(PRAISE));
	printf(" and occupies %zd memory cells.\n", sizeof PRAISE);

	return 0;
}