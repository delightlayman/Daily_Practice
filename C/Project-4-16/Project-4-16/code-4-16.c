#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//int main()//����ѭ��
//{
//	const int NUMBER = 22;
//	int count=1;
//	while (count<=NUMBER)
//	{
//		printf("Be my valentine!	");
//		printf("���� %d\n", count);
//		count++;
//	}
//	return 0;
//}





//int main()//����ѭ��
//{
//	const int NUMBER = 22;
//	int count;
//	for (count = 1; count <= NUMBER; count++)//ѭ������ʱ�ŵ���
//		printf("Be my valentine!		����  %2d\n",count);
//	return 0;
//}




//int main()//������
//{
//	const int NUMBER = 6;
//	int count;
//	printf("n    n cubed\n");
//	for (count = 1; count <= NUMBER; count++)
//		printf("%-5d   %-5d\n", count,count*count*count);
//	return 0;
//}




//int main()//����ʱ���
//{
//	int secs;
//	for (secs = 5; secs > 0; secs--)
//		printf("%d   seconds\n",secs);
//	printf("We have ignition!\n");
//	return 0;
//}




//int main()//��һ���ʽ��printf
//{
//	int num=0;
//	for (printf("Keep entering numbers!\n"); num != 6;)
//		scanf("%d", &num);
//	printf("That's the one I want!\n ");
//	return 0;
//} 





//int main()//���������
//{
//	const int FIRST_OZ = 46;
//	const int NEST_OZ = 20;
//	int	ounces, cost;
//	printf("ounces  cost\n");
//	for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEST_OZ)
//		printf("%5d   %4.2f\n", ounces, cost / 100.0);
//	return 0;
//}




//int main()//�����еĺ�---�Լ�����
//{
//	int num,limit;//����
//	float power_2 = 1.0;//��
//	double time =0.0;//��ʱ��
//
//	printf("Enter your number you want: \n");
//	scanf("%d", &limit);
//	for (num = 1; num <= limit; power_2 = power_2 * 2.0)
//	{
//		time = time + 1 / power_2;
//		printf("time=%-5Lf    when num=%-2d\n", time, num);
//		num++;
//	}
//	return 0;
//}




//int main()//�����еĺ�---��
//{
//	int t_ct, limit;
//	double time, power_of_2;
//	printf("Enter your number of terms you want: \n");
//	scanf("%d", &limit);
//	for (time=0,power_of_2=1,t_ct=1;t_ct<=limit;t_ct++,power_of_2*=2.0)
//	{
//		time += 1.0 / power_of_2;
//		printf("time=%f when termd=%d\n", time, t_ct);
//	}
//	return 0;
//}




//int main()//����ѭ������do while
//{
//	const int secret_code = 13;
//	int code_enter;
//	do
//	{
//		printf("To  enter the triskaidekaphobia therapy club,\n");
//		printf("please enter the secret code number : ");
//		scanf("%d", &code_enter);
//	} while (code_enter!=secret_code);
//	printf("Congratulastion! You are cored!\n");
//	return 0;
//}



//int main()//����whileʵ��
//{
//	const int secret_code = 13;
//	int code_enter = 0;
//	while (code_enter != secret_code)
//	{
//		printf("To  enter the triskaidekaphobia therapy club,\n");
//		printf("please enter the secret code number : ");
//		scanf("%d", &code_enter);
//	} 
//	printf("Congratulastion! You are cored!\n");
//	return 0;
//}


//#define ROWS 6
//#define CHARS 10
//int main()//Ƕ��ѭ��
//{
//	int row;
//	char ch;
//	for (row=0; row < ROWS; row++)
//	{
//		for (ch = 'A'; ch < ('A' + CHARS); ch++)
//			printf("%c", ch);
//		printf("\n");
//	}
//	return 0;
//}





//int main()//�����ⲿѭ����Ƕ��ѭ��
//{
//	const ROWS=6;
//	const CHARS=6;
//	int row;
//	char ch;
//	for (row = 0; row < ROWS; row++)
//	{
//		for (ch = ('A' + row); ch < ('A' + CHARS); ch++)
//			printf("%c", ch);
//		printf("\n");
//	}
//	return 0;
//}



#define SIZE 10
#define PAR 72
//int main()//ѭ����������
//{
//	int index, score[SIZE];
//	int sum = 0;
//	float average;
//	printf("Enter %d golf scores:\n", SIZE);
//	for (index = 0; index < SIZE; index++)
//		scanf("%d", &score[index]);
//	printf("The scores read in are as follow:\n ");
//	for (index = 0; index < SIZE; index++)
//		printf("%5d", score[index]);
//	printf("\n");
//	for (index = 0; index < SIZE; index++)
//		sum += score[index];
//	average = (float)sum / SIZE;
//	printf("Sum=%d,avg=%.2f\n", sum, average);
//	printf("This is a handicap of %.0f.\n", average - PAR);
//
//	return 0;
//}


//int main()//ѭ����������---forѭ���ϲ�
//{
//	int index, score[SIZE];
//	int sum = 0;
//	float average;
//	printf("Enter %d golf scores:\n", SIZE);
//	for (index = 0; index < SIZE; index++)//���벢���
//	{
//		scanf("%d", &score[index]);
//		sum += score[index];
//	}
//	printf("The scores read in are as follow:\n ");
//	for (index = 0; index < SIZE; index++)
//		printf("%2d", score[index]);//��֤����ֵ
//		printf("\n");
//	average = (float)sum / SIZE;
//	printf("Sum=%d,avg=%.2f\n", sum, average);
//	printf("This is a handicap of %.0f.\n", average - PAR);
//
//	return 0;
//}




