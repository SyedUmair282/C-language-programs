#include<stdio.h>
#include<conio.h>
int main()
{
    int minutes,hours,totalminutes,totalseconds;
	int minutesAnhour=60;
	int secondsAnhour=3600;
	
	printf("Enter an hours: ");
	scanf("%d",&hours);
	printf("Enter an minutes: ");
	scanf("%d",&minutes);
	
	totalminutes=(hours*minutesAnhour)+minutes;
	totalseconds=(hours*secondsAnhour)+60*minutes;
	
	printf("Minutes are: %d \n",totalminutes);
	printf("Seconds are: %d \n",totalseconds);
	
	getch();
	/*int totalminutes,totalhours,totalseconds,days,weeks,years;
	int minutesAnhour=60;
	int hoursAnday=24;
	int daysAnyear=365;
	int daysAnweek=7;
	int secondsAnminutes=60;
	
	printf("Enter the days: ");
	scanf("%d",&days);*/
	
   /*conversion*/
	
	/*years=days/365;
    weeks=days/7;
	totalminutes=(minutesAnhour*hoursAnday*days);
	totalhours=hoursAnday*days;
	totalseconds=minutesAnhour*hoursAnday*secondsAnminutes*days;
	
    printf("years is %d \n",years);
	printf("weeks is %d \n",weeks);	
	printf("hours is %d \n",totalhours);
	printf("minutes is %d \n",totalminutes);
	printf("seconds is %d \n",totalseconds);
	
    getch();*/
	
}
