#include<stdio.h>
int main()
{
        int sensor[5],i,max;
        printf("Enterr five readings:");
        for (i=0;i<5;i++)
        {
                scanf("%d",&sensor[i]);
        }
        max=sensor[0];
        for(i=1;i<5;i++)
        if (sensor[i]>max)
        {
                max=sensor[i];
        }
        printf("maximum value=%d",max);
        return 0;
}
