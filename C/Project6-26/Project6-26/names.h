#pragma once
//用于重复包含测试的头文件

#ifndef NAMES_H_
	#define NAMES_H_

#define SLEN 32

struct names {
	char first[SLEN];
	char last[SLEN];
};

typedef struct names name;

void getname(name *); //输入名字
void showname(const name *); //显示名字
char * s_gets(char * st, int n); //输入字符串

#endif
