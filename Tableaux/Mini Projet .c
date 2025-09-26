#include<stdio.h>


int main(){
       int Choix ;
       char titre[50][100];
       char auteur[50][100];
       float prix[50];
       
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

       if(Choix < 0 || Choix > 6 ){
              printf("Erreur : Veuillez entrer une valeur entre 0 et 6.\n\n\n");
              continue;
       } 

switch(Choix){
     case 1:
     printf("Titre du livre.\n");
     for(int i; i<50;i++){
       for(int j;j<100;j++){
         scanf("%s",titre[i][j]);
     }
     }
     printf("Auteur du livre.\n");
     printf("Prix du livre.\n");
     printf("Quantite en stock.\n");
     break;
     case 2:
     break;
     case 3:
     break;
     case 4:
     break;
     case 5:
     break;
     case 6:
     break;
     default:
       printf(" V.");
     break;
}

}while(Choix != 0);

return 0;
}