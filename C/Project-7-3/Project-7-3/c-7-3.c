#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
//程序文件
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void showmovies(Item item);
char *s_gets(char *st, int n);

int main(void)
{
    List movies;//创建一个列表
    Item item;//创建一个临时项

    //初始化
    InitializeList(&movies);
    if (ListIsFull(&movies))
    {
        fprintf(stderr, "No memory available! Bye!\n");
        exit(EXIT_FAILURE);
    }
    //获取用户数据并存储
    puts("Enter your favorite movies (press [enter] alone to quit:");
    while (s_gets(item.title, TSIZE)!=NULL && item.title[0] != '\0')
    {
        puts("Enter your rating <0-10>:");
        scanf("%d", &item.rating);
        while (getchar() != '\n')
            continue;
        if (AddItem(item, &movies) == false)
        {
            fprintf(stderr, "Problem allocating memory.\n");
            break;
        }
        if (ListIsFull(&movies))
        {
            puts("The list is now full");
            break;
        }
        puts("Enter the next movie title (empty line to stop):");
        
    }
    //显示列表
    if (ListIsEmpty(&movies))
        puts("No data entered.");
    else
    {
        puts("Here is the movie list:");
        Traverse(&movies, showmovies);
    }
    printf("You enter %d movies.\n", ListItemCount(&movies));

    EmptyTheList(&movies);
    printf("Bye!\n");


    return 0;
}

void showmovies(Item item)
{
    printf("Movie: %s Rating: %d\n", item.title, item.rating);

}

char *s_gets(char* st, int n)
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