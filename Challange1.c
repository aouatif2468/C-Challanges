#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "");

    char nom[50];
    char prenom[50];
    char sex[10];
    char email[100];
    int age;

    printf("Bonjour, entrez vos informations !\n");

    printf(" Entrez votre nom : ");
    scanf("%s", nom);

    printf("Entrez votre prenom : ");
    scanf("%s", prenom);

    printf("Entrez votre sexe : ");
    scanf("%s", sex);

    printf("Entrez votre age : ");
    scanf("%d", &age);

    printf("Entrez votre email : ");
    scanf("%s", email);

    printf("\nFelicitations ! Alors votre nom est %s, votre prenom est %s, votre age %d et vous etes %s.\n",
           nom, prenom, age, sex);
    printf("Votre email pour la confirmation est : %s\n", email);

    return 0;
}
