#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
////����Ԫ��֮��
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
////ʹ��ָ���㷨
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


////ָ���������ȼ�
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



////printf����ѭ��
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
//	//���ں�++��f������ۣ�1.++�ı������������=��ֵ���㣩������ѭ�������û����ú��� 2.��ӡ���ң����������㱾�����ҵ���Ӧ�ã�����   ||�������һ����������ʽ����Ӱ�죬��������������
//	return 0;
//}





//ָ�����
#include <stdio.h>
int main()
{
	int urn[5] = { 100,200,300,400,500 };
	int* ptr1, * ptr2, * ptr3;

	ptr1 = urn;
	ptr2 = &urn[2];

	printf("pointer value, dereferenced pointer, pointer adress:\n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

	//ָ��ӷ�
	ptr3 = ptr1 + 4;
	printf("\nadding an int to a pointer:\n");
	printf("ptr1 + 4 = %p,*(ptr1+4) = %d\n", ptr1 + 4, *(ptr1 + 4));//ptr3
	
	ptr1++;
	printf("\nvalues after ptr1++:\n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

	ptr2--;
	printf("\nvalue after --ptr2:\n");
	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);

	--ptr1;//�ָ�ԭֵ
	ptr2++;//�ָ�ԭֵ
	printf("\nPointers reset to original values:\n");
	printf("ptr1 = %p,ptr2 = %p\n", ptr1, ptr2);

	//һ��ָ���ȥ��һ��ָ��
	printf("\nSubtracting one pointer from another:\n");
	printf("ptr2 = %p,ptr1 = %p,ptr2-ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);

	//һ��ָ���ȥһ������
	printf("\nSubtracting an int from a pointer:\n");
	printf("ptr3 = %p,ptr3 - 2 = %p\n", ptr3, ptr3-2);



	return 0;
}
