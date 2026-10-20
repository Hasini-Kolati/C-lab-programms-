#include<stdio.h>
void main()
{
float P , t ,r , Si=0;
printf("Enter principal amount , time , rate of interest:");
scanf("%f%f%f",&P ,&t ,&r);
Si=(P*t*r)/100;

printf("\nsimple interest is %f" , Si);
}
