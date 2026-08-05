#include<stdio.h>
int main()
{ 
	int tempt;
	printf("Enter the tempture:");
	scanf("%d",&tempt);
	{ if (tempt<20)
		printf("temperature is cold");
		else if (tempt>35)
			printf("high temperature");
		else
			printf("normal temperature");
	}
	return 0;
}
