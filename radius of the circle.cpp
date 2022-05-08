#include<stdio.h>
#include<conio.h>
int main()
{
	float radius,diameter,area,circumference;
	printf("Enter the radius of a circle: ");
	scanf("%f",&radius);
	
	area=3.14*(radius*radius);
	diameter=2*radius;
	circumference=2*3.14*radius;
	
	printf("\n diameter of a circle is: %f",diameter);
	printf("\n area of the circle is: %f",area);
	printf("\n circumference of the circle is: %f",circumference);
	
	getch();
}
