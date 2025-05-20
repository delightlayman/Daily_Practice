#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
//���򣨲��ԣ��ļ�


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "queue port.h"

bool newcustomer(double x);//�Ƿ����¿͵���
Item customertime(long when);//���ù˿Ͳ���


#define MIN_PER_HOUR 60.0

int main()
{
    Queue line;
    Item temp;//�˿�����

    int hour;//ģ���Сʱ��
    int cust_perhour;//ÿСʱƽ������λ�˿�

    long cycle, cyclelimit;//ѭ����������������
    long turnaways = 0;//������������ܾ��Ĺ˿���
    long customers = 0;//������еĹ˿���
    long served = 0;//��������Ĺ˿���

    long sum_line = 0;//�ۼƶ����ܳ�
    int wait_time = 0;//�ӵ�ǰ����ѯʦ���������ʱ��
    double min_per_cust;//�˿͵�����ƽ�����ʱ��
    long line_wait = 0;//�����ۼƵȴ�ʱ��

    InitializeQueue(&line);
    srand((unsigned int)time(0));//rand()�����ʼ��

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
        if (newcustomer(min_per_cust))//���
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
        if (wait_time <= 0 && !QueueIsEmpty(&line))//����
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

//x�ǹ˿͵�����ƽ�����ʱ��
//һ�������й˿͵������򷵻�true�����򷵻�false
bool newcustomer(double x)
{
    if (rand() * x / RAND_MAX < 1)
        return true;
    else
        return false;
}

//when�ǹ˿͵�����ʱ��
//�ú�������һ���˿����ݣ������˿͵��when����ʱ�����ѯʱ��(1-3���)

Item customertime(long when)
{
    Item cust;

    cust.processtime = rand() % 3 + 1;
    cust.arrive = when;

    return cust;
}