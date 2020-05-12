#include <stdio.h>
#include <stdlib.h>
main(){
    int n, triplo;
    int i = 1;
    do
     {

     printf("Digite o valor do numero: ");
     scanf("%d",&n);
     triplo = n * 3;
     printf("O triplo de %d e: %d.\n", n, triplo);
     i= i + 1;
     } while (i <= 5);

    system("pause");
}
