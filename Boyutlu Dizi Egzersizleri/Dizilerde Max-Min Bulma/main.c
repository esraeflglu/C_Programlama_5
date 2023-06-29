#include <stdio.h>
#include <stdlib.h>
#define ESRA 4

int main()
{
    int i;
    int max,min;
    int dizi[ESRA];
    printf("Lutfen %d kadar deger giriniz\n",ESRA);
    for(i=0;i<ESRA;i++)
    {
        scanf("%d",&dizi[i]);
    }
    max=min=dizi[0];
    for(i=1;i<ESRA;i++)
    {
        if(dizi[i]>max)
        {
            max=dizi[i];
        }
        if(dizi[i]<min)
        {
            min=dizi[i];
        }
    }

    printf("MAXIMUM DEGER : %d\n",max);
    printf("MINIMUM DEGER : %d\n",min);
    return 0;
}
