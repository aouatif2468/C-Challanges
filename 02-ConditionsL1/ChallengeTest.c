#include <stdio.h>

int main() {
    int a, b, c;

    printf("Entrez les trois longueurs des cotes du triangle : ");
    scanf("%d %d %d", &a, &b, &c);

    // Vérification correcte si c'est un triangle
    if (a + b > c || a + c > b && b + c > a) {
        // Détermination du type du triangle
        if (a == b && b == c) {
            printf("C'est un triangle equilateral.\n");
        } else if (a == b || a == c || b == c) {
            printf("C'est un triangle isocele.\n");
        } else {
            printf("C'est un triangle scalene.\n");
        }
    } else {
        printf("Les longueurs ne forment pas un triangle.\n");
    }

    return 0;
}
