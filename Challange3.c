#include <stdio.h>
main(){

int Yards , Km;
printf("Bonjour ! Ce programme permet de convertir une distance de kilomètres en yards.\n");
printf("Entrez la distance en kilmetres :");
scanf("%d",&Km);
Yards = Km * 1093.61;
printf("La transformation en yards est :%d",Yards);

}