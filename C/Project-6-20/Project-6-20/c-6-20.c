#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)

//ʹ�ú���ָ��
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


#define LEN 81

char * s_gets(char * st, int n);
char showmenu(void);
void eatline(void);//�����ļ���β
void show(void(*fp)(char *),char * str);

void Toupper(char *);//���ַ���ת��Ϊ��д
void Tolower(char *);//���ַ���ת��ΪСд
void Transpose(char*);//��Сдת��

void Dummy(char *);//����д�ַ���



int main(void)
{
	char line[LEN];
	char copy[LEN];
	char choice;

	void (*pfun)(char*);//��������ָ�룬ָ��������char*�βΣ�����void(�޷�ֵ)
	pfun = Dummy;//��ʼ����ָ��Dummy����


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
			strcpy(copy, line);//Ϊshow������������һ��
			show(pfun, copy);//�����û���ѡ��ʹ����Ӧ�ĺ���

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
		find = strchr(st, '\n');//���һ��з�
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;//����������
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
	//���ı��ַ�
}


void show(void(*fp)(char*), char* str)
{
	(*fp)(str);//���û�ѡ���ĺ���������str
	puts(str);//��ʾ���
}