#include<stdio.h>
#include<conio.h>
#include<string.h>
void add(int a , int b)
{
	int c=a+b;
	printf("The addition result is: %d \n",c);
}
void subtract(int a , int b)
{
	int c=a-b;
	printf("The subtraction result is: %d \n",c);
}
void division(int a , int b)
{
	int c=a/b;
	printf("The division result is: %d \n",c);
}
void multiply(int a , int b)
{
	int c=a*b;
	printf("The multiplication result is: %d \n",c);
}
int main()
{
	char operatr;
	char confirm[10];
	int a,b;
		
do
{
	printf("Enter the operatr :\n ");
	scanf("%s",&operatr);
	
	printf("Enter the value a :\n ");
	scanf("%d",&a);
	
	printf("Enter the value b :\n ");
	scanf("%d",&b);

	
	if(operatr=='+')
	{
		add(a,b);
    }
    else if(operatr=='-')
	{
		subtract(a,b);
	}
	else if(operatr=='/')
	{
		division(a,b);
	}
	else if(operatr=='*')
	{
		multiply(a,b);
	}
	else
	{
		printf("invalid result");
	}
	
	printf("Do you want to continue your program \n");
	scanf("%s",&confirm);
}
    while(strcmp(confirm,"yes")==0);

}
/*int main()
{
	float a;
	float b;
	char operatr;
	float result;
	printf("\n Enter the value of a: ");
	scanf("%f",&a);
	printf("\n Enter the value of b: ");
	scanf("%f",&b);
	printf("\n Enter the operation: ");
	scanf("%c",&operatr);
	
	switch(operatr)
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
		
		printf("invalid");
		break;
		
		
     }*/
		
		

	
	
	
	
	
	
	













