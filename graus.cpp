#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
   float celsius=0, farenheit=0;
   int resposta;
  	do
	{
   		printf("Digite o grau Celsius:  ");
   		scanf("%f", &celsius);

   		farenheit= (celsius*9/5)+32;

		printf("\n\n O grau farenheit  e %f: " ,farenheit);

        printf("\n\nDigite 1-Continuar 2-Sair \n");
    	scanf("%d", &resposta);
	}
    while(resposta==1);
    system("pause");
    return 0;

}
