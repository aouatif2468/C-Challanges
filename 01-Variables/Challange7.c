#include <stdio.h>




float A,B,C,M;

int main()
{

    printf("Bonjour, Ce Programme  pour calculer la moyenne pondérée de trois nombres donnés par l'utilisateur avec les pondérations !\n");
    printf("Entrez le premier nombre : ");
    scanf("%f",&A);
    printf("Entrez le deuxieme nombre : ");
    scanf("%f",&B);
    printf("Entrez le deuxieme nombre : ");
    scanf("%f",&C);
    M=((A*2)+(B*3)+(C*5))/(2+3+5);

    printf("La moyenne pondérée de trois nombres est egale : %f  ",M);
      
    
     
    return 0;
}
