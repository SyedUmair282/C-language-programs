#include<stdio.h>
#include<conio.h>
int main()
{
	int a,square,cube;
	printf("Enter your number: ");
	scanf("%d",&a);
	
	square=a*a;
	cube=a*a*a;
	
	printf("\n Square is %d",square);
	printf("\n Cube is %d",cube);
	
	getch();
}
