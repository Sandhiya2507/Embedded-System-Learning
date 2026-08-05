#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter a number:");
	scanf("%d",&num2);
	for (num1=1;num1<=10;num1++)
	{
		printf("%d*%d=%d\n",num1,num2,num1*num2);
	}
	return 0;
}
