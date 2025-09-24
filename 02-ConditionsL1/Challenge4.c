#include <stdio.h>
#include <math.h>

int a,b,c,deta,x1,x2 ;


int main()

{

    printf("Bonjour tout le monde ce programme pour pcalculer Equation du Deuxi�me Degr�!\n");
    printf("Entrer les trois nombres pour l equation a,b,c  :");
    scanf("%d %d %d",&a,&b,&c);

    deta=pow(b,2)-(4*a*c);

    if(deta>0){

        x1= (-b-sqrt(deta))/(2*a);
        x2= (-b+sqrt(deta))/(2*a);
        printf("Puisque deta est superier de 0 donc il y a deux soultion x1, x2 : %d %d",x1,x2);
    } else if (deta == 0 ){
         x1=(-b)/(2*a);
         printf("Puisque deta est egale 0 donc il y a une seule soultion x1 : %d",x1);

    }else {

    printf("Puisque deta est inferieur de 0 donc il n est pas de soultion.");
    }





    return 0;
}
