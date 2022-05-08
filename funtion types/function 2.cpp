#include<stdio.h>
#include<conio.h>
//func with no argument but return value//
int sum();
int main()
{
	int num;
	num=sum();
	printf("Sum result is %d",num);
}
int sum()
{
	int add,a,b;
	a=4;
	b=5;
    add=a+b;
    return add;
}
