#include<stdio.h>
#include<conio.h>

/*void Displaymessage()
{
	printf("Welcome to c programming ");
}
void Add()
{
   int a=1;
   int b=3;
   int c=a+b;
   printf("the sum is %d",c);
}*/
/*int subtraction(int a , int b) //formal argument///   
{
    int c = a - b;
	printf("The value is %d",c);
}*/
int square(int a)
{
	int b=a*a;
	printf("square of %d is %d",a,b);
}


int main()
{
   	/*Displaymessage(); // calling function//
	printf("\n");
	Displaymessage();
	Add();*/
	//subtraction(4,2);//
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	square(num);
	
	
	
	
}
