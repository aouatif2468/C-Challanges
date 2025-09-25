#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, tmp;

    printf("Donne moi la taille du tableau : ");
    scanf("%d", &N);

    int T[N]; // tableau de taille N

    // Remplissage
    for (int i = 0; i < N; i++) {
        printf("Remplir le tableau : ");
        scanf("%d", &T[i]);
    }

    // Tri (par sélection)
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (T[i] > T[j]) {
                tmp = T[i];
                T[i] = T[j];
                T[j] = tmp;
            }
        }
    }

    // Affichage
    printf("Le tableau trié est : ");
    for (int i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}
