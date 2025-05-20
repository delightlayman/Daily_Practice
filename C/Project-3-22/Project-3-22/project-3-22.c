#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	float salary;
//	printf("\aenter your desire monthly salary:$__________\b\b\b\b\b\b\b\b\b");
//	scanf("%f", &salary);
//	printf("\n\t$%.2f a month is %.2f a year.", salary,
//		salary * 12.0);
//	printf("\rGee!\n");
//	return 0;
//}
int main()
{
	float salary;
	printf("\aenter your desire monthly salary:$__________\b\b\b\b\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is %.2f a year.", salary,
		salary * 12.0);
	printf("\rGee!\n");
	return 0;
}


