#include<stdio.h>
int main()
{
	int colnum;
	printf("selecct an LED colour 1.Red,2.green,3.blue:");
	scanf("%d",&colnum);
	
		switch (colnum){
	case 1:
			printf("The LED colour is Red");
			break;
	case 2:
			printf("The LED colour is green");
			break;
	case 3:
			printf("The LED colour is blue");
			break;
	default:
			printf("There is no choice");
	}
	return 0;
}
           		
