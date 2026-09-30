#include <stdio.h>
int main()
{
	int senval[5],i;
	
	printf("Enter five readings:\n");
	for(i=0;i<5;i++)
	
	{
		scanf("%d",&senval[i]);
	}
		printf("five readings are:\n");
	
		for(i=0;i<5;i++)
		{
			printf("%d\n",senval[i]);
		}
		return 0;
}



