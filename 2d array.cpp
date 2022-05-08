#include<stdio.h>
#include<conio.h>
int main()
{
	int num1[2][3]={{1,2,3},{4,5,6}};
	int num2[2][3]={{7,8,9},{10,11,12}};
	int rows,columns,sum;
	
	printf("Sum of entered matrices: \n");
	
	for(rows=0; rows<2;  rows++)
	{
		for(columns=0; columns<3;  columns++)
		{
			sum=num1[rows][columns]+num2[rows][columns];
			printf("[%d]+[%d]= %d \n",rows,columns,sum);
			
		}
	}
	getch();
}
