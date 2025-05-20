#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

////使用符合字面量
//
//struct s {
//	double x;
//	double y;
//};
//
//double r(struct s);
//
//int main(void)
//{
//	double a;
//	a = r((struct s){10.0, 20.0});
//	printf("%lf\n", a);
//	return 0;
//}
//
//
//double r(struct s p) {
//	return p.x * p.x + p.y * p.y;
//
//}




////使用符合字面量
//
//struct flex {
//	size_t count;
//	double average;
//	double scores[];
//};
//
//void showf(const struct flex* p);
//
//int main(void)
//{
//	struct flex* p1, * p2;
//	int n = 5;
//	int i;
//	int tot = 0;
//
//	//为结构分配空间
//	p1 = malloc(sizeof(struct flex) + n * sizeof(double));
//	p1->count = n;
//
//	for (i = 0; i < n; i++)
//	{
//		p1->scores[i] = 20.0 - i;
//		tot+=p1->scores[i];
//	}
//	p1->average = tot / n;
//	showf(p1);
//
//	n = 9;
//	tot = 0;;
//	p2 = malloc(sizeof(struct flex) + n * sizeof(double));
//	p2->count = n;
//
//	for (i = 0; i < n; i++)
//	{
//		p2->scores[i] = 20.0 - i/2.0;
//		tot += p2->scores[i];
//	}
//	p2->average = tot / n;
//	showf(p2);
//
//	free(p1);
//	free(p2);
//
//
//	return 0;
//}
//
//
//void showf(const struct flex* p)
//{
//	int i;
//	printf("Socres : ");
//	for(i = 0; i < p->count; i++)
//		printf("%g ", p->scores[i]);
//	printf("\naverage: %g\n", p->average);
//
//}





//#define FLEN 50
//#define N 2
//
//struct fund {
//	char bank[FLEN];
//	double bankfund;
//	char save[FLEN];
//	double savefund;
//};
//
//double sum(const struct fund money[], int n);
//
//
//int main(void)
//{
//	struct fund jones[N] =
//	{
//		{
//		"Gar bank",
//		4032.27,
//		"Lucky's Savings and Loan",
//		8543.94
//		},
//		{
//		"Hone bank",
//		3620.88,
//		"Party Time Savings",
//		3802.91
//		}
//	};
//
//	printf("The Joneses have total of $%.2f.\n", sum(jones, N));
//
//
//
//	return 0;
//}
//
//double sum(const struct fund money[], int n)
//{
//	double total;//错误将double声明为int型 结果计算少一
//	int i;
//
//	for (i = 0,total = 0; i < n; i++)
//		total += money[i].bankfund + money[i].savefund;
//
//	return total;
//}





//#define MAXTITLE 40
//#define MAXAUTHOR 40
//#define MAXBOOKS 10
//
//
//char* s_gets(char* st, int n);
//
//struct book {
//	char title[MAXTITLE];
//	char author[MAXAUTHOR];
//	float value;
//};
//
//int main()
//{
//	struct book library[MAXBOOKS];
//	
//	int count = 0;
//	int index, filecount;
//	FILE* pbooks;
//
//	int size = sizeof(struct book);
//
//	if ((pbooks = fopen("book.dat", "a+b")) == NULL)
//	{
//		fputs("Can't open file book.dat.\n", stderr);
//		exit(1);
//	}
//
//	rewind(pbooks);//定位到文件开始
//
//	while (count<MAXBOOKS && fread(&library[count],sizeof(struct book),1,pbooks)==1)//从文件获取信息并打印
//	{
//		if (count == 0)
//			puts("Current content of book.dat:");
//		printf("%s by %s: $%.2f\n", library[count].title, library[count].author, library[count].value);//错误： count错打成MXABOOKS
//		count++;
//	}
//
//	filecount = count;
//
//	if (count == MAXBOOKS)
//	{
//		fputs("The book.dat file is full.\n", stderr);
//		exit(2);
//	}
//
//	puts("Please add new book titles.");
//	puts("Press [enter] at the start of a line to stop.");
//
//	while (count < MAXBOOKS && s_gets(library[count].title, MAXTITLE) != NULL && library[count].title[0] != '\0')
//	{
//		puts("Enter author:");
//		s_gets(library[count].author, MAXAUTHOR);
//		puts("Now enter the value.");
//		scanf("%f", &library[count++].value);//错误：少了++
//		while (getchar() != '\n')
//			continue;//清理输入行
//		if (count < MAXBOOKS)
//			puts("Enter the next book title.");
//	}
//
//	if (count > 0)
//	{
//		puts("Here is the list of your books:");
//		for (index = 0; index < count; index++)
//			printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
//		fwrite(&library[filecount], size, count - filecount, pbooks);
//
//	}
//	else
//		puts("No books? Too bad.");
//
//	puts("Bye.");
//	fclose(pbooks);
//	
//	return 0;
//}
//
//
//
//char* s_gets(char* st, int n)
//{
//	char* ret_val;
//	char* find;
//
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		find = strchr(st, '\n');//查找换行符
//		if (find)
//			*find = '\0';
//		else
//			while (getchar() != '\n')
//				continue;//处理输入行
//	}
//	return ret_val;
//}


//使用枚举类型的值

#include <stdbool.h>

char* s_gets(char* st, int n);


enum specrum {red, orange, yellow, green, blue, violet};

const char* colors[] = { "red","orange","yellow","green","blue","violet" };

#define LEN 30

int main()
{
	char choice[LEN];
	enum specrum color;
	bool color_found = false;

	puts("Enter a color or (empty) line to quit:");
	while (s_gets(choice, LEN) != NULL && choice[0] != '\0')//输入选择的颜色或枚举常量
	{
		for (color = red; color <= violet; color++)
		{
			if (strcmp(choice, colors[color]) == 0)//比较两者是否相同
			{
				color_found = true;
				break;
			}
		}
		if (color_found)
			switch (color)
			{
				case red:puts("Roses are red.");
					break;
				case orange:puts("Popies are orange.");
					break;
				case yellow:puts("sunflower	 are yellow.");
					break;
				case green:puts("Grass are green.");
					break;
				case blue:puts("Bluebells are blue.");
					break;
				case violet:puts("Violets are violet.");
					break;

			}
		else
			printf("I don't know about the color %s.\n", choice);
		color_found = false;
		puts("Next color, please (empty line to quit).");
	}
	puts("Bye.");



	return 0;
}


char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');//查找换行符
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;//处理输入行
	}
	return ret_val;
}