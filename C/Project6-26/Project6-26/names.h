#pragma once
//�����ظ��������Ե�ͷ�ļ�

#ifndef NAMES_H_
	#define NAMES_H_

#define SLEN 32

struct names {
	char first[SLEN];
	char last[SLEN];
};

typedef struct names name;

void getname(name *); //��������
void showname(const name *); //��ʾ����
char * s_gets(char * st, int n); //�����ַ���

#endif
