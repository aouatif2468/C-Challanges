#include <stdio.h>

int main() {
    int nombre;
    
    printf("Entrez un nombre a quatre chiffres : ");
    scanf("%d", &nombre);

    int a = nombre / 1000;        
    int b = (nombre / 100) % 10;  
    int c = (nombre / 10) % 10;   
    int d = nombre % 10;           

    printf("Nombre inversé : %d%d%d%d\n", d, c, b, a);

    return 0;
}
