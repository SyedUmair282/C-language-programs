#include<stdio.h>
#include<conio.h>
int main()
{
	int age[3];
	int i,sum=0;
	for(i=0; i<3; i++)
	{
		printf("Enter the age %d \n",i);
		scanf("%d",i);
	}
	
	
	for(i=0; i<3; i++)
	{
		sum = sum + age[i];
	}
	printf("the sum is %d \n",sum);

}
