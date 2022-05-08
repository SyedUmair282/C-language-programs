#include<stdio.h>
#include<conio.h>>
int main()
{
	
	//int a[5];
	//int b[5]={1,2,3,4,5};
	//int c[5];
	
	
	//int *ptr;
	//ptr=a;
	//printf("%u",*ptr);int numArray[10];
	int numArray[10];
	int i, sum = 0;
	int *ptr;
    ptr = numArray;
	printf("\nEnter 10 elements : ");
	
	//Accept the 10 elements from the user in the array.
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &numArray[i]);
	}
	
	//address of first element


	//fetch the value from the location pointer by pointer variable.
	for (i = 0; i < 10; i++) 
	{
		sum = sum + *ptr;
		ptr++;
	}
   
	printf("The sum of array elements : %d", sum);
   
	getch();
}
	
	

