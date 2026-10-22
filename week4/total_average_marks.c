#include<stdio.h>
void main()
{
int s1, s2, s3, s4 ,s5,Total=0;
float avg=0;
printf("Enter the subject marks of s1 ,s2 ,s3 ,s4 ,s5:");
scanf("%d%d%d%d%d" ,&s1,&s2,&s3,&s4,&s5);
Total = s1+s2+s3+s4+s5;
printf("\nTotal marks is %d" ,Total);
avg =(float)Total/5;
printf("\nThe average is %f" ,avg);
}
