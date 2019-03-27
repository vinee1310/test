#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int sam[]={1,0,1,1,0,0,1,1,0,1};
    int i, rise=0,fall=0, level=0 ;
    int sam[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&sam[i]);
    }

    for(i=0;i<=10;i++)
    {
        if((sam[i]==0)&&(sam[i+1]==1))
        {
            printf("sample %d RISE EDGE DETECTED\n",i);
             rise=rise+1;
        }
        else if ((sam[i]==1)&&(sam[i+1]==0))
        {
            printf("sample %d FALL EDGE DETECTED\n",i);
            fall=fall+1;
        }

        else if((sam[i]==1)&&(sam[i+1]==1))
        {
            printf("sample %d LEVEL\n",i);
            level=level+1;
            }}
        printf("number of rise=%d\n",rise);
        printf("number of fall=%d\n",fall);
        printf("number of level=%d\n",level);
return 0;
}


