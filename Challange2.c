#include <stdio.h>
#include<math.h>

main () {
 
    int K ,C;

    printf("Bonjour Ce programme est pour la conversion de la température en Kelvin : \n");
    printf("Entrez  la temperature en Celsius :");
    scanf("%d",&C);

    K = C + 273.15;

    printf("Alors la transforme en Kelvin est : %d",K);

    return 0;
}