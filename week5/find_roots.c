#include<stdio.h>
#include<math.h>
void main()
{
float a , b , c ,ans1,ans2 ,D;
printf("Enter a , b ,c:");
scanf("%f%f%f", &a,&b,&c);
D = b*b-4*a*c;
if(D>=0&&a!=0)
{
ans1= (-b+sqrt(D))/(2*a);
ans2= (-b-sqrt(D))/(2*a);
printf("The roots of the quadratic equation are %.2f and %.2f" ,ans1 ,ans2);
}
else 
{
printf("No real roots");
}
}
