#include <stdio.h>
main(){

float vitesse_ms , vitesse_kmh;
printf("Bonjour ! Ce programme permet de convertir une vitesse de kilomètres par heure (km/h) en mètres par seconde (m/s).\n");
printf("Entrez  la vitesse en kilomètres par heure (km/h) :");
scanf("%f",&vitesse_kmh);
vitesse_ms = vitesse_kmh * 0.27778;
printf("La vitesse en mètres par seconde (m/s) est :%.2f",vitesse_ms);

}