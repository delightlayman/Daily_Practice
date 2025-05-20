#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

////atexit()示例
//
//void sign_off(void);
//void too_bad(void);
//
//int main()
//{
//	int n;
//	atexit(sign_off);
//	puts("Enter an integer:");
//	if (scanf("%d", &n) != 1)
//	{
//		puts("That's not an integer.");
//		atexit(too_bad);
//		exit(EXIT_FAILURE);
//	}
//	printf("%d is %s.\n", n, (n % 2 == 0) ? "even" : "odd");
//
//	return 0;
//}
//
//void sign_off(void)
//{
//	puts("Thus terminates another magnificent program from SeeSaw Software!");
//	
//}
//
//void too_bad(void)
//{
//	puts("SeeSaw Software extends its heartfelt condolences to you "
//		"upon the failure of your program.");
//
//}




//
////qsort()排序
//
//#define NUM 40
//void fillarray(double ar[], int n);
//void showarray(const double ar[], int n);
//int mycomp(const void* p1, const void* p2);
//
//int main(void)
//{
//	double vals[NUM];
//	fillarray(vals, NUM);
//	puts("Eandom list:");
//	showarray(vals, NUM);
//	qsort(vals,NUM,sizeof(double),mycomp);
//	puts("\nSorted list:");
//	showarray(vals, NUM);
//	
//	return 0;
//
//}
//
//
//void fillarray(double ar[], int n)
//{
//	int index;
//
//	for(index = 0; index < n; index++)
//		ar[index] = (double)rand() /((double)rand() + 0.1);
//}
//
//void showarray(const double ar[], int n)
//{
//	int index;
//	for (index = 0; index < n; index++)
//	{
//		printf("%9.4f", ar[index]);
//		if (index % 6 == 5)//五个一组显示
//			putchar('\n');
//	}
//	if (index % 6 != 0)
//		putchar('\n');
//}
//
////从小到大排序
//int mycomp(const void* p1, const void* p2)
//{
//	const double  *d1 = (const double*)p1;//强制转换
//	const double  *d2 = (const double*)p2;
//	if (*d1 < *d2)
//		return -1;
//	else if (*d1 == *d2)
//		return 0;
//	else
//		return 1;
//}


////求平方根 assert()示例
//#include <math.h>
//#include <assert.h>
//
//int main()
//{
//	double x, y, z;
//	puts("Enter a pair of numbers (0 0 to quit):");
//
//	while (scanf("%lf %lf", &x, &y) == 2 && (x != 0.0 || y != 0.0))
//	{
//		z = x * x - y * y;
//		assert(z >= 0);
//		printf("The square root of %lf is %f\n", z, sqrt(z));
//		puts("Next two numbers :");
//
//	}
//	puts("Bye!");
//
//	return 0;
//}



//memcpy()与memmove()示例
#define SIZE 10
void show_array(const int ar[], int n);

_Static_assert(sizeof(double) == 2 * sizeof(int), "double not twice int size");//需要c1X高标准


int main()
{
	int values[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int target[SIZE];
	double curious[SIZE / 2] = { 2.0,2.0e5,2.0e10,2.0e20,5.0e30 };

	puts("memcpy() used:");
	puts("values (original data):");
	show_array(values, SIZE);
	memcpy(target, values, sizeof(int) * SIZE);
	puts("target (copy of values):");
	show_array(target, SIZE);

	puts("\nUsing memmove() to copy overlapping ranges");
	memmove(values+2,values,5 * sizeof(int));
	puts("values -- elements 0-4 copied to 2-6:");
	show_array(values, SIZE);

	puts("\nUsing memmove() to copy overlapping ranges");
	memmove(target, curious, (SIZE / 2) * sizeof(double));
	puts("target -- 5 doubles into 10 int positions:");
	show_array(target, SIZE/2);
	show_array(target+5, SIZE / 2);

	return 0;
}

void show_array(const int ar[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", ar[i]);
	putchar('\n');
}

