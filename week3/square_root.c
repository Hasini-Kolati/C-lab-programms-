#include<stdio.h>
#include<math.h>
void main()
{
float num , result=0;
printf("\nEnter the value of x");
scanf("%f" ,&num);
result = sqrt(num);
printf("\nsquare root of %.2fis %.2f" , num ,result);
}
