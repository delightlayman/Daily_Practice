#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//包含多本书的图书目录
//#define MAXTITLE 40
//#define MAXAUTL 40
//#define MAXBOOKS 100 
//char* s_gets(char *st, int n);
//
//struct book {
//	char title[MAXTITLE];
//	char author[MAXAUTL];
//	float value;
//};
//
//
//
//int main()
//{
//	struct book library[MAXBOOKS];
//	int count = 0;
//	int index;
//
//	printf("Please enter the book title.\n");
//	printf("Press [enter] at the start of a line to stop.\n");
//
//	while (count <MAXBOOKS&&s_gets(library[count].title,MAXTITLE)!=NULL&&library[count].title[0]!=NULL)
//	{
//		printf("Now enter the author.\n");
//		s_gets(library[count].author, MAXAUTL);
//		printf("Now enter the value.\n");
//		scanf("%f", &library[count++].value);
//
//		while(getchar()!='\n')//清理输入行
//			continue;
//		if(count<MAXBOOKS)
//			printf("Enter the next title.\n");
//	}
//
//	if (count > 0)
//	{
//		printf("Here is list of the books:\n");
//		for (index = 0; index < count; index++)
//			printf("%s by %s: $%.2f", library[index].title, library[index].author, library[index].value);
//
//	}
//	else
//		printf("No books? Too bad.");
//	return 0;
//}
//
//
//char*s_gets(char* st, int n)
//{
//	char* re;
//	char* find;
//
//	re = fgets(st, n, stdin);
//	if (re)
//	{
//		find = strchr(st, '\n');
//		if (find)
//			*find = '\0';
//		else
//			while(getchar()!='\n')
//				continue;	
//
//	}
//
//
//	return re;
//}





//嵌套结构

//#define LEN 20
//const char* msgs[5] =
//{
//"    Thank you for the wonderful enening,",
//"You certainly prove that a",
//"is a special kind of guy. We must get together",
//"over a delicious ",
//"and have a few laughs"
//};
//
//struct names {//结构一
//	char first[LEN];
//	char last[LEN];
//};
//
//struct guy{//结构二
//	struct names handle;//嵌套结构一
//	char favfood[LEN];
//	char job[LEN];
//	float income;
//};
//
//
//
//int main()
//{
//	struct guy fellow = {
//		{"Ewen","Villard"},
//		"grilled salmon",
//		"personality coach",
//		68112.00
//	};
//
//	printf("Dear %s,\n\n", fellow.handle.first);
//	printf("%s%s.\n",msgs[0],fellow.handle.first);
//	printf("%s%s\n",msgs[1],fellow.job);
//
//	printf("%s\n", msgs[2]);
//	printf("%s%s%s", msgs[3], fellow.favfood, msgs[4]);
//
//	if (fellow.income > 150000.0)
//		puts("!!");
//	else if (fellow.income > 75000.0)
//		puts("!");
//	else
//		puts(".");
//
//	printf("\n%40s%s\n", " ", "Seen you soon");
//	printf("%40s%s\n", " ", "Shalala");
//
//
//	return 0;
//}



//指向结构指针
//#define LEN 20
//
//struct names {
//	char first[LEN];
//	char last[LEN];
//};
//
//struct guy {
//	struct names handle;
//	char favfood[LEN];
//	char job[LEN];
//	float income;
//};
//
//
//
//int main()
//{
//	struct guy fellow[2] = {
//		{
//			{"Ewen","Villard" },
//			"grilled salmon",
//			"personality coach",
//			68112.00
//		},
//		{
//			{"Rodney","swill"},
//			"tripe",
//			"tabloid reporter",
//			432400.00,
//		}
//	};
//	struct guy* him;//指向结构的指针
//	
//	printf("address #1: %p #2: %p\n ", &fellow[0], &fellow[1]);
//
//	him=&fellow[0];//指针指向位置
//	printf("pointer #1: %p #2: %p\n ", him, him+1);
//	printf("him->income is $%.2f: (*him).income is $%.2f\n",him->income,(*him).income);
//	him++;
//
//	printf("him->favfood is %s: him->handle.last is %s\n",him->favfood,him->handle.last);
//
//	return 0;
//}



