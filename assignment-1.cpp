#include<stdio.h>
int main()
{
	//transverse
	/*int LA[] = {1,3,5,7,8};
	int item=10, k=3, n=5;
	int i=0, j=n;
	printf("The original arrays elements are: \n");
	for(i=0; i<n; i++)
	{
		printf("LA[%d]=%d\n",i,LA[i]);
	}
	//insertion
	n = n + 1; //n=6 , j=5, k=3
    while( j >= k) //j is for array k under (k) means 3 tk humne values ko kaam krna hai mtlb peeche. 
	{
    LA[j+1] = LA[j]; //is location pr = wali value set hojaye
    j = j - 1;
    }
    LA[k] = item;
    printf("The array elements after insertion :\n");
    for(i = 0; i<n; i++) 
	{
        printf("LA[%d] = %d \n", i, LA[i]);
    }*/
    //deletion
    /*int LA[] = {1,3,5,7,8};
	int k=3, n=5;
	int i, j;
	printf("The original arrays elements are: \n");
	for(i=0; i<n; i++)
	{
		printf("LA[%d]=%d\n",i,LA[i]);
	}
	j=k;
	while(j<n)
	{
		LA[j-1] = LA[j]; 
    	j = j + 1;
	}
	n = n-1;
	printf("The arrays elements after deletion are: \n");
	for(i=0; i<n; i++)
	{
		printf("LA[%d]=%d\n",i,LA[i]);
	}*/
	//searching
	/*int LA[] = {1,3,5,7,8};
	int  item=5, n=5;
	int i, j=0;
	printf("The original arrays elements are: \n");
	for(i=0; i<n; i++)
	{
		printf("LA[%d]=%d\n",i,LA[i]);
	}
	while(j<n)
	{
		if(LA[j]==item)
		{
			break;
		}
		j=j+1;
	}
	printf("Found element %d at position %d\n",item,j+1);*/
	//updation
	int LA[] = {1,3,5,7,8};
	int k=3, n=5 , item = 10;
	int i, j;
	printf("The original arrays elements are: \n");
	for(i=0; i<n; i++)
	{
		printf("LA[%d]=%d\n",i,LA[i]);
	}
	LA[k-1]=item;
	printf("The arrays elements after updation are: \n");
	
	for(i=0; i<n; i++)
	{
		printf("LA[%d]=%d\n",i,LA[i]);
	}
	
    
}
