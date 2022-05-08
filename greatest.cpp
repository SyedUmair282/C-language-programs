#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,big;
	printf("Enter the first value :");
	scanf("%d",&a);
	printf("Enter the second value :");
	scanf("%d",&b);
	printf("Enter the third value :");
	scanf("%d",&c);
	printf("Enter the fourth value :");
	scanf("%d",&d);
	printf("Enter the fifth value :");
	scanf("%d",&e);
	big=a;
	if(b>big)
	{
		big=b;
	}

    else if(c>big)
    {
    	big=c;
	}

    else if(d>big)
    {
    	big=d;
	}
	else if(e>big)
	{
		big=e;
	}

    

	printf("The greatest number is %d",big);
	getch();	
	
	
}
