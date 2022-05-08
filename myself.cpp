#include<stdio.h>
#include<conio.h>


	/*int number1,number2,number3,number4,greater;
	
	printf("Enter your number: ");
	scanf("%d",&number1);
	printf("Enter your number: ");
	scanf("%d",&number2);
	printf("Enter your number: ");
	scanf("%d",&number3);
	printf("Enter your number: ");
	scanf("%d",&number4);
	
	greater=number1;
	if(number2>greater)
	{
		greater=number2;
	}
	if(number3>greater)
	{
		greater=number3;
	}
	if(number4>greater)
	{
		greater=number4;
	}
	
	printf("greater number is %d",greater);
	
    int days,weeks,years;
    int daysInweek=7;
    int daysInyear=365;
    printf("Enter the days: ");
    scanf("%d",&days);
    weeks=days/daysInweek;
    years=days/daysInyear;
    printf("weeks are %d",weeks);
    printf("years are %d",years);
    
    getch();*/
   /* int age,height;
    printf("Enter the age: ");
    scanf("%d",&age);
    printf("Enter the height: ");
    scanf("%d",&height);
    
    if(age >= 18)
    {
    	if(height >= 5)
    	{
    		printf("You are selected");
		}
		else if(height = 4.8)
		{
			printf("next test will be conducted soon");
		}
		
	}
	else
	{
		printf("Better luck next time");
	}
	getch();*/

int main()
{

float a;
float b;
char operation;
float result;

printf("enter first number\n");
scanf("%f",&a);

printf("enter the operation\n");
scanf(" %c",&operation);

printf("enter second number\n");
scanf("%f",&b);

switch(operation)
{

case'+':
result=a+b;
printf("%f",result);
break;

case'-':
result=a-b;
printf("%f",result);
break;

case'*':
result=a*b;
printf("%f",result);
break;

case'/':
result=a/b;
printf("%f",result);
break;

default:
printf("operator is not valid:");
}



}
    
    
    
    
    
    
	

