#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//void mikado(int);
//int main()
//{
//	int pooh = 2, bah = 5;
//
//	printf("In main(),pooh = %d and &pooh = %p\n", pooh, &pooh);
//	printf("In main(),bah = %d and &bah = %p\n", bah, &bah);
//	mikado(pooh);
//	return 0;
//}
//
//
//void mikado(int bah) 
//{
//	int pooh = 10;
//	printf("In mikado(),pooh = %d and &pooh = %p\n", pooh, &pooh);
//	printf("In mikado(),bah = %d and &bah = %p\n", bah, &bah);
//}


////��������---���ǽ���ʧ��
//void interchange(int u,int v);
//int main()
//{
//	int x = 5, y = 10;
//
//	printf("Originally x = %d and y = %d.\n", x, y);
//	interchange(x, y);
//	printf("Now x = %d and y %d.\n", x, y);
//	return 0;
//}
//
//
//void interchange(int u,int v)
//{
//	int temp;
//
//	temp = u;
//	u = v;
//	v = temp;
//}



////��������---���ǽ���ʧ��---���---����������������������Ӱ�죬���������Ĳ���δ������������
//void interchange(int u, int v);
//int main()
//{
//	int x = 5, y = 10;
//
//	printf("Originally x = %d and y = %d.\n", x, y);
//	interchange(x, y);
//	printf("Now x = %d and y %d.\n", x, y);
//	return 0;
//}
//
//
//void interchange(int u, int v)
//{
//	int temp;
//
//	printf("Originally u = %d and v = %d.\n", u, v);
//	temp = u;
//	u = v;
//	v = temp;
//	printf("Now u = %d and v %d.\n", u, v);
//}



//ʹ��ָ������������������
void interchange(int * u, int * v);
int main()
{
	int x = 5, y = 10;

	printf("Originally x = %d and y = %d.\n", x, y);
	interchange(&x, &y);//�ѵ�ַ��������
	printf("Now x = %d and y %d.\n", x, y);
	return 0;
}


void interchange(int * u, int * v)
{
	int temp;

	temp = *u;//temp���uָ���ֵ
	*u = *v;
	*v = temp;
}