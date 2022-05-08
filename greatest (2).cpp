#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b,c, big;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Enter Third number : ");
	scanf("%d",&c);
	if(a>b)
	{
		big=a;
	}
	else if(b>c)
	{
		big=b;
	}
	else if(c>a)
	{
		big=c;
	}

	printf("Biggest of the three number is %d",big);
	getch();

}
	

