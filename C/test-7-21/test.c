#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ** fizzBuzz(int n);

int main()
{
    int n;
    scanf("%d",&n);
    fizzBuzz(n);
    return 0;
}

char ** fizzBuzz(int n){
    char ** ps=(char **)malloc(sizeof(char*)*n);

     if(ps==NULL)
    {
        fprintf(stderr,"\nCan't allocate memory!\n");
        exit(1);
    }
    
    char * s=(char*)malloc(sizeof(char)*9);//字符数+1，即8+1=9

     if(s==NULL)
    {
        fprintf(stderr,"\nCan't allocate memory!\n");
        exit(1);
    }

    int i=1;

    while(i<=n)
    {
        if(i%15==0)
            sprintf(s,"FizzBuzz");
        else if(i%3==0)
            sprintf(s,"Fizz");
        else if(i%5==0)
            sprintf(s,"Buzz");
        else
            sprintf(s,"%d",i);

        ps[i-1]=s;
        printf("%-4s\n",ps[i-1]);
        i++;
    }
    return ps ;
}