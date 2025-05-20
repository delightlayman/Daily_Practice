#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
////处理数组的函数
//#define SIZE 5
//void show_array(const double ar[], int n);
//void mult_array(double ar[], int n, double mult);
//int main()
//{
//	double dip[SIZE] = { 20.0,17.66,8.2,15.3,22.22 };
//
//	printf("The original dip array:\n");
//	show_array(dip, SIZE);
//	mult_array(dip, SIZE, 2.5);
//	printf("The dip array after calling mult_array():\n");
//	show_array(dip, SIZE);
//
//	return 0;
//}
//
//void show_array(const double ar[], int n)
//{
//	int i;
//
//	for (i = 0; i < n; i++)
//		printf("%8.3f", ar[i]);
//	putchar('\n');
//
//}
//
//
//void mult_array(double ar[], int n, double mult)
//{
//	int i;
//
//	for (i = 0; i < n; i++)
//		ar[i] *= mult;
//}



//
////zippo的相关信息
//int main()
//{
//	int zippo[4][2] = { {2,4},{6,8},{1,3},{5,7} };
//	printf("   zippo = %p,     zippo+1 = %p\n", zippo, zippo + 1);
//	printf("zippo[0] = %p,zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);
//	printf("zippo[0][0] = %d\n", zippo[0][0]);
//	printf("  *zippo[0] = %d\n", *zippo[0]);
//	printf("    **zippo = %d\n", **zippo);
//	printf("    zippo[2][1] = %d\n", zippo[2][1]);
//	printf("*(*(zippo+2)+1) = %d\n", *(*(zippo + 2) + 1));
//
//	return 0;
//}




//通过指针获取zippo信息
int main()
{
	int zippo[4][2] = { {2,4},{6,8},{1,3},{5,7} };
	int(*pz)[2];

	pz = zippo;

	printf("   pz = %p,     pz+1 = %p\n", pz, pz + 1);
	printf("pz[0] = %p,pz[0] + 1 = %p\n", pz[0], pz[0] + 1);
	printf("*pz = %p,    *pz + 1 = %p\n", *pz, *pz + 1);
	printf("pz[0][0] = %d\n", pz[0][0]);
	printf("  *pz[0] = %d\n", *pz[0]);
	printf("    **pz = %d\n", **pz);
	printf("    pz[2][1] = %d\n", pz[2][1]);
	printf("*(*(pz+2)+1) = %d\n", *(*(pz + 2) + 1));

	return 0;
}
