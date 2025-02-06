
//使用结构链表
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



#define TLINE 45


struct film {
    char title[TLINE];
    double rating;
    struct film* next;
};

char* s_gets(char* st, int n);

int main(void)
{
    struct film* head = NULL;
    struct film* prev, * current;
    char input[TLINE];

    puts("Please enter first movie title:");
    while (s_gets(input, TLINE) && input[0] != '\0')
    {
        current = (struct film*)malloc(sizeof(struct film));

        if (head == NULL)//第一个结构
            head = current;
        else
            prev->next = current;//后续结构
    current->next = NULL;
    strcpy(current->title, input);
    printf("Please enter your rating <0-10>: ");
    scanf("%lf", &current->rating);
    while (getchar() != '\n')
        continue;

    puts("Please enter next movie title (empty line to stop):");
    prev = current;

    }
    //显示电影列表
   if (head == NULL)
       printf("No data entered.");
   else
       printf("Here is the movie list:\n");
   current = head;
   while (current != NULL)
   {
      printf("Movie: %s Rating:%.2lf\n", current->title, current->rating);
      current = current->next;
   }
   //释放内存
   current = head;
   while (current != NULL)
   {
      head = current->next;
      free(current);
      current = head;
   }


    printf("Bye!\n");

    return 0;
}


char* s_gets(char* st, int n)
{
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