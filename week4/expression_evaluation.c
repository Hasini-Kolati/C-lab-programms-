#include<stdio.h>
void main()
{
int A , B , C , D ,E ,F ,G ,J,i;
printf("\nEnter the values of A B C D E F G i ");
scanf("%d%d%d%d%d%d%d%d" ,&A ,&B ,&C ,&D ,&E ,&F ,&G ,&i);
printf("\n%d" ,A+B*C+(D*E)+F*G);
printf("\n%d" ,A/B*C-B+A*D/3);
printf("\n%d" ,A+++B---A);
J= (i++) + (++i);
printf("\n%d",J);
}
