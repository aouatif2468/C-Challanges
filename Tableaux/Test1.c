#include <stdio.h>

  int T[10];
  int Min;
  int i;
  
  int main(){
      printf("Remplir le tableaux STP :\n");
      for(int i=0 ;i< 10;i++){
       printf("remplisaage des elements:");
       scanf("%d",&T[i]);
            }

       Min=T[0];
       for(int i =0;i<10 ;i++){
              if(T[i]<Min){
                     Min=T[i];
              }
       }
       printf("le min est : T[%d]= %d",i,Min);

 return 0;
  }