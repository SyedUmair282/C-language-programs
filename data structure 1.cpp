#include<stdio.h>
#include<conio.h>
int main() {
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int *ptr;
	ptr=a;
	int b[10]={1,2,3,4,5,6,7,8,9,10};
	int *ptrr;
	ptrr=b;
	int c[10];
	int *ptrrr;
	ptrrr=c;
	
	
	for(int i=0; i<10; i++)
	{
		*ptrrr=(*ptr++)+(*ptrr++);
		printf("c[%d]=%d\n",i,*ptrrr);
	}
	
	
	

	
	
	
}




