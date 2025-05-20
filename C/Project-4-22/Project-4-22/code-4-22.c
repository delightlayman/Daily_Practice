#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//#define COVERAGE 350//可刷面积 罐/平方英尺
//int main()
//{
//	int sq_feet;
//	int cans;
//	printf("Enter number of square feet to be painted:\n");
//	while (scanf("%d",&sq_feet)==1);
//	{
//		cans = sq_feet / COVERAGE;
//		cans += (sq_feet / COVERAGE == 0) ? 0 : 1;
//		printf("You need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans");
//		printf("Enter next value (q to quit):\n");
//	}
//	return 0;
//}



//
//int main()//continue跳过循环
//{
//	const float MIN = 0.0f;
//	const float MAX = 100.0f;
//
//	float score;
//	float total = 0.0f;
//	int n = 0;
//	float min = MIN;
//	float max = MAX;
//
//	printf("Enter the first score (q to quit):");
//	while (scanf("%f",&score)==1)
//	{
//		if (score<MIN || score>MAX)//筛选无效分数
//		{
//			printf("%0.1f is an invalid value.Try again:", score);
//			continue;//跳转至while循环测试条件处
//		}
//		printf("Accepting %0.1f:\n", score);
//		min = (score < min) ? score : min;
//		max = (score > max) ? score : max;
//		total += score;
//		n++;
//		printf("Enter next score (q to quit):");
//	}
//	if (n > 0)
//	{
//		printf("Average of %d scores is %0.1f.\n", n, total / n);
//		printf("Low=%0.1f,high=%0.1f\n", min, max);
//	}
//	else
//		printf("No valid scores were entered.\n");
//	return 0;
//}





int main()//矩形面积---使用break
{
	float length, width;

	printf("Enter the length of the rectangle;\n");
	while (scanf("%f",&length)==1)
	{
		printf("Length=%0.2f:\n", length);
		printf("Enter its width:\n");
		if (scanf("%f", &width) != 1)
			break;
		printf("Width=%0.2f:\n", width);
		printf("Area=%0.2f", length * width);
		printf("Enter the length of the rectangle;\n");
	}
	printf("Done.\n");
	return 0;
} 
