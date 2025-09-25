#include <stdio.h>

int main() {
    int N, m, X = 0;

    printf("Donner la taille du tableau : ");
    scanf("%d", &N);

    int T[N]; 
    for (int i = 0; i < N; i++) {
        printf("Entrer une valeur : ");
        scanf("%d", &T[i]);
    }

    printf("Entrer la valeur à rechercher : ");
    scanf("%d", &m);

    for (int i = 0; i < N; i++) {
        if (T[i] == m) {
            X++;
            break;
        }
    }

    if (X==0) {
        printf("La valeur %d ne se trouve pas dans le tableau\n", m);
    } else {
        printf("La valeur %d a ete trouvee\n", m);
    }

    return 0;
}
