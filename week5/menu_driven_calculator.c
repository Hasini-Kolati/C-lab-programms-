#include<stdio.h>
void main()
{
float a ,b;
int x;
printf("Enter the two numbers");
scanf("%f%f" ,&a,&b);
printf("\n1.addition");
printf("\n2. subtraction");
printf("\n3. multiplication");
printf("\n4. division");
printf("\nEnter the choice:");
scanf("%d" ,&x);
switch(x)
{
case 1: 
       printf("\nans=%.2f",a+b);
       break;
case 2:
       printf("\nans=%.2f" ,a-b);
       break; 
case 3:  
       printf("\nans=%.2f" ,a*b);
       break;
case 4:
       if(b==0)
       {
       printf("\nDivision is not possible");
       break;
       }
       else
       {
       printf("\nans=%.2f" ,a/b);
       break;
       }
default: 
        printf("\ninvalid");
}        
}
