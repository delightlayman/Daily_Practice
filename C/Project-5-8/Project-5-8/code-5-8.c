#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//#define MONTHS 12
////打印每个月的天数
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

////未初始化的数组---显示原内存上的值---自动存储类别
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



////部分初始化的数组---未初始化部分会被编译器自动初始化为0
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



////打印每个月的天数---省略方括号，使其自动匹配
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
//指定初始化
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



//数组赋值---只能初始化和单项赋值
//#define SIZE 50
//int main()
//{
//	int counter, evens[SIZE];
//
//	for (counter = 0; counter < SIZE; counter++)
//		evens[counter] = 2 * counter;
//	return 0;
//}


//数组下标越界---此编译器不存在书上的问题：越界数组影响其他变量
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