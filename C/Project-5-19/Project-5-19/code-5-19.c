#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
////数组元素之和
//#include <stdio.h>
//#define SIZE 10
//int sum(int * start, int * end);
//int main()
//{
//	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };
//	long answer;
//
//	answer = sump(marbles, marbles+SIZE);
//
//	printf("The total number of marbles is %ld.\n", answer);
//	printf("The size of marbles is %zd bytes.\n",
//		sizeof marbles);
//
//	return 0;
//}
//
//
////int sum(int* start, int* end)
////{
////	int i, total;
////	for (i = 0, total = 0; i < SIZE; i++)
////		total += *(start+i);
////	printf("The size of ar is %zd bytes.\n", sizeof start);
////
////	return total;
////}
//
//
////使用指针算法
//int sump(int* start, int* end)
//{
//	int total = 0;
//
//	while (start < end)
//	{
//		total += *start;
//		start++;
//	}
//	return total;
//}


////指针运算优先级
//#include <stdio.h>
//#define SIZE 10
//int data[2] = { 100,200 };
//int moredata[2] = { 300,400 };
//int main()
//{
//	int* p1, * p2, * p3;
//
//	p1 = p2 = data;
//	p3 = moredata;
//
//	printf("  *p1 = %d,  *p2 = %d,  *p3 = %d\n", *p1, *p2, *p3);
//	printf("  *p1++ = %d,*++p2 = %d,(*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
//	printf("  *p1 = %d,  *p2=%d,    *p3=%d\n", *p1, *p2, *p3);
//	return 0;
//}



////printf运算循序
//#include <stdio.h>
//int main()
//{
//	int p1 = 1;
//	printf("  %d  ,  %d  ,  %d\n", p1++, ++p1, p1++);
//	p1 =     1;  
//  	printf("  %d  ,  %d  ,  %d\n", p1+1, p1+2, p1+3);
//	p1 =     1;  
//  	printf("  %d  ,  %d  ,  %d\n", p1 + 1, p1++, p1 + 3);
//	p1 =     1;  
//  	printf("  %d  ,  %d  ,  %d\n", p1 + 1, p1*2, p1 + 3);
//	p1 =     1;  
//  	printf("  %d  ,  %d  ,  %d\n", p1 + 1, p1, p1 + 3);
//	p1 =     1;  
//  	printf("  %d  ,  %d  ,  %d\n", p1 + 1, ++p1, p1 + 3);
//	p1 =     1;  
//  	printf("  %d  ,  %d  ,  %d\n", p1 + 1, p1=2, p1 + 3);
//	//对于含++表f输出结论：1.++改变变量本身（类似=赋值运算），且遵循先增后用或先用后增 2.打印左到右，运算先运算本身，再右到左（应该？）。   ||其他情况一般各变量表达式互不影响，特殊情况特殊分析
//	return 0;
//}





//指针操作
#include <stdio.h>
int main()
{
	int urn[5] = { 100,200,300,400,500 };
	int* ptr1, * ptr2, * ptr3;

	ptr1 = urn;
	ptr2 = &urn[2];

	printf("pointer value, dereferenced pointer, pointer adress:\n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

	//指针加法
	ptr3 = ptr1 + 4;
	printf("\nadding an int to a pointer:\n");
	printf("ptr1 + 4 = %p,*(ptr1+4) = %d\n", ptr1 + 4, *(ptr1 + 4));//ptr3
	
	ptr1++;
	printf("\nvalues after ptr1++:\n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

	ptr2--;
	printf("\nvalue after --ptr2:\n");
	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);

	--ptr1;//恢复原值
	ptr2++;//恢复原值
	printf("\nPointers reset to original values:\n");
	printf("ptr1 = %p,ptr2 = %p\n", ptr1, ptr2);

	//一个指针减去另一个指针
	printf("\nSubtracting one pointer from another:\n");
	printf("ptr2 = %p,ptr1 = %p,ptr2-ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);

	//一个指针减去一个整数
	printf("\nSubtracting an int from a pointer:\n");
	printf("ptr3 = %p,ptr3 - 2 = %p\n", ptr3, ptr3-2);



	return 0;
}
