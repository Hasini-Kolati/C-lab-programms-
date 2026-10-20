#include<stdio.h>
#include<math.h>
void main()
{
float a , b , c ,s=0, area=0;
printf("Enter the values of a b c:");
scanf("%f%f%f" ,&a, &b ,&c);
s =(a+b+c)/2;
area = sqrt(s*(s-a)*(s-b)*(s-c));
printf("The area of triangle is %f" ,area);
}
