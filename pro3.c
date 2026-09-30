#include<stdio.h>
int main()
{
	int sensor[5],i,mini;
	printf("Enterr five readings:");
	for (i=0;i<5;i++)
	{
		scanf("%d",&sensor[i]);
	}
	mini=sensor[0];
	for(i=1;i<5;i++)
	if (sensor[i]<mini)
	{
		mini=sensor[i];
	}
	printf("minimum value=%d",mini);
	return 0;
}
