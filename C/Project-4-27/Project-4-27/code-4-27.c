#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//int main()//��ζ�Ĳ����ֳ���---һ�δ�ӡ����
//{
//	int guess = 1;
//
//	printf("Pick an integer form 1 to 1oo.I will try to guess ");
//	printf("it.\nRespond with a y if my guess is right and with an n if it is wrong.\n");
//	printf("Un......Is your number %d\n", guess);
//	while (getchar() != 'y')
//		printf("Well,then,is it %d\n", ++guess);
//	printf("I know i can do it!\n");
//	return 0;
//}





//int main()//��ζ�Ĳ����ֳ���---�Ľ���---��ӡ����---�����y����������ַ���Ϊn
//{
//	int guess = 1;
//
//	printf("Pick an integer form 1 to 1oo.I will try to guess ");
//	printf("it.\nRespond with a y if my guess is right and with an n if it is wrong.\n");
//	printf("Un......Is your number %d\n", guess);
//	while (getchar() != 'y')
//	{
//		printf("Well,then,is it %d\n", ++guess);
//		while (getchar() != '\n')
//			continue;
//	}
//	printf("I know i can do it!\n");
//	return 0;
//}



//int main()//��ζ�Ĳ����ֳ���---�ٸĽ���
//{
//	int guess = 1;
//	char respond;
//
//	printf("Pick an integer form 1 to 1oo.I will try to guess ");
//	printf("it.\nRespond with a y if my guess is right and with an n if it is wrong.\n");
//	printf("Un......Is your number %d\n", guess);
//	while ((respond=getchar()) != 'y')//��ȡ��Ӧ
//	{
//		if (respond == 'n')
//			printf("Well,then,is it %d\n", ++guess);
//		else
//			printf("Sorry,I understand only y or n.\n");
//		while (getchar() != '\n')
//			continue;
//	}
//	printf("I know i can do it!\n");
//	return 0;
//}




//void display(char cr, int lines, int width);
//int main()//����ϴ��I/O����---�޷��ٴ�����
//{
//	int ch;//����ӡ�ַ�
//	int rows, cols;//������
//	printf("Enter a character and two integer:\n");
//	while ((ch = getchar()) != '\n')
//	{
//		scanf("%d %d", &rows, &cols);
//		display(ch, rows, cols);
//		printf("Enter another character and two integer;\n");
//		printf("Enter a newline to quit.\n");
//	}
//	printf("Bye.\n");
//	return 0;
//}
//
//void display(char cr, int lines, int width)
//{
//	int row, col;
//	for (row = 1; row <= lines; row++)
//	{
//		for (col = 1; col <= width; col++)//�˴�<=lines ����ֻʶ���˵��˵�һ������
//			putchar(cr);
//		putchar('\n');
//	}
//
//}





//void display(char cr, int lines, int width);
//int main()//����ϴ��I/O����---�������������while����\n;�������if�������벻�Ե����
//{
//	int ch;
//	int rows, cols;
//	printf("Enter a character and two integer:\n");
//	while ((ch = getchar()) != '\n')
//	{
//		if(scanf("%d %d", &rows, &cols) != 2)
//			break;
//		
//		display(ch, rows, cols);
//		while (getchar() != '\n')
//			continue;
//		printf("Enter another character and two integer;\n");
//		printf("Enter a newline to quit.\n");
//	}
//	printf("Bye.\n");
//	return 0;
//}
//
//void display(char cr, int lines, int width)
//{
//	int row, col;
//	for (row = 1; row <= lines; row++)
//	{
//		for (col = 1; col <= width; col++)
//			putchar(cr);
//		putchar('\n');
//	}
//
//}



