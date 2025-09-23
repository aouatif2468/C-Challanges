#include <stdio.h>

int A,B;
float S,T;
int main() {

printf("\n Cette exercie pour calculer la somme  de deux valeurs \n");
printf("Entrez les deux valeurs A et B : ");
scanf("%d %d", &A, &B);


S=A+B;
if (A==B){
    T=3*S;
    printf("La triple de la somme est :%.2f ",T);
}else {
    printf("La somme de deux nombre est  :%.2f",S);
}

return 0;
}

    