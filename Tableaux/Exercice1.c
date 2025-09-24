#include <stdio.h>

  float T[4];
  float S=0;
  float M;
  int i;
  int main(){

       
       for (int i=0;i<=4;i++){
              printf("Bonjour Remplir le tableaux:\n  ");
       scanf("%f",&T[i]);
       S=S+T[i];
       M=S/4;
       }

        printf("la mooyenne est : %.2f",M);
      
 return 0;
  }