#include <stdio.h>

int main() {
    int annee;
    int choix;
    int m, j, h, min, s;

    printf("Entrez une année (nombre entier positif) : ");
    scanf("%d", &annee);

    if (annee <= 0) {
        printf("Veuillez entrer une année positive.\n");
        return 1;
    }

    printf("Choisissez l'unité de conversion :\n");
    printf("1. Mois\n");
    printf("2. Jours\n");
    printf("3. Heures\n");
    printf("4. Minutes\n");
    printf("5. Secondes\n");
    printf("Entrez votre choix (1-5) : ");
    scanf("%d", &choix);

    // Calculer toutes les valeurs en avance
    m = annee * 12;
    j = annee * 365;
    h = j * 24;
    min = h * 60;
    s = min * 60;

    switch (choix) {
        case 1:
            printf("Mois : %d\n", m);
            break;
        case 2:
            printf("Jours : %d\n", j);
            break;
        case 3:
            printf("Heures : %d\n", h);
            break;
        case 4:
            printf("Minutes : %d\n", min);
            break;
        case 5:
            printf("Secondes : %d\n", s);
            break;
        default:
            printf("Choix invalide.\n");
            break;
    }

    return 0;
}
