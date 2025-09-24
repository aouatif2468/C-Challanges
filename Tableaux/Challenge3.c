#include <stdio.h>

  int T[]={};
  int i;
  int N;
  int S;
  
 
  int main(){

   printf("\n Entrez la taille de Tableau: ");
   scanf("%d",&N);
       for(int i=0;i<N;i++){
              printf("\nEntrez les elements dans le tableaux : ");
              scanf("%d",&T[i]); 
              S=S+T[i];    
               
       }
       
              printf("La somme des element est  :  %d\n",S);
 return 0;
  }