//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma warning( disable : 6031)
//程序（测试）文件


#include <stdio.h>
#include "queue port.h"


int main()
{
    Queue queue;
    Item item;
    char ch;

    InitializeQueue(&queue);

    printf("Testingg the Queue interface.Enter a to add an item to the queue, d to delete an item from the queue, q to quit:\n");
    while ((ch = getchar()) != 'q')
    {
        while (getchar() != '\n')//清除输入缓冲区
            continue;
        if (ch != 'a' && ch != 'd')//忽略其他输出
        {
            printf("Please enter a, d or q:\n");
            continue;
        }
        if (ch == 'a')
        {
            printf("Enter two number add to the queue:\n");
            scanf("%d %d", &item.a, &item.b);
            while (getchar() != '\n')//清除输入缓冲区
                continue;
            if (!QueueIsFull(&queue))
            {
                printf("Added: %d %d\n", item.a, item.b);
                Enqueue(item, &queue);
            }
            else
                puts("Queue is full");

        }
        else
        {
            if (QueueIsEmpty(&queue))
                puts("Queue is empty");
            else
            {
                Dequeue(&item, &queue);
                printf("Deleted: %d %d\n", item.a, item.b);
            }
        }
        printf("%d items in queue\n", QueueItemCount(&queue));
        puts("Type a to add, d to delete, q to quit:");
    }
    EmptyTheQueue(&queue);
    puts("Bye");

    return 0;
}

