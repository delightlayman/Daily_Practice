#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
////���еı���
//int main()
//{
//	int x = 30;//����x
//	printf("x in outer block: %d at %p\n", x, &x);
//	{
//		int x = 77; //�µ��ڲ��x, ��������x
//		printf("x in inner block: %d at %p\n", x, &x);	
//	}
//	printf("x in outer block: %d at %p\n", x, &x);
//	while (x++<33)//����x
//	{
//		int x = 100;//�µ��ڲ��x,��������x      ÿһ��ѭ�����´���
//		x++;//�ڲ��x����
//		printf("x in while loop: %d at %p\n", x, &x);
//	}
//	printf("x in outer block: %d at %p\n", x, &x);
//
//	return 0;
//	}




////c99������
//int main()
//{
//	int n = 8;
//
//	printf("   Initially,n = %d at %p\n", n, &n);
//	for (int n = 1; n < 3; n++)
//		printf("    loop 1, n = %d at %p\n", n, &n);
//	printf("After loop 1, n = %d at %p\n", n, &n);
//
//	for (int n = 1; n < 3; n++)
//	{
//		printf(" loop 2 index n = %d at %p\n", n, &n);
//		int n = 6;
//		printf(" loop 2: n = %d at %p\n", n, &n);
//		n++;
//
//	}
//	printf("After loop 2, n = %d at %p\n", n, &n);
//	return 0;
//}




//��������ľ�̬����
void trystat(void);
int main()
{
	int count;

	for (count = 1; count <= 3; count++) 
	{
		printf("Here comes iteration %d:\n", count);
		trystat();
	}

	return 0;
}

void trystat()
{
	int fade = 1;
	static int stay = 1;

	printf("fade = %d and stry = %d\n", fade++, stay++);
}