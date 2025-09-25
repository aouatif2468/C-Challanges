#include <stdio.h>

  int T[]={};
  int N;
  int taille;
  int pos;
  int valeur;
  int i;
  
  int main(){
       printf("Donne moi la taille de tableaux");
       scanf("%d",&N);
       printf("Remplir le tableaux :");
      
      for (int i=0;i< 100;i++){
        scanf("%d",T[i]);
       if(pos<=0 || pos> taille +1){
              printf("Arrete le programme:");
       }else{
              for(i=taille;i>=pos;i--){
       T[i]=T[i-1];
       taille++;
       T[pos-1]=N;
              }
              }

              for(int i=0;i<N;i++){
              printf("\nAffichage est %d:\n",T[i]);

}
       
       
       printf("donne la valeur que ta besoin de insrer : ");
       scanf("%d",&valeur);
       printf("donne moi la postion : ");
       scanf("%d",&pos);

  return 0;
  }