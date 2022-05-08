#include<stdio.h>
#include<conio.h>
//func with aurguements and return value//
int sum(int a , int b);
int main()
{
	int num,num2;
	num=sum(4,5);
	printf("Sum result is %d ",num);
}
int sum(int a , int b)
{
	int add;
	add=a+b;
	add=a*b;
	return add;
}
