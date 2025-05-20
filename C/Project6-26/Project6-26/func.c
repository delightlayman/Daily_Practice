#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
//函数定义源文件
#include <stdio.h>
#include "names.h"

void get_names(name *p) {

	printf("Enter your first name: ");
	scanf("%s", p->first);
	printf("Enter your last name: ");
	scanf("%s", p->last);
}

void show_names(const name* p) {
	printf("%s %s\n", p->first, p->last);

}

char* s_gets(char* st, int n) {
	char* ret_val;
	char* find;

	ret_val = fgets(st, n, stdin);

	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}
	