#include<stdio.h>
int main()
{ 
	int num;
	printf("Mark of a student:");
	scanf("%d",&num);
	{ if (num>=45)
		printf("passed the exam");
		else 
			printf("Failed in the exam");
	}
	return 0;
}
