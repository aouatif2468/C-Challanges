#include <stdio.h>

  int T[]={};
  int tmp;
  int i;
  int X;
  int N;
  int m;
  
  int main(){
       printf("Donne la saise de tableaux :");
       scanf("%d",&N);
        
       
       for (int i=0;i< N ;i++){
       printf("Remplir le tableaux :\n ");
       scanf("%d",&T[i]);
        }
        printf("Donne que ta besoin de rchercher :");
       scanf("%d",&m);
       X=0;
       for (i=0;i< N;i++){
       if(T[i]==m){
              X++;
              break;
       }
}
       if(X==0){
              printf("ne se trove pas valeur se trouve :%d",m);
       }else {
              printf("trouve est %d",m);
       }

       

  return 0;
  }