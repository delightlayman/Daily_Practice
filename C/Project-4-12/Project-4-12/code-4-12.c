#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
#include <stdio.h>
const int S_PER_M = 60;//一英里秒数
const int S_PER_H = 3600;//一小时秒数
const double M_PER_K = 0.62137;//一公里英里数
int main()
{
	double distk, distm;//跑过的距离（单位公里及英里）
	double rate;//平均速度
	int min, sec;//跑步用时（分秒）
	int time;//跑步用时（秒）
	double mtime;//跑一英里用时（秒）
	int mmin, msec;//跑一英里用时（分秒）

	printf("This program converts your time for a metric race\n\
to a time for running a mile and to your average\n\
speed in miles per hour.\n");
	printf("Please enter,in kilometers,the distance run.\n");
	scanf("%lf", &distk);
	printf("Next enter the time in minutes and seconds.\n");
	printf("Begin by entering the minutes.\n");
	scanf("%d", &min);//分秒分开输入
	printf("Now enter the minutes.\n");
	scanf("%d", &sec);

	time = S_PER_M * min + sec;//转换为秒
	distm = M_PER_K * distk;//转换为英里
	rate = distm / time * S_PER_H;//速度---英里/小时
	mtime = (double)time / distm;// 秒/英里
	mmin = (int)mtime / S_PER_M;//转换：分/英里部分
	msec = (int)mtime % S_PER_M;//转换： 秒/英里部分

	printf("You ran %1.2f km (%1.2f miles) in %d min and %d sec.\n", distk, distm, min, sec);
	printf("That pace corresponds to running a mile in %d min,\
%d sec.\nYour average speed was %1.2f mph.\n ", mmin, msec,rate);

	return 0;
}
}