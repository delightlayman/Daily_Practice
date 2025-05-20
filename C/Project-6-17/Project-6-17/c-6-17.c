#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 
//结构中的指针与malloc
//#define SLEN 81
//
//
//struct namect {
//	char* fname;
//	char* lname;
//	int letters;
//
//};
//
//
//
//void getinfo(struct namect* info);//分配内存
//void makeinfo(struct namect* info);
//void showinfo(const struct namect* info);
//void cleanup(struct namect* info);//释放内存
//
//
//char* s_gets(char* st, int n);
//
//int main(void)
//{
//	
//	struct namect person;
//
//
//	printf("%zd\n", sizeof(person.fname));
//	printf("%zd\n", sizeof(person.lname));
//	printf("%zd\n", sizeof(person.letters));
//	printf("%zd\n", sizeof(person));
//
//	getinfo(&person);
//	makeinfo(&person);
//	showinfo(&person);
//
//	cleanup(&person);
//
//return 0;
//}
//
//void getinfo(struct namect* info)
//{
//	char temp[SLEN];
//	printf("Enter your first name.\n");
//	s_gets(temp, SLEN);
//	info->fname = (char*)malloc(strlen(temp) + 1);//分配内存
//	strcpy(info->fname, temp);
//	printf("Enter your last name.\n");
//	s_gets(temp, SLEN);
//	info->lname = (char*)malloc(strlen(temp) + 1);
//	strcpy(info->lname, temp);
//
//}
//
//void makeinfo(struct namect* info)
//{
//	info->letters = strlen(info->fname) + strlen(info->lname);
//}
//
//
//
//void showinfo(struct namect* info)
//{
//	printf("%s %s. your name certains %d letters, and we have %zd bytes to store it.",info->fname, info->lname, info->letters, sizeof(struct namect));
//}
//
//
//void cleanup(struct namect* info)
//{
//	free(info->fname);
//	free(info->lname);
//}
//
//
//
//char* s_gets(char* st, int n)
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
//			while (getchar() != '\n')
//				continue;
//	}
//
//	return re;
//}


//一些尺寸大小
#define SLEN 10
int main(void)
{
	struct namect {
		char* fname;
		char* lname;
		int letters;

	};

	struct n {
		char fname[SLEN];
		char lname[SLEN];
		int letters;

	};
	printf("%zd\n", sizeof(struct namect));
	printf("%zd\n", sizeof(struct n));



	int x = 10;
	int* p = &x;

	printf("%zd\n", sizeof(p));
	printf("%zd\n", sizeof(*p));
	printf("%zd\n", sizeof(x));
	printf("%zd\n", sizeof(&x));

	printf("%zd\n", sizeof(int*));
	printf("%zd\n", sizeof(int));
	printf("%zd\n", sizeof(char));
	printf("%zd\n", sizeof(char*));
	return 0;
}