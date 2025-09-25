#include <stdio.h>

  int T[6]={'a','e','u','i','o','y'};
  char V[6]={'a','e','u','i','o','y'};
  int i;
  
  int main(){
       for(int i=0;i<6  ;i++){
              printf("T[%d]=%d\n",i,T[i]);
              printf("V[%d]=%c\n",i,V[i]);
       }
       
 return 0;
  }