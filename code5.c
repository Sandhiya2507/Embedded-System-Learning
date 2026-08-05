#include<stdio.h>
int main()
{ 
	int swival;
	printf("Enter the switch value:");
	scanf("%d",&swival);
	{ if (swival==1)
		printf("The LED is on");
		else 
			printf("The LED is off");
	}
	return 0;
}
