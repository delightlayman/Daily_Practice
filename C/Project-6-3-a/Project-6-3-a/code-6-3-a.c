#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
////manydice.c
//#include "code-6-3.h";//为roll_count，int roll_n_dice() 提供原型
//
//#include <stdio.h>
//#include <stdlib.h>//为srand()提供原型
//#include <time.h>//为time()提供原型
//
//int main() 
//{
//	int dice, roll;
//	int sides;
//	int status;
//
//	srand((unsigned int)time(0));//随机种子
// 	printf("Enter the number of sides per die,0 to stop.\n");
//
//	while (scanf("%d", &sides) == 1 && sides > 0)
//	{
//		printf("How many dice?\n");
//		if ((status = scanf("%d", &dice)) != 1)//处理错误输入
//		{
//			if (status == EOF)
//				break;
//			else
//			{
//				printf("You should have entered an integer.");
//				printf(" Let's begin again.\n");
//				while (getchar() != '\n')
//					continue;
//				printf("How many sides? Enter 0 to stop.\n");
//				continue;
//			}
//		}
//			roll = roll_n_dice(dice, sides);
//			printf("You have rolled a %d using %d %d-sides dice.\n", roll, dice, sides);
//			printf("How many sides? Enter 0 to stop.\n");
//
//	}
//	printf("The rollen() function was called %d times.\n",roll_count);
//	printf("GOOD FORTUNE TO YOU!\n");
//
//
//	return 0;
//}


////动态分配数组
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	double* p;
//	int max;
//	int number;
//
//	int i = 0;
//
//	puts("What is the maximum number of type double entries?");
//	if (scanf("%d", &max) != 1)
//	{
//		puts("Number not correctly entered -- bye.");
//		exit(EXIT_FAILURE);
//	}
//	//p现在是指向max个double值的数组
//	p = (double*)malloc(max * sizeof(double));
//	if (p == NULL)
//	{
//		puts("Memory allocation failed.Goodbye.");
//		exit(EXIT_FAILURE);
//	}
//
//	puts("Enter the value (q to quit):");
//	while (i < max && scanf("%lf", &p[i]) == 1)
//		++i;
//	
//	printf("Here are your %d entries:\n", number = i);
//	for (i = 0; i < number; i++)
//	{
//		printf("%7.2f", p[i]);
//		if (i % 7 == 6)
//			putchar('\n');
//	}
//	if (i % 7 != 0)
//		putchar('\n');
//	puts("Done!");
//	free(p);
//
//
//	return 0;
//}




////数据存储位置
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int static_store = 30;
//const char* pcg = "String Literal";
//
//int main()
//{
//	int auto_store = 40;
//	char auto_string[] = "Auto char Arraay";
//	int* pi;
//	char* pcl;
//
//	pi = (int*)malloc(sizeof(int));
//	*pi = 35;
//	pcl = (char*)malloc(strlen("Dynamic String")+1);
//	strcpy(pcl, "Dynamic String");
//
//	printf("static_store: %d at %p\n", static_store, &static_store);
//	printf("  auto_store: %d at %p\n", auto_store, &auto_store);
//	printf("         *pi: %d at %p\n", *pi, pi);
//	printf("%s at %p\n", pcg,pcg);
//	printf("%s at %p\n", auto_string,auto_string); 
//	printf("%s at %p\n", pcl,pcl); 
//	printf("%s at %p\n", "Quoted string", "Quoted string");
//
//	free(pi);
//	free(pcl);
//
//	return 0;
//}

