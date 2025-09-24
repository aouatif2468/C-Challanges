#include <stdio.h>
  int M,N;
  int main(){
       printf("Entrez un nombre :");
       scanf("%d",&N);
    for ( int i=1;i<=10;i++){
       M=N*i;
        printf("La table de multiplication est . %d\n",M);
    }
 return 0;
  }