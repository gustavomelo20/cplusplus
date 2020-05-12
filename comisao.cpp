#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
   float salario=0, comissao=0, vendas=0, salariobruto=0;
   int resposta;
  	do
	{
   		printf("Digite  Quanto vendeu no mes?:  ");
   		scanf("%f", &vendas);
   		printf("Digite  Quanto ganha por mes?:  ");
   		scanf("%f", &salario);

   		comissao= (vendas*.10);

   		salariobruto=salario +comissao;

		printf("\n\n o salario com a comissao %f: " ,salariobruto);

        printf("\n\nDigite 1-Continuar 2-Sair \n");
    	scanf("%d", &resposta);
	}
    while(resposta==1);
    system("pause");
    return 0;

}
