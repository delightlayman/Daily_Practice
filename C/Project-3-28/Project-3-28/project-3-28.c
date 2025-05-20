#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//#define PI 3.1415926
//int main()
//{
//	int number = 7;
//	float pies = 12.75;
//	int cost = 7800;
//	printf("The %d contestant ate %f berry pies.\n", number, pies);
//	printf("The value of pi is %f.\n", PI);
//	printf("Farewell! Thou art too bear for my possession,\n ");
//	printf("%c%d", '$',2*cost);
//
//	return 0;
//}

//#define PAGES 959
//int main()
//{
//	printf("*%d*\n", PAGES);
//	printf("*%2d*\n", PAGES);
//	printf("*%10d*\n", PAGES); 
//	printf("*%-10d*\n", PAGES);
//	return 0;
//}

//int main()
//{
//	const double RENT = 3852.99;
//	printf("*%f*\a\n", RENT);
//	printf("*%e*\n", RENT); 
//	printf("*%4.2f*\n", RENT);
//	printf("*%3.1f*\n",RENT);
//	printf("*%10.3f*\n", RENT);
//	printf("*%10.3e*\n", RENT);
//	printf("*%+4.2f*\n", RENT);
//	printf("*%010.2f*\n", RENT);
//	return 0;
//}
//int main()
//{
//	printf("%x %X %#X\n", 31, 31, 31);
//	printf("**%d**% d**% d**\n", 42, 42, -42);
//	printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6, 6);
//	return 0;
//}

#define BLURE "Authentic imitation"
int main()
{
	printf("[%2s]\n",BLURE);
	printf("[%24s]\n", BLURE);
	printf("[%24.5s]\n", BLURE);
	printf("[%-24.5s]\n", BLURE);


	return 0;
}

