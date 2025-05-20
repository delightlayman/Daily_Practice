#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>

////处理二维数组的函数
//#define ROWS 3
//#define COLS 4
//void sum_rows(int ar[][COLS], int rows);
//void sum_cols(int [][COLS], int);//省略形参   ||定义不可省略
//int sum2d(int(*ar)[COLS], int rows);
//int main()
//{
//
//	int junk[ROWS][COLS] = 
//	{
//	{2,4,6,8},
//	{3,5,7,9},
//	{12,10,8,6}
//	};
//
//	sum_rows(junk, ROWS);
//	sum_cols(junk, ROWS);
//	printf("Sum of all elements = %d\n", sum2d(junk, ROWS));
//
//
//return 0;
//}
//
//
//
//void sum_rows(int ar[][COLS], int rows)
//{
//	int r, c, tot;
//
//	for (r = 0; r < rows; r++)
//	{
//		tot = 0;
//		for (c = 0; c < COLS; c++)
//			tot += ar[r][c];
//		printf("row %d: sum %d\n", r, tot);
//
//	}
//}
//
//
//void sum_cols(int ar[][COLS], int rows) 
//{
//	int r, c, tot;
//
//	for (c = 0;c < COLS; c++)
//	{
//		tot = 0;
//		for (r = 0; r < rows; r++)
//			tot += ar[r][c];//当时错误：行列反了
//		printf("col %d: sum %d\n", c, tot);
//
//	}
//}
//
//
//int sum2d(int(*ar)[COLS], int rows) 
//{
//	int total=0;
//
//	int r, c;
//	for (r = 0; r < rows; r++)
//		for (c = 0; c < COLS; c++)
//			total += ar[r][c];
//
//	return total;
//}



////使用变长数组的函数
//#define ROWS 3
//#define COLS 4
//int sum2d(int rows,int cols,int ar[rows][cols]);
//int main()
//{
//	int i, j;
//	int rs = 3;
//	int cs = 10;
//
//	int junk[ROWS][COLS] = 
//	{
//	{2,4,6,8},
//	{3,5,7,9},
//	{12,10,8,6}
//	};
//	int morejunk[ROWS - 1][COLS + 2] =
//	{
//		{20,30,40,50,60,70},
//		{5,6,7,8,9,10}
//	};
//
//	int varr[rs][cs];
//
//	for (i = 0; i < rs; i++)
//		for (j = 0; j < cs; j++)
//			varr[i][j] = i * j + j;
//	printf("3x4 array\n");
//	printf("Sum of all elements = %d\n", sum2d(ROWS, COLS, junk));
//	printf("2x6 array\n");
//	printf("Sum of all elements = %d\n", sum2d(ROWS-1,COLS+2,morejunk));
//	printf("3x10 array\n");
//	printf("Sum of all elements = %d\n", sum2d(rs, cs, varr));
//
//return 0;
//}
//
//
//
//int sum2d(int rows, int cols, int ar[rows][cols])
//{
//	int r, c;
//	int tot = 0;
//
//	for (r = 0; r < rows; r++)
//		for (c = 0; c < cols; c++)
//			tot += ar[r][c];
//	
//	return tot;
//	
//}




//复合字面常量
#define COLS 4
int sum2d(const int ar[][COLS],int rows);
int sum(const int ar[], int n);
int main()
{
	int tot1,tot2,tot3;
	int* p1;
	int (*p2)[COLS];

	p1 = (int[2]){ 10,20 };
	p2 = (int[2][COLS]){ {1,2,3,-9}, {4,5,6,-8} };

	tot1 = sum(p1, 2);
	tot2 = sum2d(p2, 2);
	tot3 = sum((int[]) { 4, 4, 4, 5, 5, 5 }, 6);
	printf("tot1 = %d\n", tot1);
	printf("tot2 = %d\n", tot2);
	printf("tot3 = %d\n", tot3);
	
	return 0;
}


int sum(const int ar[], int n)
{
	int i;
	int tot = 0;

	for (i = 0; i < n; i++)
		tot += ar[i];


	return tot;
}


int sum2d(const int ar[][COLS], int rows)
{
	int r, c;
	int tot = 0;

	for (r = 0; r < rows; r++)
		for (c = 0; c < COLS; c++)
			tot += ar[r][c];

	return tot;

}

