#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//#define PERIOD '.'
//int main()//使用逻辑运算符
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
//int main()//使用逻辑运算符
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




//#include <ctype.h>//提供isspace函数原型
//#include <stdbool.h>//bool函数原型
//#define STOP '|'
//int main()//统计字符数，单词数，行数。
//{
//	char c;//读入字符
//	char prev;//读入的前一个字符
//	long n_chars = 0L;//字符数
//	int n_lines = 0;//行数
//	int n_words = 0;//单词数
//	int p_lines = 0;//不完整行数
//	bool inword = false;//标记
//
//	printf("Enter text to bu analysed (| to be terminate):\n");
//	prev = '\n';
//
//	while ((c=getchar())!=STOP)
//	{
//		n_chars++;//统计字符数
//		if (c=='\n')
//			n_lines++;//统计行数
//		if (!isspace(c) && !inword)
//		{
//			n_words++;//统计单词数
//			inword = true;//单词开始处
//		}
//		if (isspace(c) && inword)
//		{
//			inword = false;//单词结束处
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
int main()//enter键在getchar()的使用测试
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
//	printf("输入的字符为：\n%s", s);
//	return 0;
//}