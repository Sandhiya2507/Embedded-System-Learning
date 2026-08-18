#include<stdio.h>


int main() {
	int sen1,sen2,sen3;
	int average;


	printf("Enter sensor 1 value: ");
	scanf("%d",&sen1);


	printf("Enter sensor 2 value: ");
	scanf("%d",&sen2);

	printf("Enter sensor 3 value: ");
	scanf("%d",&sen3);

	average = (sen1+sen2+sen3) / 3;

	printf("the average value is %d\n",average);

	return 0;
}
	

