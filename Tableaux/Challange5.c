#include <stdio.h>

  int T[]={};
  int i;
  int N;
  int min;
  
 
  int main(){

   printf("\n Entrez la taille de Tableau: ");
   scanf("%d",&N);
       for(int i=0;i<N;i++){
              printf("\nEntrez les elements dans le tableaux :\n");
              scanf("%d",&T[i]); 
              min=T[0];    

              if(T[i]<min){
                     min=T[i];
              }
               
       }

    printf("Le Min est  : %d",min);
 return 0;
  }