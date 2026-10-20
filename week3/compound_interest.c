#include<stdio.h>
#include<math.h>
void main()
{
float p , r , t , A ,CI;
printf("Enter principal amount , rate of interest  time: ");
scanf("%f%f%f", &p,&r ,&t);
A= p*pow(1+(float)r/100,t);
CI = A-p;
printf("\nThe compound interest is %.2f" , CI);
}
