#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
 #include <stdio.h>
//#define NAME "GITATHINK,INC."
//#define AADDRESS "101 Megabuck Plaza"
//#define PLACE "Megapolis,CA 94904"
//#define WIDTH 40
//
//void starbar(void);
//int main()
//{
//	starbar();
//	printf("%s\n", NAME);
//	printf("%s\n", AADDRESS);
//	printf("%s\n", PLACE);
//	starbar();
//
//	return 0;
//
//}
//
//
//void starbar(void)
//{
//	int count;
//	for (count = 1; count <= WIDTH; count++)
//		putchar('*');
//	putchar('\n');
//}

#include <string.h>
#define NAME "GITATHINK,INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis,CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char a,int b);
int main()
{
	int spaces;
	
	show_n_char('*', WIDTH);
	putchar('\n');
	show_n_char(SPACE, 12);
	printf("%s\n", NAME);
	spaces = (WIDTH - strlen(ADDRESS)) / 2;

	show_n_char(SPACE, spaces);
	printf("%s\n", ADDRESS);
	spaces = (WIDTH - strlen(PLACE)) / 2;
	show_n_char(SPACE, spaces);//也可以把上式的spaces带入此语句 
	printf("%s\n", PLACE);
	show_n_char('*',WIDTH );

	putchar('\n');
	
	return 0;
}


void show_n_char(char a, int b)
{
	int count;
	for (count = 1; count <= b; count++)
		putchar(a);
}