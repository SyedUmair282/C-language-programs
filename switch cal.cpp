#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,answer;
	char operation;
	
	printf("Enter the value of a \n");
	scanf("%f",&a);
	printf("Enter the value of b \n");
	scanf("%f",&b);
	printf("Enter the operation \n");
	scanf("%s",&operation);
   do
   {
   	
	switch(operation)
	{
		case'+':
		answer=a+b;
		printf("The answer is %f",answer);
		break;
		case'-':
		answer=a-b;
		printf("The answer is %f",answer);
		break;
		case'/':
		answer=a/b;
		printf("The answer is %f",answer);
		break;
		case'*':
		answer=a*b;
		printf("The answer is %f",answer);
		break;
		
		default:
		{
			printf("Error");
		}
	}
	printf("do u want to conti your pro");
    }
    while(strcmp,'yes'==0);
	
	
}
