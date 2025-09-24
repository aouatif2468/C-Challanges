#include <stdio.h>

  int main(){
float m;
  printf("Ce programme et pour afficher la mention obtenue par un eleve en fonction de la moyenne de ses notes.! \n ");

  printf("Entrez une moyenne  : ");
  scanf("%f",&m);
  if (m >= 10 && m <= 12 ){
  printf("il obtient la mention passable. ");
  } else if (m >= 12 && m <= 14) {
  printf("il obtient la mention assez bien. ");
  }else if (m >= 14 && m <= 16) {
  printf(" il obtient la mention bien. ");
  }else if (m >=16 && m <= 20 ) {
  printf(" il obtient la mention tres bien. ");
  }else if (m >=20 && m <= 1000000000 ) {
  printf(" Veuillez entrez une moyenne entre 0 a 20. ");
  }else {
  printf(" il est recale. ");
  }


  return 0;
  }
