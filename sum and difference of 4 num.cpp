#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,num3,num4,add,subtract;
	
	printf("Enter the first number : ");
	scanf("%d",&num1);
	
	printf("Enter the second number : ");
	scanf("%d",&num2);
	
	printf("Enter the third number : ");
	scanf("%d",&num3);
	
	printf("Enter the fourth number : ");
	scanf("%d",&num4);
	
	add=num1+num2+num3+num4;
	printf("Sum of four numbers = %d \n",add);
	
	subtract=num1-num2-num3-num4;
	printf("Difference of four numbers = %d \n",subtract);
	
	getch();
}
