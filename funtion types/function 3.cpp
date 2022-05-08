#include<stdio.h>
#include<conio.h>
//func with argue but no return value//
void sum(int a, int b);
int main()
{
	sum(4,5);
}
void sum(int a, int b)
{
	int add;
	add=a+b;
	printf("Sum result is %d",add);
}
