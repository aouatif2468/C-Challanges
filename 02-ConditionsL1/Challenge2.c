#include <stdio.h>

char c;

int main()
{
 printf("Entrez une carctere: ");
 scanf("%c",&c);
switch(c){
    case 'A':
    case 'a':
    printf("voyelle");
    break;
    case 'E':
    case 'e':
    printf("voyelle");
    break;
    case 'O':
    case 'o':
    printf("voyelle");
    break;
    case 'U':
    case 'u':
   printf("voyelle");
    break;
    case 'I':
    case 'i':
    printf("voyelle");
    break;
    case 'Y':
    case 'y':
    printf("voyelle");
    break;
    default:
    printf("Consonne\n");
    break;
 }
    return 0;
}