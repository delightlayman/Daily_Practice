#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
#include <limits.h>
#include <float.h>
//int main()
//{
//	printf("Some mumber limits for this system:\n");
//	printf("Biggest int:%d\n",INT_MAX);
//	printf("smallest long long :%lld\n",LLONG_MIN);
//	printf("One byte = %d bits on this system.\n", CHAR_BIT);
//	printf("Largest double:%e\n", DBL_MAX);
//	printf("Smallest normal float:%e\n", FLT_MIN);
//	printf("Float precision:%d digits\n", FLT_DIG);
//	printf("Float epsilon = %e\n", FLT_EPSILON);
//	return 0;
//}
int main()
{
	printf("Some mumber limits for this system:\n");
	printf("Biggest int:%d\n", INT_MIN);
	printf("smallest long long :%d\n", LLONG_MIN);//此处转换说明与数据类型不对应
	printf("%zd", sizeof(int));
	return 0;
}