//#include <stdbool.h>
//long get_long(void);//��֤������һ������
//bool bad_limits(long begin, long end, long low, long high);//��֤��Χ���������Ƿ���Ч
//double sum_squares(long a, long b);
//
//int main()//������֤
//
//{
//	const long MIN = -10000000L;//����
//	const long MAX = +10000000L;//������
//	long start, stop;//�û�ָ��������
//	double answer;
//
//	printf("This  program computes the sum of squares of integers in a range.\n"
//		"The lower bound should not be less than -10000000 and\n"
//		"the upper bound shoule not be more than +10000000.\n"
//		"Enter the limits (enter 0for both limits to quit):\n"
//		"lower limits: ");
//	start = get_long();
//	printf("upper limits: ");
//	stop = get_long();
//	while (start!=0||stop!=0)
//	{
//		if (bad_limits(start, stop, MIN, MAX))
//			printf("Please try again.\n");
//		else
//		{
//			answer = sum_squares(start, stop);
//			printf("The sum of the squares of the integers from %d to %d is %g\n", start, stop, answer);//�˴�ת��˵�����
//		}
//		printf("Enter the limits (enter 0 for both limits to quit):\n");
//		printf("lower limits: ");
//		start = get_long();
//		printf("upper limits: ");
//		stop = get_long();
//		
//	}
//	printf("Done!\n");
//	return 0;
//}
//
//long get_long(void)
//{
//	long input;
//	char ch;
//
//	while (scanf("%ld",&input)!=1)
//	{
//		while ((ch = getchar())!= '\n')//�˴�����������
//			putchar(ch);
//		printf(" is not an integer.\nPlease enter an integer value,such as 25,-17,or 3:");
//
//	}
//
//	return input;
//}
//
//
//double sum_squares(long a, long b)
//{
//	double total = 0;
//	long i;
//	for (i = a; i <= b; i++)
//		total += (double)i * (double)i;
//	return total;
//}
//
//bool bad_limits(long begin, long end, long low, long high)
//{
//	bool not_good=false;
//	if (begin > end)
//	{
//		printf("%ld isn't smaller than %ld.\n", begin, end);
//			not_good = true;
//	}
//	if (begin<low||end<low)
//	{
//		printf("Values must be %ld or greater.\n", low);
//		not_good = true;
//	}
//	if (begin > high || end > high)
//	{
//		printf("Values must be %ld or less.\n", high);
//		not_good = true;
//	}
//
//	return not_good;




//int main()//��֤һ��getchar����������---��ֵ�����
//{
//	int ch;
//	ch = getchar();
//	while (getchar() != '\n')
//		continue;
//	putchar(ch);
//	return 0;
//}
//
//
//
//int main()//��֤һ��getchar����������---��ֵ�����
//{
//	int ch;
//	ch = getchar();
//	while (getchar() != '\n')
//	putchar(ch);
//	return 0;
//}

//int main()//��֤һ��getchar����������---��ֵ�����
//{
//	int ch;
//	
//	while ((ch=getchar()) != '\n')//ÿ�θ�ֵһ����ѭ��n��
//		putchar(ch);
//
//	return 0;
//}





//�˵�����
char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);
int main()
{
	int choice;
	while ((choice = get_choice()) != 'q')
	{
		switch (choice)
		{
		case 'a':printf("Buy low,sell high.\n");
			break;
		case 'b':putchar('\a');
			break;
		case 'c':count();
			break;
		default:printf("Program error!\n");
			break;
		}
	}
	return 0;
}

void count(void)
{
	int n, i;

	printf("Count how far? Enter an integer:\n");
	n = get_int();//�˴��������ţ����º���δʶ��
	for (i = 1; i <= n; i++)
		printf("%d\n", i);
	while (getchar() != '\n')
		continue;
	
}

int get_int(void)
{
	int input;
	char ch;
	
	while (scanf("%d",&input)!=1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);//����������
		printf(" is not an integer.\nPlease enter an integer value."
			"Such as 25,-16,89.\n");
	}
	return input;//��ʵ����Ҳ���Դ����з���������get_count����,ֻҪ��֤��Ӱ������get����������
}

char get_choice(void)
{
	int ch;
	printf("Enter the letter of your choice:\n");
	printf("a. advice             b. bell\n");
	printf("c. count              q. quit\n");

	ch = get_first();
	while ((ch < 'a' || ch>'c') && ch != 'q')//�˴����˷ֺž�Ȼû��������������
	{
		printf("Please respond with a,b,c,or q.\n");
		ch = get_first();
	}
	return ch;
}



char get_first()
{
	int ch;

	ch = getchar();
	while (getchar() != '\n')
	continue;
return ch;
}



