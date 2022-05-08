#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
int main()
{
	int arr[5]={10,11,12,13,14};
 	printf("Enter name of data \n");
 	int svalue;
 	bool found;
 	scanf("%d",&svalue);
 	
 	for(int i=0; i<5; i++)
 	{
 		if(svalue==arr[i])
 		{
 			found=1;
 			break;
		}
		else
		{
			found=0;
		}
	}
	
	if(found==1)
	{
		printf("Data found");
	}
	else
	{
		printf("Data not found");
	}
	
}
