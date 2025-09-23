#include <stdio.h>


float C;

int main()
{
    printf("Bonjour, Ce Programme et pour demander la température en Celsius et affiche l'état de l'eau à cette température (solide, liquide, gaz).\n");
    printf("Entez la temperature en Celsius : ");
    scanf("%f",&C);
    if (C < 0){
    printf("La temperature est solide.  ");
    }
    else if (0 <= C < 100){
    printf("La temperature est liquide.  ");
    }
    else{
    printf("La temperature est Gaz.  ");
    }

    return 0;
}
