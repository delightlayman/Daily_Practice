#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//#define PERIOD '.'
//int main()//ʹ���߼������
//{
//	char ch;
//	int charcount=0;
//	while ((ch=getchar())!=PERIOD)
//	{
//		if (ch != '"' && ch != '\'')
//			charcount++;
//	}
//	printf("There are %d non-quote character.\n", charcount);
//
//	return 0;
//}



//#define PERIOD '|' 
//int main()//ʹ���߼������
//{
//	char ch;
//	int charcount = 0;
//	while ((ch = getchar()) != PERIOD)
//	{
//		if (ch != '"' && ch != '\'')
//			charcount++;
//	}
//	printf("There are %d non-quote character.\n", charcount);
//
//	return 0;
//}




//#include <ctype.h>//�ṩisspace����ԭ��
//#include <stdbool.h>//bool����ԭ��
//#define STOP '|'
//int main()//ͳ���ַ�������������������
//{
//	char c;//�����ַ�
//	char prev;//�����ǰһ���ַ�
//	long n_chars = 0L;//�ַ���
//	int n_lines = 0;//����
//	int n_words = 0;//������
//	int p_lines = 0;//����������
//	bool inword = false;//���
//
//	printf("Enter text to bu analysed (| to be terminate):\n");
//	prev = '\n';
//
//	while ((c=getchar())!=STOP)
//	{
//		n_chars++;//ͳ���ַ���
//		if (c=='\n')
//			n_lines++;//ͳ������
//		if (!isspace(c) && !inword)
//		{
//			n_words++;//ͳ�Ƶ�����
//			inword = true;//���ʿ�ʼ��
//		}
//		if (isspace(c) && inword)
//		{
//			inword = false;//���ʽ�����
//		}
//		prev = c;
//	}
//	if (prev != '\n')
//		p_lines = 1;
//	printf("character=%ld,words=%d,lines=%d,", n_chars, n_words, n_lines );
//	printf("partial lines=%d\n", p_lines);
//	return 0;
//}


#include <ctype.h>
#define end 'A'
int main()//enter����getchar()��ʹ�ò���
{
	char c;
	int a=0;
	while ((c = getchar()) != end)
	{
		if (c == 'a')
			a++;
		if (a == 10)
		{
		
			c = 'o';
			printf("c=%c", c);
		}
	}

}




//#include<stdio.h>
//char s[1000];
//char end = '.';
//int i = 0;
//int main()
//{
//	while ((s[i] = getchar()) != end)
//	{
//		i++;
//	}
//	printf("������ַ�Ϊ��\n%s", s);
//	return 0;
//}