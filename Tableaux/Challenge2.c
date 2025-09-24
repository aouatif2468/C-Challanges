#include <stdio.h>

  int T[]={};
  int i;
  int N;
  
 
  int main(){

   printf("\n Entrez la taille de Tableau: ");
   scanf("%d",&N);
       for(int i=0;i<N;i++){
              printf("\nEntrez les elements dans le tableaux :\n");
              scanf("%d",&T[i]);     
               
       }
       for(int i=0;i<N;i++){
              printf("Affiche les element de tablaaux :  %d\n",T[i]);
       }
 return 0;
  }