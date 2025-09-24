#include <stdio.h>

int main() {
    int n;
    int impair = 1;

    printf("Entrez un nombre entier n : ");
    scanf("%d", &n);

    printf("Les %d premiers nombres impairs sont :\n", n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", impair);
        impair = impair + 2;
    }

    printf("\n");
    return 0;
}
