#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//int main()//根据用户键入数字求和
//{
//	long num;
//	long sum = 0L;
//	int status;
//	printf("PLease enter an integer to be sumed\n");
//	printf("(q to quit):");
//	status = scanf("%ld", &num);
//	while ( status==1)
//	{
//		sum = sum + num;
//		printf("Please enter a next integer (q to quit):");
//		status = scanf("%ld", &num);
//	}
//	printf("Those integer sum to %ld.\n", sum);
//	return 0;
//}




//int main()//何时退出循环
//{
//	int n = 5;
//	while (n<7)
//	{
//		printf("n=%d\n", n);
//		n++;
//		printf("Now n=%d\n", n);
//
//	}
//	printf("The loop has finished.\n");
//	return 0;
//}



#include <math.h>
//int main()//浮点数比较
//{
//	const double ANSWER = 3.14159;
//	double response;
//	printf("What is the value of pi?\n");
//	scanf("%lf", &response);
//	while (fabs(response-ANSWER)>0.0001)
//	{
//		printf("Try again!\n");
//		scanf("%lf", &response);
//	}
//	printf("Close enough!\n");
//	return 0;
//}






//int main()//C的真假值
//{
//	int true_val, false_val;
//	true_val = (10 > 2);//关系为真的值
//	false_val = (10 == 2);//关系式为假的值
//	printf("true=%d,flase=%d\n", true_val, false_val);
//	return 0;
//}




//int main()//哪些值为真
//{
//	int n = 3;
//	while (n)
//		printf("%d is true.\n",n--);
//	printf("%d is false.\n");
//	n = -3;
//
//	while (n)
//		printf("%d is true.\n", n++);
//	printf("%d is false.\n");
//
//	return 0;
//
// }





//int main()//误用=导致的无限循环
//{
//	long num;
//	long sum = 0L;
//	int status;
//	printf("PLease enter an integer to be sumed\n");
//	printf("(q to quit):");
//	status = scanf("%ld", &num);
//	while ( status=1)//为重新赋值为1，相当于while（1）
//	{
//		sum = sum + num;
//		printf("Please enter a next integer (q to quit):");
//		status = scanf("%ld", &num);//scanf错误值会被留在下一循环自动读取
//	}
//	printf("Those integer sum to %ld.\n", sum);
//	return 0;
//}
//




int main()//使用_Bool变量
{
	long num;
	long sum = 0L;
	_Bool input_is_good;
	printf("PLease enter an integer to be sumed\n");
	printf("(q to quit):");
	input_is_good = (scanf("%ld", &num)==1);
	while (input_is_good)
	{
		sum = sum + num;
		printf("Please enter a next integer (q to quit):");
		input_is_good = (scanf("%ld", &num) == 1);
	}
	printf("Those integer sum to %ld.\n", sum);
	return 0;
}









