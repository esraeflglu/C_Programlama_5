#include <stdio.h>
#include <stdlib.h>
#define ESRA 10

int main()
{
    int i,j;
    printf("%4d",'I');
    for(j=1;j<=ESRA;j++)
    {
        printf("%4d",j);
    }
    printf("\n");
    printf("-----------");
    for(i=1;i<=ESRA;i++)
    {
        printf("----");
    }
    printf("\n");
    for(i=1;i<=ESRA;i++)
    {
        printf("%4d",i);
        for(j=1;j<=ESRA;j++)
        {
            printf("%4d",i*j);
        }
        printf("\n");
    }
    return 0;
}
