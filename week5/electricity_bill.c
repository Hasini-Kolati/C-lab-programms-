#include<stdio.h>
void main()
{
int units;
float bill;
printf("Enter the units consumed:");
scanf ("%d" ,&units);
if(units<=100)
bill=units*1.5;
else if(units<=200)
bill=units*2.5;
else if(units<=500)
bill=units*4;
else
bill=units*6;
printf("The total bill amount is %.2f",bill);
}
