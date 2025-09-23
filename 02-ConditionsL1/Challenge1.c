#include <stdio.h>

int n ;

int main()
{
    printf("Bonjour tout le monde ce programme pour calculer si un nombre Paire ou Impaire!\n");
    printf("Entrer un nombre :");
    scanf("%d",&n);
    if (n %  2== 0){
        printf("Le nombre est paire. ");
    }else{
    printf("Le nombre est impaire. ");
    }
    return 0;
}
