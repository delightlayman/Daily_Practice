#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//#define MONTHS 12
////��ӡÿ���µ�����
//int main()
//{
//	int days[MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int index;
//
//	for (index = 0; index < 12; index++)
//		printf("Month %2d has %2d days.\n", index + 1, days[index]);
//
//	return 0;
//}

////δ��ʼ��������---��ʾԭ�ڴ��ϵ�ֵ---�Զ��洢���
//#define SIZE 4
//int main()
//{
//	int no_data[SIZE];
//	int i;
//
//	printf("%2s%14s\n", "i", "no_data[i]");
//	for (i=0;i<SIZE;i++)
//		printf("%2d%14d\n", i, no_data[i]);
//
//	return 0;
//}



////���ֳ�ʼ��������---δ��ʼ�����ֻᱻ�������Զ���ʼ��Ϊ0
//#define SIZE 4
//int main()
//{
//	int no_data[SIZE] = {1492,1066};
//	int i;
//
//	printf("%2s%14s\n", "i", "no_data[i]");
//	for (i=0;i<SIZE;i++)
//		printf("%2d%14d\n", i, no_data[i]);
//
//	return 0;
//}



////��ӡÿ���µ�����---ʡ�Է����ţ�ʹ���Զ�ƥ��
//int main()
//{
//	int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int index;
//
//	for (index = 0; index < sizeof(days)/sizeof(days[0]); index++)
//		printf("Month %2d has %2d days.\n", index + 1, days[index]);
//
//	return 0;
//}


//#define MONTHS 12
//ָ����ʼ��
//int main()
//{
//	int days[MONTHS] = { 31,28,[4]=31,30,31,[1]=29};
//	int i;
//
//	for (i = 0; i < MONTHS; i++)
//		printf("%2d %d\n", i + 1, days[i]);
//
//	return 0;
//}



//���鸳ֵ---ֻ�ܳ�ʼ���͵��ֵ
//#define SIZE 50
//int main()
//{
//	int counter, evens[SIZE];
//
//	for (counter = 0; counter < SIZE; counter++)
//		evens[counter] = 2 * counter;
//	return 0;
//}


//�����±�Խ��---�˱��������������ϵ����⣺Խ������Ӱ����������
#define SIZE 4
int main()
{
	int value1 = 44;
	int arr[SIZE];
	int value2 = 88;
	int i;

	printf("value1=%d,value2=%d\n", value1, value2);
	for (i = -1; i <= SIZE; i++)
		arr[i] = 2 * i + 1;

	for (i = -1; i <= 7; i++)
		printf("%2d %d\n",i,arr[i]);
	printf("value1=%d,value2=%d\n", value1, value2);
	printf("addrass of arr[-1]:%p\n", &arr[-1]);
	printf("addrass of arr[4]:%p\n", &arr[4]);
	printf("addrass of value1:%p\n", &value1);
	printf("addrass of value2:%p\n", &value2);

	return 0;
}