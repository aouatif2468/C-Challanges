#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CONTACTS 100
#define TAILLE 50


typedef struct {
    char nom[TAILLE];
    char telephone[TAILLE];
    char email[TAILLE];
} Contact;


Contact contacts[MAX_CONTACTS];
int nbContacts = 0;

void ajouterContact() {
    if (nbContacts >= MAX_CONTACTS) {
        printf("Carnet plein, impossible d'ajouter un nouveau contact.\n");
        return;
    }

    Contact c;
    printf("Nom : ");
    scanf(" %[^\n]", c.nom); 
    printf("Telephone : ");
    scanf(" %[^\n]", c.telephone);
    printf("E-mail : ");
    scanf(" %[^\n]", c.email);

    contacts[nbContacts++] = c;
    printf("Contact ajouté avec succes !\n");
}

int rechercherContact(char nom[]) {
    for (int i = 0; i < nbContacts; i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            return i;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
        }
    }
    return -1;
}


void modifierContact() {
    char nom[TAILLE];
    printf("Entrez le nom du contact a modifier : ");
    scanf(" %[^\n]", nom);

    int index = rechercherContact(nom);
    if (index == -1) {
        printf("Contact introuvable.\n");
        return;
    }

    printf("\n--- Modifier le contact ---\n");
    printf("Nouveau nom (ancien : %s) : ", contacts[index].nom);
    scanf(" %[^\n]", contacts[index].nom);
    printf("Nouveau telephone (ancien : %s) : ", contacts[index].telephone);
    scanf(" %[^\n]", contacts[index].telephone);
    printf("Nouvel e-mail (ancien : %s) : ", contacts[index].email);
    scanf(" %[^\n]", contacts[index].email);

    printf("Contact modifie avec succès !\n");
}



void supprimerContact() {
    char nom[TAILLE];
    printf("Entrez le nom du contact à supprimer : ");
    scanf(" %[^\n]", nom);

    int index = rechercherContact(nom);
    if (index == -1) {
        printf("Contact introuvable.\n");
        return;
    }
    for (int i = index; i < nbContacts - 1; i++) {
        contacts[i] = contacts[i + 1];
    }
    nbContacts--;

    printf("Contact supprimé avec succès !\n");
}



void afficherUnContact() {
    char nom[TAILLE];
    printf("Entrez le nom du contact à rechercher : ");
    scanf(" %[^\n]", nom);

    int index = rechercherContact(nom);
    if (index == -1) {
        printf("Contact introuvable.\n");
    } else {
        printf("\n--- Contact trouve ---\n");
        printf("Nom       : %s\n", contacts[index].nom);
        printf("Telephone : %s\n", contacts[index].telephone);
        printf("E-mail    : %s\n", contacts[index].email);
        printf("----------------------\n");
    }
}
   
void afficherContacts() {
    if (nbContacts == 0) {
        printf(" Aucun contact enregistre.\n");
        return;
    }

    printf("\n--- Liste des Contacts ---\n");
    for (int i = 0; i < nbContacts; i++) {
        printf("Nom       : %s\n", contacts[i].nom);
        printf("telephone : %s\n", contacts[i].telephone);
        printf("E-mail    : %s\n", contacts[i].email);
        printf("--------------------------\n");
    }
}


int main() {
    int choix;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Ajouter un contact\n");
        printf("2. Modifier un contact\n");
        printf("3. Supprimer un contact\n");
        printf("4. Afficher tous les contacts\n");
        printf("5. Rechercher un contact\n");
        printf("6. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: ajouterContact(); break;
            case 2: modifierContact(); break;
            case 3: supprimerContact(); break;
            case 4: afficherContacts(); break;
            case 5: afficherUnContact(); break;
            case 6: printf("Au revoir !\n"); break;
            default: printf("Choix invalide, reessayez.\n");
        }
    } while (choix != 6);

    return 0;
}
