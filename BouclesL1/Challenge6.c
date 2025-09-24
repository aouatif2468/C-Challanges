#include <stdio.h>

int main() {
    int n;
    int pair = 2;

    printf("Entrez un nombre entier n : ");
    scanf("%d", &n);

    printf("Les %d premiers nombres pairs sont :\n", n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", pair);
        pair = pair + 2;
    }

    printf("\n");
    return 0;
}
