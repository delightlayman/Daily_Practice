#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "binary tree.h"


char menu(void);

void addpet(Tree* pt);
void droppet(Tree* pt);

void showpet(const Tree* pt);
void findpet(const Tree* pt);
void print_Item(Item item);
void uppercase(char* str);
char* s_gets(char* st, int n);

int main(void)
{
	Tree pets;
	char choice;

	InitializeTree(&pets);

	while ((choice = menu()) != 'q')
	{
		switch (choice)
		{
		case 'a': addpet(&pets); break;
		case 'd': droppet(&pets); break;
		case 'l': showpet(&pets); break;
		case 'f': findpet(&pets); break;
		case 'n': printf("There are %d pets in the club.\n", TreeItemCount(&pets)); break;

		default: puts("Invalid entry"); break;
		}
	}
	EmptyTheTree(&pets);
	puts("Bye!");

	return 0;
}

char menu(void)
{
	int ch;
	printf("\nCoCo Pet Club Menbership Program\n");
	printf("Enter the letter corresponding to your choice:\n");
	printf("a) add a pet\t\t d) drop a pet\n");
	printf("l) list pets\t\t f) find pets\n");
	printf("n) number of pets\t q) quit\n");

	while ((ch = getchar()) != EOF)
	{
		while (getchar() != '\n')
			continue;
		ch = tolower(ch);
		if (strchr("adlfqn", ch) == NULL)
			printf("Please enter a, d, l, f, n, or q.\n");
		else
			break;
	}
	if (ch == EOF)
		ch = 'q';
	return ch;


}


void addpet(Tree* pt)
{
	Item item;

	if (TreeIsFull(pt))
		printf("No room in the club!\n");
	else
	{
		puts("Please enter name of pet:");
		s_gets(item.petname, SLEN);
		puts("Please enter pet kind");
		s_gets(item.petkind, SLEN);
		uppercase(item.petname);
		uppercase(item.petkind);
		AddItem(&item, pt);
	}

}

void showpet(const Tree* pt)
{
	if (TreeIsEmpty(pt))
		printf("This club has no members.\n");
	else
		Traverse(pt, print_Item);


}


void print_Item(Item item)
{
	printf("Name: %-19s, Kind: %-19s\n", item.petname, item.petkind);
}


void findpet(const Tree* pt)
{
	Item item;

	if (TreeIsEmpty(pt))
	{
		printf("This club has no members.\n");//如果树为空，则退出函数
		return;
	}

	puts("Please enter name of pet you wish to find:");
	s_gets(item.petname, SLEN);
	uppercase(item.petname);
	puts("Please enter pet kind:");
	s_gets(item.petkind, SLEN);
	uppercase(item.petkind);
	printf("%s the %s", item.petname, item.petkind);
	if (InTree(&item, pt))
		printf(" is a member of the club.\n");
	else
		printf(" is not a member of the club.\n");

}

void droppet(Tree* pt)
{
	Item item;

	if (TreeIsEmpty(pt))
	{
		puts("No entries in the club!\n");
		return;
	}
	else
	{
		puts("Please enter name of pet you wish to drop");
		s_gets(item.petname, SLEN);
		puts("Please enter pet kind");
		s_gets(item.petkind, SLEN);
		uppercase(item.petname);
		uppercase(item.petkind);

		printf("%s the %s", item.petname, item.petkind);
		if (DeleteItem(&item, pt))
			printf(" is dropped from the club.\n");
		else
			printf(" is not a member of the club.\n");

	}


}


void uppercase(char* str)
{
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}

char* s_gets(char* str, int n)
{
	char* ret_val;
	char* find;

	ret_val = fgets(str, n, stdin);
	if (ret_val)
	{
		find = strchr(str, '\n');

		if (find)
			*find = '\0';
		else
		{
			while (getchar() != '\n')
				continue;

		}

	}

	return ret_val;
}