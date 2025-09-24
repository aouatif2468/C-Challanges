#include <stdio.h>

  int N=13;
  int i;
  int main(){

       
       
   do {
       printf("Entre une valeur : \n");
       scanf("%d",&i);
       if(i<N){
              printf("Plus Petit : \n");
       }
       else if(i>N){
              printf("Plus grand : \n");
       }else if(N=i){
              printf("Bravo !");
       }
       }
   while(N != i);

 return 0;
  }