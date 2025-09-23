#include <stdio.h>



float A,B,S,Sus,Mu,D;

int main()
{

    printf("Bonjour, Ce Programme pour calculer et afficher des resultats !\n");
    printf("Entrez le premier nombre : ");
    scanf("%f",&A);
    printf("Entrez le deuxieme nombre : ");
    scanf("%f",&B);
         S=A+B;
         Sus=A-B;
         Mu=A*B;
    printf("La somme de deux nombre est : %.2f \n",S);
    printf("La sustraction de deux nombre est : %.2f\n",Sus);
    printf("La multipication de deux nombre est : %.2f \n",Mu);

    if (B==0){
     printf("STP B est egale 0 entrez une valeur def de zero. \n");
    }else {
         D=A/B;
         printf("La division de deux nombre est : %.2f \n ",D);

               }
     
    return 0;
}
