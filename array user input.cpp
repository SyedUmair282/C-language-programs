#include<stdio.h>
#include<conio.h>
int main()
{
	int age[2][2];
	int row,coloumn,sum=0;
	
	/*age[0][0]=2;
	age[0][1]=3;
	age[1][0]=4;
	age[1][1]=5;*/
	/*printf("enter");
	scanf("%d",&age[0][1]);*/
	
	/*printf("%d",age[0][1]);*/
	for(row=0; row<2; row++)
	{
		for(coloumn=0; coloumn<2; coloumn++)
		{
			/*printf("%d \n",age[row][coloumn]);*/
			printf("Enter the numbers: \n",age[row][coloumn]);
			scanf("%d",&age[row][coloumn]);
			sum=sum+age[row][coloumn];
		}
		
	}

	printf("the sum is %d",sum);

}
