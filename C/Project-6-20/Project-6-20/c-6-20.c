#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)

//使用函数指针
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


#define LEN 81

char * s_gets(char * st, int n);
char showmenu(void);
void eatline(void);//渎至文件结尾
void show(void(*fp)(char *),char * str);

void Toupper(char *);//把字符串转换为大写
void Tolower(char *);//把字符串转换为小写
void Transpose(char*);//大小写转置

void Dummy(char *);//不改写字符串



int main(void)
{
	char line[LEN];
	char copy[LEN];
	char choice;

	void (*pfun)(char*);//声明函数指针，指向函数接受char*形参，返回void(无返值)
	pfun = Dummy;//初始化，指向Dummy函数


	puts("Enter a string (empty line to quit):");
	while (s_gets(line, LEN)!= NULL && line[0] != '\0')
	{
		while ((choice = showmenu()) != 'n')
		{
			switch (choice)
			{
				case 'u': pfun = Toupper; break;
				case 'l': pfun = Tolower; break;
				case 't': pfun = Transpose; break;
				case 'o': pfun = Dummy;   break;
			}
			strcpy(copy, line);//为show（）函数拷贝一份
			show(pfun, copy);//根据用户的选择，使用相应的函数

		}
		puts("Enter a string (empty line to quit):");

	}

	puts("Bye!");

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







char showmenu(void)
{
	char ans;
	puts("Enter menu choice:");
	puts("u) uppercase case     l) lowercase case     "
		 "t) transposed case      o) original case     n) next string");
	ans= getchar();
	ans = tolower(ans);
	eatline();
	while (strchr("ulton\n", ans) == NULL)
	{
		puts("Please enter a u, l, t, o, or n:");
		ans=tolower(getchar());
		eatline();
	}
	return ans;
}


void eatline(void)
{
	while (getchar() != '\n')
		continue;
}


void Toupper(char* st)
{
	while (*st)
	{
		*st = toupper(*st);
		st++;
	}
}


void Tolower(char* st)
{
	while (*st)
	{
		*st = tolower(*st);
		st++;
	}
}


void Transpose(char* st)
{
	while (*st)
	{
		if(islower(*st))
			*st = toupper(*st);
		else if(isupper(*st))
			*st = tolower(*st);
		st++;
	}

}

void Dummy(char* st)
{
	//不改变字符
}


void show(void(*fp)(char*), char* str)
{
	(*fp)(str);//把用户选定的函数作用于str
	puts(str);//显示结果
}