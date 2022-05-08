#include<stdio.h>
#include<conio.h>
int main()
{
	int a=20;
	int *pr;
	int **ptr;
	pr=&a;
	ptr=&pr;
	printf("%u \n",pr);//address of variable a
	printf("%u \n",&a);//same as above
	printf("%u \n",*pr);//value of "a" because pr=&a; then *pr=a; because & is removed and * is appear on pr like that *pr
	printf("%u \n",ptr);
	printf("%u \n",**ptr);
}
