#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//int main()//运算符优先级测试
//{
//	int top, score;
//	top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
//	printf("top=%d,score=%d\n", top, score);
//	return 0;
//}



//int main()//sizeof运算
//{
//	int n = 0;
//	size_t intsize;
//	intsize = sizeof(int);
//	printf("n=%d,n has %zd bytes;all ints have %zd bytes.\n",
//		n, sizeof n, intsize);
//	return 0;
//}




#define SEC_PER_MIN 60
int main()//秒转换为分和秒
{
	int sec, min, left;
	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the number of seconds (<=0 to quit):\n");
	scanf("%d", &sec);
	while (sec > 0)
	{
		min = sec / SEC_PER_MIN;
		left = sec % SEC_PER_MIN;
		printf("%d seconds is %d minutes,%d seconds.\n", sec, min, left);
		printf("Enter next value (<=0 to quit):\n");
		scanf("%d", &sec);
	}
	printf("Done!\n");

	return 0;
}