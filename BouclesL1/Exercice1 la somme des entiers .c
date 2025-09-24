#include <stdio.h>

  int N;
  int main(){


   printf("Entrez une nombre N:");
   scanf("%d",&N);
 int i=0;
 int S=0 ;
   while(i<=N){
    
       S=S+i;
       i++;
   }
   
printf("La somme des entiers est : %d",S);
 return 0;
  }