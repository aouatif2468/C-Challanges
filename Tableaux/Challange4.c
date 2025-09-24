#include <stdio.h>

  int T[]={};
  int i;
  int N;
  int Max;
  
 
  int main(){

   printf("\n Entrez la taille de Tableau: ");
   scanf("%d",&N);
       for(int i=0;i<N;i++){
              printf("\nEntrez les elements dans le tableaux :\n");
              scanf("%d",&T[i]); 
              Max=T[0];    

              if(T[i]>Max){
                     Max=T[i];
                     printf("Le Max est %d",Max);
              }
               
       }

    
              printf("Affiche les element de tablaaux :  %d\n",Max);
 return 0;
  }