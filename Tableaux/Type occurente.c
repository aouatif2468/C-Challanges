#include <stdio.h>

 
  int tmp;
  int i;
  int X;
  int N;
  int m;
  
  int main(){
       printf("Entrez la t")
       int T[10]; 
       for (int i=0;i< 10 ;i++){
       printf("Remplir le tableaux :\n ");
       scanf("%d",&T[i]);
        }
        printf("Donne que ta besoin de rchercher :");
       scanf("%d",&m);
       X=0;
       for (i=0;i< 10;i++){
       if(T[i]==m){
              X++;
              break;
       }
}
              printf(":%d",X);

       

  return 0;
  }