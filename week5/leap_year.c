#include<stdio.h>
void main()
{
int year=0;
printf("Enter the year:");
scanf("%d" ,&year);
if(year%4==0 && year%100!=0)
printf("\n%d is a leap year", year);
else if(year%400==0)
printf("\n %d is a leap year",year);
else 
printf("\n%d is not a leap year",year);
}
