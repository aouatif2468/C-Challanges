#include <stdio.h>

  int T[3];
  int V[3];
  int i;
  int j;
  int M=0;
  
 
  int main(){

       for(int i=0;i<3;i++){
              printf("\nRemplir le tableaux T : ");
              scanf("%d",&T[i]);            
       }
       for(int j=0;j<3;j++){
              printf("\nRemplir le tableaux V: ");
              scanf("%d",&V[j]);  
       M=M+T[i]*V[j];      
       }

       
              printf("La Multiplication des element est  :  %d\n",M);
 return 0;
  }