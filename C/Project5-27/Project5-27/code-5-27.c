#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
//void put1(const char*);
//int put2(const char*);
//
//int main()
//{
//	put1("If I'd as much money");
//	put1(" as,I can spend,\n");
//	printf("I count %d characters.\n", put2("I never would cry old chairs to mend."));
//
//	return 0;
//}
//
//void put1(const char* string)
//{
//	while (*string != '\0')//多了一个分号
//	putchar(*string++);
//
//}
//
//
//int put2(const char* string)
//{
//	int count = 0;
//
//	while (*string)
//	{
//		putchar(*string++);
//		count++;
//	}
//	putchar('\n');
//	return count;
//}




#include <string.h>
//void fit(char* string, unsigned int size);
//int main()
//{
//	char mesg[] = "Things should be as simple as possible,"
//		" but not simpler.";
//
//	puts(mesg);
//	fit(mesg,38);
//	puts(mesg);
//
//	puts("Let's look at some more of the string.");
//	puts(mesg + 39);
//
//
//	return 0;
//}
//
//
//void fit(char* string, unsigned int size)
//{
//	if (strlen(string) > size)
//		string[size] = '\0';
//}
//



////拼接两个字符串
//#define SIZE 80
//char s_gets(char* st, int n);
//int main()
//{
//	char flower[SIZE];
//	char addon[] = "s smell like old shoes.";
//
//	puts("What is your favorite flower?");
//	if (s_gets(flower, SIZE))
//	{
//		strcat(flower, addon);
//		puts(flower);
//		puts(addon);
//
//	}
//	else
//		puts("End of file encountered!");
//	puts("Bye!");
//
//
//	return 0;
//}
//
//
//char s_gets(char* st, int n)
//{
//	char * ret_val;
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



////拼接两个字符串，检测第一数组长度，限定拼接的第二数组长度。
//#define SIZE 30
//#define BUGSIZE 13
//
//char s_gets(char* st, int n);
//int main()
//{
//	char flower[SIZE];
//	char addon[] = "s smell like old shoes.";
//	char bug[BUGSIZE];
//	int available;
//
//	puts("What is your favorite flower?");
//	s_gets(flower, SIZE);
//	if(strlen(addon) + strlen(flower)+1<=SIZE)
//		strcat(flower,addon);
//	puts(flower);
//
//	puts("what is your favorite bug?");
//	s_gets(bug, BUGSIZE);
//	available = BUGSIZE - strlen(bug) - 1;
//	strncat(bug, addon, available);
//	puts(bug);
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



//测试程序可否正常运行？
#define ANSWER "Grant"
#define SIZE 40
char s_gets(char* st, int n);
int main()
{
	char try[SIZE];

	puts("Who is buried in Grant's tomb");
	s_gets(try, SIZE);
	while (strcmp(try,ANSWER))
	{
		puts("No this is wrong.Try again.");
		s_gets(try, SIZE);
	}
	puts("That's right");
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
