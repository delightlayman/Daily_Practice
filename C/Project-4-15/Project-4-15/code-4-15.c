#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//int main()//�����û������������
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




//int main()//��ʱ�˳�ѭ��
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
//int main()//�������Ƚ�
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






//int main()//C�����ֵ
//{
//	int true_val, false_val;
//	true_val = (10 > 2);//��ϵΪ���ֵ
//	false_val = (10 == 2);//��ϵʽΪ�ٵ�ֵ
//	printf("true=%d,flase=%d\n", true_val, false_val);
//	return 0;
//}




//int main()//��ЩֵΪ��
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





//int main()//����=���µ�����ѭ��
//{
//	long num;
//	long sum = 0L;
//	int status;
//	printf("PLease enter an integer to be sumed\n");
//	printf("(q to quit):");
//	status = scanf("%ld", &num);
//	while ( status=1)//Ϊ���¸�ֵΪ1���൱��while��1��
//	{
//		sum = sum + num;
//		printf("Please enter a next integer (q to quit):");
//		status = scanf("%ld", &num);//scanf����ֵ�ᱻ������һѭ���Զ���ȡ
//	}
//	printf("Those integer sum to %ld.\n", sum);
//	return 0;
//}
//




int main()//ʹ��_Bool����
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









