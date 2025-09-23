#include <stdio.h>

float x1,x2,y1,y2,z1,z2,D;

int main()
{
printf("Bonjour, Ce Programme pour calculer du distance entre deux points dans un espace 3D!\n");
printf("Entrez le premier point (x1,x2) : ");
scanf("%f %f %f",&x1,&y1,&z1);
printf("Entrez le deuxieme point (x1,x2) : ");
scanf("%f %f %f",&x2,&y2,&z2);

D=sqrt(pow((x2-x1),2) + pow((y2-y1),2)+ pow ((z2-z1),2));

printf("Alor la distance entre les deux points dans un espace 3D est : %.2f",D);
return 0;
}