#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//int main()//������ǰ��׺---����
//{
//	int ultra = 0, super = 0;
//	while (super < 5)
//	{
//	
//		super++;
//		++ultra;
//		printf("super=%d,ultra=%d\n", super, ultra);
//	}
//	return 0;
//}




//int main()//������ǰ��׺---��ͬ:����ʱ��
//{
//	int a = 1, b = 1;
//	int a_post, pre_b;
//	a_post = a++;
//	pre_b = ++b;
//	printf("a    a_post     b    pre_b\n");
//	printf("%d %9d %5d %8d\n", a, a_post, b, pre_b);
//	return 0;
//}
//



#define MAX 100
int main()//�ݼ���ǰ��׺
{
	int count = MAX + 1;
	while (--count>0)
	{
		printf("%d bottles of spring water on the wall,\
%d bottles of spring water!\n", count, count);
		printf("Take one down and pass it around,\n");
		printf("%d bottles of spring water!\n\n", count-1);
	}
	return 0;
}
