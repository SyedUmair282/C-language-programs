#include<stdio.h>
#include<string.h>
int main()
{
	int a[]={1,2,3,4,5,6,7,8,34,4,456,7,7};
	int size;
	size=sizeof(a)/sizeof(a[0]);//size of method gives its operand in term of bytes eg int =4 bytes
	printf("size of array is: %d",size);
}
