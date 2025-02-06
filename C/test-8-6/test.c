#include <stdio.h>
#include <stdlib.h>


int main()
{
    int zero, one, limit;

    while (scanf("%d %d %d", &zero, &one, &limit) != EOF)
    {
        int count = 0;//稳定数组计数

        //数组枚举与比较
        int s = zero + one, ssave = s;//数组项数
        long long num = 1, numsave;
        while (ssave--)
            num *= 2;//数组存储的最大数值+1

        num = num - 1;

        int i = 0, j = 0, k = 0, l = 0;
        int zeroc = 0, onec = 0;//0,1计数

        while (num--)
        {
            numsave = num;

            int arr[s];

            for (i = s - 1; i >= 0; i--)//数组赋值
            {
                arr[i] = numsave % 2;
                numsave /= 2;
            }

            for (i = 0; i < s; i++)
            {
                if (arr[i] == 0)
                    zeroc++;
                else
                    onec++;
            }

            if (zeroc == zero && onec == one)//符合前两条件的数组
                count++;

            for (j = 0; j < s - limit; j++)
            {
                for (i = 0; i < limit; i++)//筛选不合掉第三条件的数组
                {
                    if (arr + i == 0)
                        l++;
                    else
                        k++;
                    if (l == limit || k == limit)
                        count--;
                }
            }
            k = 0;
            l = 0;
        }

        printf("%d\n", count);
    }
    

    return 0;
}


