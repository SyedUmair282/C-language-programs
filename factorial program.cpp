#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter number for factorial of it!!\n");
	scanf("%d",&num);
	int fact=1;
	for(int i=num; i>=1; i--)
	{
		fact = fact*i;
		
	}
	
	
	printf("%d",fact);
}
