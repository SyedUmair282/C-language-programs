#include<stdio.h>
#include<string.h>
int main()
/*{
	char name[20], fname[20];
	int rollno,standard,math,english,physics,chemistry,islamiat,obtained,percentage;
	
	printf("Enter your name \n: ");
	scanf("%s",&name);
	printf("Enter your fname \n: ");
	scanf("%s",&fname);
	printf("Enter your roll no \n: ");
	scanf("%d",&rollno);
	printf("Enter your standard \n: ");
	scanf("%d",&standard);
	printf("Enter maths marks \n: ");
	scanf("%d",&math);
	printf("Enter english marks \n: ");
	scanf("%d",&english);
	printf("Enter physics marks \n: ");
	scanf("%d",&physics);
	printf("Enter chemistry marks \n: ");
	scanf("%d",&chemistry);
	printf("Enter islamiat marks \n: ");
	scanf("%d",&islamiat);
	
	obtained=math+english+physics+chemistry+islamiat;
	percentage=obtained*100/500;
	
	printf("------------MARKSHEET------------\n");
	
	printf("your name is %s \n", name);
	printf("your father name is %s \n", fname);
	printf("your roll number is %d \n", rollno);
	printf("your standard is %d \n", standard);
	printf("your obtained marks is out of 500 is %d \n", obtained);
	printf("your percentage is %d \n", percentage);
	
	if (percentage>=90)
	{
		printf("\n your grade is: A++");
	}
	else if(percentage>=80)
	{
		printf("\n your grade is: A+");
	}
	else if(percentage>=70)
	{
		printf("\n your grade is: A");
	}
	else if(percentage>=60)
	{
		printf("\n your grade is: B");
	}
	else if(percentage>=50)
	{
		printf("\n your grade is: C");
	}
	else if(percentage>=40)
	{
		printf("\n your grade is: D");
	}
	else if(percentage>=33)
	{
		printf("\n your grade is: E");
	}
    else
    {
    	printf("\n you are failed");
	}
	
	
	
	if (percentage>=90)
	{
		printf("\n Remarks: Excellent");
	}
	else if(percentage>=80)
	{
		printf("\n Remarks: VERY GOOD");
	}
	else if(percentage>=70)
	{
		printf("\n Remarks: GOOD");
	}
	else if(percentage>=60)
	{
		printf("\n Remarks: VERY FAIR");
	}
	else if(percentage>=50)
	{
		printf("\n Remarks: FAIR");
	}
	else if(percentage>=40)
	{
		printf("\n Remarks: POOR");
	}
	else if(percentage>=33)
	{
		printf("\n Remarks: VERY POOR");
	}
    else
    {
    	printf("\n Remarks: NEEDS IMPROVEMENT");
	}
	
	int supply=0;
	if(math<33)
	{
		printf("\n you have supply in math");
		supply++;
	}
	if(english<33)
	{
		printf("\n you have supply in english");
		supply++;
	}
	if(physics<33)
	{
		printf("\n you have supply in physics");
		supply++;
	}
	if(chemistry<33)
	{
		printf("\n you have supply in chemistry");
		supply++;
	}
	if(islamiat<33)
	{
		printf("\n you have supply in islamiat");
		supply++;
	}*/
{
	
	char name[20];
	char fname[20]; 
	int rollno,standard,math,physics,chemistry,islamiat,english,obtained,percentage;
	printf("enter your name: \n");
	scanf("%s",&name);
	printf("enter your father name: \n");
	scanf("%s",&fname);
	printf("enter your rollno: \n");
	scanf("%d",&rollno);
	printf("enter your standard: \n");
	scanf("%d",&standard);
	printf("enter your math marks: \n");
	scanf("%d",&math);
	printf("enter your physics marks: \n");
	scanf("%d",&physics);
	printf("enter your chemistry marks: \n");
	scanf("%d",&chemistry);
	printf("enter your islamiat marks: \n");
	scanf("%d",&islamiat);
	printf("enter your english marks: \n");
	scanf("%d",&english);
	obtained=math+english+physics+chemistry+islamiat;
	percentage=obtained*100/500;
	
	printf("------------------MARKSHEET--------------------\n");
	
	printf("your name is: %s \n",name);
	printf("your father name is \n: %s",fname);
	printf("your rollno is: %d \n",rollno);
	printf("your standard is: %d \n",standard);
	printf("your obatained marks is: %d \n",obtained);
	printf("your percentage is: %d \n",percentage);
	
	if(percentage>=90)
	{
		printf("your grade is A++ \n");
	}
	else if(percentage>=80)
	{
		printf("your grade is A+ \n");
	}
	else if(percentage>=70)
	{
		printf("your grade is A \n");
	}
	else if(percentage>=60)
	{
		printf("your grade is B \n");
	}
	else if(percentage>=50)
	{
		printf("your grade is C \n");
	}
	else if(percentage>=45)
	{
		printf("your grade is D \n");
	}
	else
	{
		printf("you are fail \n");
	}
	
	
	if (percentage>=90)
	{
		printf("\n Remarks: Excellent");
	}
	else if(percentage>=80)
	{
		printf("\n Remarks: VERY GOOD");
	}
	else if(percentage>=70)
	{
		printf("\n Remarks: GOOD");
	}
	else if(percentage>=60)
	{
		printf("\n Remarks: VERY FAIR");
	}
	else if(percentage>=50)
	{
		printf("\n Remarks: FAIR");
	}
	else if(percentage>=40)
	{
		printf("\n Remarks: POOR");
	}
	else if(percentage>=33)
	{
		printf("\n Remarks: VERY POOR");
	}
    else
    {
    	printf("\n Remarks: NEEDS YOUR PARENTS ");
	}
	

	
	
	
	
	
}

