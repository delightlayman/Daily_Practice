#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
#include <string.h>

//strcpy��ʾ

//#define LIM 5
//#define SIZE 40
//char s_gets(char* st, int n);
//
//int main()
//{
//	char qwords[LIM][SIZE];
//	char temp[SIZE];
//	int i=0;
//
//	printf("Enter %d words beginning with q:\n",LIM);
//
//	while (i<LIM&&s_gets(temp,SIZE))
//	{
//		if (temp[0] != 'q')
//			printf("%s doesn't beginning with q!\n", temp);
//		else
//		{
//			strcpy(qwords[i], temp);
//			i++;
//		}
//	}
//	puts("Here are the words accepted:");
//	for (i = 0; i < LIM; i++)
//		puts(qwords[i]);
//	return 0;
//}
//
//
//char s_gets(char* st, int n)
//{
//	char* ret_val;
//	int i = 0;
//
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//			i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//
//	return ret_val;
//}



//#define SIZE 40
//#define WORDS "beast"
//
//int main()
//{
//	const char* orig = WORDS;
//	char copy[SIZE] = "Be the best that you can be.";
//	char* ps;
//
//	puts(orig);
//	puts(copy);
//	ps = strcpy(copy + 7, orig);
//	puts(copy);
//	puts(ps);
//
//	return 0;
//}




////strncpy��ʾ
//#define TARGSIZE 7
//#define LIM 5
//#define SIZE 40
//char s_gets(char* st, int n);
//
//int main()
//{
//	char qwords[LIM][SIZE];
//	char temp[SIZE];
//	int i=0;
//
//	printf("Enter %d words beginning with q:\n",LIM);
//
//	while (i<LIM&&s_gets(temp,SIZE))
//	{
//		if (temp[0] != 'q')
//			printf("%s doesn't beginning with q!\n", temp);
//		else
//		{
//			strncpy(qwords[i], temp,TARGSIZE-1);
//			qwords[i][TARGSIZE - 1] = '\0';
//			i++;
//		}
//	}
//	puts("Here are the words accepted:");
//	for (i = 0; i < LIM; i++)
//		puts(qwords[i]);
//	return 0;
//}
//
//
//char s_gets(char* st, int n)
//{
//	char* ret_val;
//	int i = 0;
//
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//			i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//
//	return ret_val;
//}




////sprinf()��ʾ
//#include <stdio.h>
//#define MAX 20
//char s_gets(char* st, int n);
//
//int main()
//{
//	char first[MAX];
//	char last[MAX];
//	char formal[2 * MAX + 10];
//	double prize;
//
//	
//	printf("Enter your first name:");
//	s_gets(first, MAX);
//	printf("Enter your last name:");
//	s_gets(last, MAX);
//
//	puts("Enter your prize money:");
//	scanf("%lf", &prize);
//	sprintf(formal, "%s,%-19s:$%6.2f\n", last, first, prize);
//	puts(formal);
//
//	return 0;
//}
//
//
//char s_gets(char* st, int n)
//{
//	char* ret_val;
//	int i = 0;
//
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//			i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//
//	return ret_val;
//}



////�ַ�������---С����
//#include <stdio.h>
//#include <string.h>
//#define SIZE 81
//#define LIM 20
//#define HALT ""
//
//void stsrt(char* strings[], int num);
//char s_gets(char* st, int n);
//
//int main()
//{
//	char input[LIM][SIZE];//�洢��������
//	char* ptstr[LIM];//�ں�ָ�����������
//	int ct = 0;//�������
//	int k;//�������
//
//	printf("Input up to %d lines,and I will sort them.\n.", LIM);
//	printf("To stop,prees enter key at a line's start .\n");
//	while (ct < LIM&&s_gets(input[ct],SIZE)!=NULL&&input[ct][0]!='\0')
//	{
//		ptstr[ct] = input[ct];//����ָ��ָ���ַ���
//		ct++;
//
//	}
//	stsrt(ptstr, ct);//�ַ���������
//	puts("\nHere's the sorted list:\n");
//	for (k = 0; k < ct; k++)
//		puts(ptstr[k]);
//	return 0;
//}
//
//void stsrt(char* strings[], int num)//�ַ���---ָ��---������
//{
//	char *temp;
//	int top, seek;
//
//	for (top = 0; top < num - 1; top++)
//		for (seek = top + 1; seek < num; seek++)
//			if (strcmp(strings[top], strings[seek]) > 0)
//			{
//				temp = strings[top];//�����д��뽻������λ��
//				strings[top] = strings[seek];
//				strings[seek] = temp;
//			}
//}
//
//
//char s_gets(char* st, int n)
//{
//	char* ret_val;
//	int i = 0;
//
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//			i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//
//	return ret_val;
//}



//
////�޸��ַ���
//#include <ctype.h>
//void ToUpper(char*str);
//int PunctCount(const char*str);
//#define LIMIT 81
//int main()
//{
//	char line[LIMIT];
//	char* find;
//
//	puts("PLease enter a line:");
//	fgets(line, LIMIT,stdin);
//	find = strchr(line, '\n');//���һ��з�
//	if (find)
//		*find = '\0';//�滻���з�
//	ToUpper(line);
//	puts(line);
//	printf("The line has %d punctuation characters.\n", PunctCount(line));
//
//	return 0;
//}
//
//
//void ToUpper(char* str)
//{
//	while (*str)
//	{
//		*str = toupper(*str);
//		str++;
//	}
//}
//
//int PunctCount(const char* str)
//{
//	int ct=0;
//
//	while (*str)
//	{
//		if (ispunct(*str))
//			ct++;
//		str++;
//	}
//
//	return ct;
//}




//ʹ��strtol
#include <stdio.h>
#include <stdlib.h>
#define LIM 30

char s_gets(char* st, int n);

int main()
{
	char number[LIM];
	char* end;
	long value;

	puts("Enter a number (empty line to quit):");
	while (s_gets(number, LIM) && number[0] != '\0')
	{
		value = strtol(number, &end, 10);//ʮ����
		printf("base 10 input,base 10 output: %ld,stopped at %s (%d)\n", value, end, *end);
		value = strtol(number, &end, 16);//ʮ������
		printf("base 16 input,base 10 output: %ld,stopped at %s (%d)\n", value, end, *end);
		puts("Next number:");

	}
	puts("Bye!");
	return 0;
}

char s_gets(char* st, int n)
{
	char* ret_val;
	int i = 0;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return ret_val;
}