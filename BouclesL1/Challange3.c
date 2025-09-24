#include <stdio.h>
  int S,N;
  S=0;
  int main(){
       printf("Entrez un nombre :");
       scanf("%d",&N);
    for ( int i=1;i<=N;i++){
       S=S+i;
    }
     printf("Somme de Nombre %d est : . %d\n",N,S);
 return 0;
  }