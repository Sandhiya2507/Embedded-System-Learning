#include <stdio.h>
int larger(int*p,int*q)
{
if (*p > *q)
printf("Larger num is %d",*p);
else
printf("Largerr num is %d",*q);
}
int main()
{
int a=47;
int b=38;
larger(&a,&b);
return 0;
}