////结构成员作为参数传递
//#define FUNDLEN 50
//
//struct funds {
//	char bank[FUNDLEN];
//	double bankfund;
//	char save[FUNDLEN];
//	double savefund;
//};
//
//double sum(double x, double y);
//
//
//int main()
//{
//	struct funds stan =
//	{
//		"Garfield",
//		4320.27,
//		"Lucky's Savings and Loan",
//		8543.94
//	};
//
//	printf("Stan has a total of $%.2f.\n", sum(stan.bankfund, stan.savefund));
//
//	return 0;
//}
//
//
//double sum(double x, double y)
//{
//return x + y;
//}




////传递指向结构的指针
//#define FUNDLEN 50
//
//struct funds {
//	char bank[FUNDLEN];
//	double bankfund;
//	char save[FUNDLEN];
//	double savefund;
//};
//
//double sum(const struct funds* bank);//参数为指针
//
//
//int main()
//{
//	struct funds stan =
//	{
//		"Garfield",
//		4320.27,
//		"Lucky's Savings and Loan",
//		8543.94
//	};
//
//	printf("Stan has a total of $%.2f.\n", sum(&stan));
//
//	return 0;
//}
//
//
//double sum(const struct funds* bank)
//{
//	return bank->bankfund+bank->savefund;
//}




////使用指向结构的指针
//#define NLEN 30
//
//struct namect {
//	char fname[NLEN];
//	char lname[NLEN];
//	int letters;
//};
//
//void getinfo(struct namect* pst);
//void makeinfo(struct namect* pst);
//void showinfo(const struct namect* pst);
//
//char* s_gets(char* st, int n);
//
//int main()
//{
//	struct namect person;
//	getinfo(&person);
//	makeinfo(&person);
//	showinfo(&person);
//
//	return 0;
//}
//
//
//void getinfo(struct namect* pst)
//{
//	printf("Please enter your first name.\n");
//	s_gets(pst->fname, NLEN);
//	printf("Please enter your last name.\n");
//	s_gets(pst->lname, NLEN);
//}
//
//void makeinfo(struct namect* pst)
//{
//	pst->letters = strlen(pst->fname) + strlen(pst->lname);
//}
//
//void showinfo(const struct namect* pst)
//{
//	printf("%s %s, your name has %d letters, and we have %d bytes to store it.\n", pst->fname, pst->lname, pst->letters, sizeof(struct namect));
//
//}
//
//
//char*s_gets(char* st, int n)
//{
//	char* re;
//	char* find;
//
//	re = fgets(st, n, stdin);
//	if (re)
//	{
//		find = strchr(st, '\n');
//		if (find)
//			*find = '\0';
//		else
//			while(getchar()!='\n')
//				continue;	
//	}
//
//	return re;
//}





//传递与返回结构
#define NLEN 30

struct namect {
	char fname[NLEN];
	char lname[NLEN];
	int letters;
};

struct namect getinfo(void);
struct namect makeinfo(struct namect info);
void showinfo(struct namect info);

char* s_gets(char* st, int n);

int main()
{
	struct namect person;
	person=getinfo();
	person=makeinfo(person);
	showinfo(person);

	return 0;
}


struct namect getinfo(void)
{
	struct namect temp;
	printf("Please enter your first name.\n");
	s_gets(temp.fname, NLEN);
	printf("Please enter your last name.\n");
	s_gets(temp.lname, NLEN);

	return temp;
}

struct namect makeinfo(struct namect info)
{
	info.letters = strlen(info.fname) + strlen(info.lname);
	return info;
}

void showinfo(struct namect info)
{
	printf("%s %s, your name has %d letters, and we have %d bytes to store it.\n", info.fname, info.lname, info.letters, sizeof(struct namect));

}


char* s_gets(char* st, int n)
{
	char* re;
	char* find;

	re = fgets(st, n, stdin);
	if (re)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return re;
}