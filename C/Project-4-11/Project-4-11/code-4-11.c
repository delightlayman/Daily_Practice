#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//int main()//���ֳ������---����ǰ20������---1
//{
//	int count, sum;
//	count = 0;
//	sum = 0;
//	while(count++<20)
//	{
//		sum = sum + count;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}



//int main()//���ֳ������---����ǰ20������---0
//{
//	int count, sum;
//	count = 0;
//	sum = 0;
//	while (count++ < 20)
//		sum = sum + count;
//	printf("sum=%d\n", sum);
//	return 0;
//}



//int main()//����ת��
//{
//	char ch;
//	int i;
//	float fl;
//
//	fl = i = ch = 'C';
//	printf("ch=%c,i=%d,fl=%2.2f\n", ch, i, fl);
//	ch = ch + 1;
//	i = fl + 2 * ch;
//	fl = 2.0 * ch + i;
//	printf("ch=%c,i=%d,fl=%2.2f\n", ch, i, fl);
//	ch = 1107;
//	printf("Now ch=%c\n", ch);
//	ch = 80.89;
//	printf("Now ch=%c\n", ch);
//	return 0;
//}


void pound(int n);//ANSI����ԭ������
int main(void)//pound����
{
	int times = 5;
	char ch= '!';//ANSII��33
	float f = 6.0;
	pound(times);
	pound(ch);
	pound(f);
	return 0;
}

void pound(int n)
{
	while (n-- > 0)
		printf("#");
	printf("\n");
}