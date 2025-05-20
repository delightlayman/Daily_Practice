#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
//#include <stdio.h>
//int main()
//{
//	char ch;
//	printf("Please enter a character.\n");
//	scanf("%c", &ch);
//	printf("The code for %c is %d.\n", ch, ch);
//	return 0;
//}
//#include <stdio.h>
//#include <inttypes.h>
//int main()
//{
//	int32_t me32=45933945;
//	printf("First,assume int32_t is int:");
//	printf("me32=%d\n", me32);
//	printf("Let's not make any assumptions.\n");
//	printf("Instead,use a \"macro\",from inttypes.h:");
//	printf("me32 = %" PRId32 "\n", me32);
//	
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	float aboat = 32000.0;
//	double abet = 2.14e9;
//	long double dip = 5.32e-5;
//	printf("%f can be written %e\n", aboat, aboat);
//	printf("And it's %a in hexadecimal,powerscof 2 notation\n", aboat);
//	printf("%f can be written %e\n", abet, abet);
//	printf("%Lf can be written %Le\n", dip, dip);
//
//
//
//
//	return 0;
//}
#include <stdio.h>
//int main()
//{
//	float a, b;
//	b = 2.0e20 + 1.0;
//	a = b - 2.0e20;
//	printf("%f\n", a);
//
//
//
//	return 0;
//}

//int main()
//{
//	printf("Type int has a size of %zd bytes.\n", sizeof(int));
//	printf("Type char has a size of %zd bytes.\n", sizeof(char));
//	printf("Type long has a size of %zd bytes.\n", sizeof(long));
//	printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
//	printf("Type double has a size of %zd bytes.\n", sizeof(double));
//	printf("Type long double has a size of %zd bytes.\n", sizeof(long double));
//
//	return 0;
//}
//int main()
//{
//	int n = 4;
//	int m = 5;
//	float f = 7.0f;
//	float g = 8.0f;
//	printf("%d\n", n, m);
//	printf("%d %d %d\n", n);
//	printf("%d %d\n", f,g);
//	return 0;
//}
//int main()
//{
//	float salary;
//	printf("\aenter your desire monthly salary:");
//	printf("$__________\b\b\b\b\b\b\b\b\b");
//	scanf("%f", &salary);
//	printf("\n\t$%.2f a month is %.2f a year.", salary,
//		salary * 12.0);
//	printf("\rGee!\n");
//	return 0;
//}
//
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

