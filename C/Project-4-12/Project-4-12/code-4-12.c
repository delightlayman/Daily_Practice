#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
const int S_PER_M = 60;//һӢ������
const int S_PER_H = 3600;//һСʱ����
const double M_PER_K = 0.62137;//һ����Ӣ����
int main()
{
	double distk, distm;//�ܹ��ľ��루��λ���ＰӢ�
	double rate;//ƽ���ٶ�
	int min, sec;//�ܲ���ʱ�����룩
	int time;//�ܲ���ʱ���룩
	double mtime;//��һӢ����ʱ���룩
	int mmin, msec;//��һӢ����ʱ�����룩

	printf("This program converts your time for a metric race\n\
to a time for running a mile and to your average\n\
speed in miles per hour.\n");
	printf("Please enter,in kilometers,the distance run.\n");
	scanf("%lf", &distk);
	printf("Next enter the time in minutes and seconds.\n");
	printf("Begin by entering the minutes.\n");
	scanf("%d", &min);//����ֿ�����
	printf("Now enter the minutes.\n");
	scanf("%d", &sec);

	time = S_PER_M * min + sec;//ת��Ϊ��
	distm = M_PER_K * distk;//ת��ΪӢ��
	rate = distm / time * S_PER_H;//�ٶ�---Ӣ��/Сʱ
	mtime = (double)time / distm;// ��/Ӣ��
	mmin = (int)mtime / S_PER_M;//ת������/Ӣ�ﲿ��
	msec = (int)mtime % S_PER_M;//ת���� ��/Ӣ�ﲿ��

	printf("You ran %1.2f km (%1.2f miles) in %d min and %d sec.\n", distk, distm, min, sec);
	printf("That pace corresponds to running a mile in %d min,\
%d sec.\nYour average speed was %1.2f mph.\n ", mmin, msec,rate);

	return 0;
}
}