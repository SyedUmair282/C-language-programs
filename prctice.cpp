#include<stdio.h>
#include<conio.h>
int main()
{
	/*int a,b,sum;
	printf("Enter the numbers:\n");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("The sum result is %d",sum);
	getch();*/
	/*int a,b,c;
	printf("Enter the first num");
	scanf("%d",&a);
	printf("Enter the second num");
	scanf("%d",&b);
	printf("Enter the third num");
	scanf("%d",&c);
	
	if(a>b)
	{
		printf("%d is the largest");
	}
	else if(b>c)
	{
		printf("%d is the largest");
	}
	else if(c>a)
	{
		printf("%d is the largest");
	}
	else
	{
		printf("invalid");
	}*/
	/*int a;
	printf("Enter the numbers:\n");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("The number is even");
	}
	else
	{
		printf("The number is odd");
	}*/
	/*int n,i,ans=0;
	printf("Enter the number:\n");
	scanf("%d",&n);
	for(i=2; i<=n/2; i++)
	{
		if(n%i==0)
		{
			ans=1;
			break;
		}
	}
	if(n==1)
	{
		printf("1 is neither a prime nor a composite number");
	}
	else
	{
		if(ans==0)
		{
			printf("%d is a prime",n);
		}
		else
		{
			printf("%d is not prime",n);
		}
	}*/	
	/*int i;
	for(i=1; i<=10; i++)
	{
		printf("%d\n",i);
		
	}*/
	/*int x,y;
	for(x=0; x<3; x++)
	{
		for(y=0; y<3; y++)
		{
			printf("%d\n",y);
		}
		printf("y-end\n");
	}
	printf("x-end\n");*/

    /*int base=4,exponent=6,c,d;
    c=1;
    d=1;
    while(c<=exponent) 
	{
	    d=d*base;
	    c++;
    }
    printf("%d ^ %d = %d",base,exponent,d);*/
    /*int i=0,num=20;
    printf("List of even numbers\n");
    while(i<num)
    {
    	i=i+2;
    	printf("%d\n",i);
    }*/
    /*int a=0,n=20;
    do
    {
    	printf("%d\n",a);
    	a=a+2;
	}
	while(a<=n);*/
	/*int base=4,exponent=3,c=1,d=1;
	do
	{
		
		d=d*base;
		c++;
			
	}
	while(c<=exponent);
	printf("%d",d);*/
	/*int age[5];
	int i,sum=0,n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	for(i=0; i<5; i++)
	{
	    printf("Enter the age %d \n",i);
	    scanf("%d",&age[i]);	
	}
    for(i=0; i<5; i++)
    {
    	sum=sum+age[i];
	}
	printf("The sum result is %d",sum);*/
	/*int i,j;
	
	for(i=1; i<=3; i++)
	{
		for(j=1; j<=i; j++)
		{
		
			printf("*");
		}
		   printf("\n");
	    
	}*/
    int i,j,n;
    printf("Enter the rows \n");
    scanf("%d",&n);
	
	for(i=1; i<=3; i++)
	{
		for(j=10; j<3; j++)
		{
			printf(" ");
		}
		
		for(j=1; j<=i; j++)
		{
		
			printf("*");
		}
		   printf("\n");
	    
	}
	/*int num1[2][3];
	int num2[2][3];
	int rows,colomns,sum;
	
	for(rows=0; rows<2; rows++)
	{
		for(colomns=0; colomns<3; colomns++)
		{
			printf("Enter the num1 AND num2 rows and colomns: \n");
			scanf("%d %d",&num1[rows][colomns],&num2[rows][colomns]);
		}
	}
	printf("The result of sum is...\n");
	
	for(rows=0; rows<2; rows++)
	{
		for(colomns=0; colomns<3; colomns++)
		{
			sum=num1[rows][colomns]+num2[rows][colomns];
			printf("[%d]+[%d]=%d\n",rows,colomns,sum);
		}
	}*/
	
	
    
    
    

}

	


	



















