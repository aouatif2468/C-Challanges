#include <stdio.h>

  int T[]={};
  int i;
  int N,M=0;
  int F;
  
 
  int main(){

   printf("\n Entrez la taille de Tableau: ");
   scanf("%d",&N);
   printf("\nDonne moi le facteur de multiplication :\n");
   scanf("%d",&F); 

       for(int i=0;i<N;i++){
              printf("\nEntrez les elements dans le tableaux :\n");
              scanf("%d",&T[i]); 
              
              M=M*(T[i]*F);

               
       }

    printf("La multiplication des elements est : %d",T);
 return 0;
  }