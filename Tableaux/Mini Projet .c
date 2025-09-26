#include<stdio.h>
#include <string.h>


int main(){
       int Choix ;
       char titre[10][50];
       char auteur[10][50];
       int prix[10];
       int quantite[10];
       int nbLivre = 0;
       char titreRecherche[10];
        int i;

       
       do{

       printf("*****************   Menu  **********************\n");
       printf("1.Ajouter un livre au stock.\n");
       printf("2.Afficher tous les livres disponibles.\n");
       printf("3.Rechercher un livre par son titre.\n");
       printf("4.Mettre a jour la quantite d'un livre. \n");
       printf("5.Supprimer un livre du stock. \n");
       printf("6.Afficher le nombre total de livres en stock.\n");
       printf("Donne moi ton choix !  ");
       scanf("%d",&Choix);

        if (Choix < 0 || Choix > 6) {
            printf("Erreur : Veuillez entrer une valeur entre 0 et 6.\n\n");
            sleep(1); 
            continue;
        }

switch(Choix){
     case 1:
     if(nbLivre < 10){
     printf("Titre du livre.\n");
     scanf("%s",titre[nbLivre]);
     printf("Auteur du livre..\n");
     scanf("%s",auteur[nbLivre]);
     printf("Prix du livre.\n");
     scanf("%d",&prix[nbLivre]);
     printf("Quantite du livre %d: ", nbLivre+1);
     scanf("%d", &quantite[nbLivre]);
     nbLivre++;
     }else {
       printf("Stock est plien :");
     }
     break;
  case 2:
              
        for (int i = 0; i < nbLivre; i++) {
            printf("Livre %d:\n", i + 1);
            printf("  Titre : %s\n", titre[i]);
            printf("  Auteur: %s\n", auteur[i]);
            printf("  Prix  : %d\n", prix[i]);
            printf("  Quantite: %d\n\n", quantite[i]);
        }
    break;
     case 3:
     printf("Entrez le titre du livre à rechercher : ");
     scanf("%s", titreRecherche);
     i = 0;
        while (i < nbLivre && strcmp(titreRecherche, titre[i]) != 0) {
            i++;
        }

        if (i < nbLivre) {
            printf("Livre troue a la position %d\n", i + 1);
            printf("  Titre : %s\n", titre[i]);
            printf("  Auteur: %s\n", auteur[i]);
            printf("  Prix  : %d\n", prix[i]);
            printf("  Quantite: %d\n\n", quantite[i]);
        } else {
            printf("Livre non trouvé\n");
        }
    break;
     case 4:
     break;
     case 5:
     break;
     case 6:
     break;
     case 0:
       printf("Au revoir !\n");
       break;
            default:
                break;
        }

}while(Choix != 0);

return 0;
}