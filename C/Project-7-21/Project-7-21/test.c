#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** fizzBuzz(int n);

int main()
{
    int n;

    scanf("%d", &n);
    fizzBuzz(n);

    return 0;
}

char** fizzBuzz(int n) {
    char** answer = (char**)malloc(sizeof(char*) * n);

    if (answer == NULL)
    {
        fprintf(stderr, "\nCan't allocate memory!\n");
        exit(1);
    }

    for (int i = 0; i < n; i++)
        answer[i] = (char*)malloc(sizeof(char) * 9);//×Ö·ûÊý+1£¬¼´8+1=9
  
    int j = 1;

    while (j <= n)
    {
        if (j % 15 == 0)
            sprintf(answer[j - 1], "FizzBuzz");
        else if (j % 3 == 0)
            sprintf(answer[j - 1], "Fizz");
        else if (j % 5 == 0)
            sprintf(answer[j - 1], "Buzz");
        else
            sprintf(answer[j - 1], "%d", j);

        printf("answer[%d]=%-4s\n",j, answer[j-1]);
        j++;
    }
    return answer;
}