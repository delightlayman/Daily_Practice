#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//
////ʹ�ýṹ����
//
//#define TLINE 45
//
//
//struct film {
//    char title[TLINE];
//    double rating;
//    struct film* next;
//};
//
//char* s_gets(char* st, int n);
//
//int main(void)
//{
//    struct film* head = NULL;
//    struct film* prev=NULL, * current=NULL;
//    char input[TLINE];
//
//    puts("Please enter first movie title:");
//    while (s_gets(input, TLINE) && input[0] != '\0')
//    {
//        current = (struct film*)malloc(sizeof(struct film));
//
//        if (head == NULL)//��һ���ṹ
//            head = current;
//        else
//            prev->next = current;//�����ṹ
//        current->next = NULL;
//        strcpy(current->title, input);
//        printf("Please enter your rating <0-10>: ");
//        scanf("%lf", &current->rating);
//        while (getchar() != '\n')
//            continue;
//
//        puts("Please enter next movie title (empty line to stop):");
//        prev = current;
//
//    }
//    //��ʾ��Ӱ�б�
//    if (head == NULL)
//        printf("No data entered.");
//    else
//        printf("Here is the movie list:\n");
//    current = head;
//    while (current != NULL)
//    {
//        printf("Movie: %s Rating:%.2lf\n", current->title, current->rating);
//        current = current->next;
//    }
//    //�ͷ��ڴ�
//    current = head;
//    while (current != NULL)
//    {
//        head = current->next;
//        free(current);
//        current = head;
//    }
//
//
//    printf("Bye!\n");
//
//    return 0;
//}
//
//
//char* s_gets(char* st, int n)
//{
//    char* ret_val;
//    char* find;
//
//    ret_val = fgets(st, n, stdin);
//    if (ret_val)
//    {
//        find = strchr(st, '\n');
//        if (find)
//            *find = '\0';
//        else
//            while (getchar() != '\n')
//                continue;
//    }
//    return ret_val;
//}


//ָ�븳ֵָ��ĵ�ַ��ֵ����֤

int main()
{
	int a = 10;
	int* p = &a;
	int* pp = p;

	printf("%d\n", a);
	printf("%d\n", *p);
	printf("%d\n", *pp);

	printf("%p\n", p);
	printf("%p\n", pp);

	printf("%p\n", &a);
	printf("%p\n", &p);
	printf("%p\n", &pp);
	return 0;
}