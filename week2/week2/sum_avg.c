#include<stdio.h>
void main()
{
int a , b ,c , sum =0;
float avg=0;
printf("Enter the values of a , b ,c:");
scanf("%d%d%d" ,&a ,&b ,&c);
sum = a+b+c;
printf("\nThe sum is %d" ,sum);
avg =(float)sum/3;
printf("\nThe average is %f", avg);
}
