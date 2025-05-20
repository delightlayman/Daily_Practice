#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
//程序（测试）文件


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "queue port.h"

bool newcustomer(double x);//是否有新客到来
Item customertime(long when);//设置顾客参数


#define MIN_PER_HOUR 60.0

int main()
{
    Queue line;
    Item temp;//顾客数据

    int hour;//模拟的小时数
    int cust_perhour;//每小时平均多少位顾客

    long cycle, cyclelimit;//循环计数器及其上限
    long turnaways = 0;//因队列已满被拒绝的顾客数
    long customers = 0;//加入队列的顾客数
    long served = 0;//被服务过的顾客数

    long sum_line = 0;//累计队伍总长
    int wait_time = 0;//从当前到咨询师空闲所需的时间
    double min_per_cust;//顾客到来的平均间隔时间
    long line_wait = 0;//队列累计等待时间

    InitializeQueue(&line);
    srand((unsigned int)time(0));//rand()随机初始化

    puts("Case Study: Simulation of a Single-Server Queue");
    puts("Enter the number of simulation hours:");
    scanf("%d", &hour);
    while (getchar() != '\n')
        continue;
    cyclelimit = MIN_PER_HOUR * hour;
    puts("Enter the average number of customers per hour");
    scanf("%d", &cust_perhour);
    while (getchar() != '\n')
        continue;
    min_per_cust = MIN_PER_HOUR / cust_perhour;

    for (cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust))//入队
        {
            if (QueueIsFull(&line))
                turnaways++;
            else
            {
                customers++;
                temp = customertime(cycle);
                Enqueue(temp, &line);
            }
        }
        if (wait_time <= 0 && !QueueIsEmpty(&line))//出队
        {
            Dequeue(&temp, &line);
            wait_time = temp.processtime;
            line_wait += cycle - temp.arrive;
            served++;

        }
        if (wait_time > 0)
            wait_time--;
        sum_line += QueueItemCount(&line);
    }
    if (customers > 0)
    {
        printf("customers accepted: %ld\n", customers);
        printf("  customers served: %ld\n", served);
        printf("         turnaways: %ld\n", turnaways);
        printf("average queue size: %.2f\n", (double)sum_line / cyclelimit);
        printf("average wait time: %.2f minutes\n", (double)line_wait / served);

    }
    else
        puts("No customers!");
    EmptyTheQueue(&line);
    puts("Done!");

   
    return 0;
}

//x是顾客到来的平均间隔时间
//一分钟内有顾客到来，则返回true，否则返回false
bool newcustomer(double x)
{
    if (rand() * x / RAND_MAX < 1)
        return true;
    else
        return false;
}

//when是顾客到来的时间
//该函数返回一个顾客数据，包含顾客到达（when）的时间和咨询时间(1-3随机)

Item customertime(long when)
{
    Item cust;

    cust.processtime = rand() % 3 + 1;
    cust.arrive = when;

    return cust;
}