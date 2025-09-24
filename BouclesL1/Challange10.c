#include <stdio.h>
  int N ;
  int S=0;
  int main(){

       printf("Entrez une valeur :");
       scanf("%d",&N);

       for(int i=1;i<=N;i++){
       S=S+i;
       }

       printf("%d",S);

      
 return 0;
  }