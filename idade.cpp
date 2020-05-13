#include <stdio.h>
#include <stdlib.h>
main(){
    int idade =0,media = 0;
    int i = 0;
    do
     {

     printf("Sua Idade: ",idade);
     scanf("%d",&idade);
     i= i + 1;
     media=media+ idade;
     } while (i <= 5);
     media = media /5;

      printf("A media das idades %d e: ", media);
    system("pause");

}