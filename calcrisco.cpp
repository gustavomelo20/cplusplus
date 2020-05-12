#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()

{
   float  medio=0, acoes=0,risco=0 , con=0, vol=0, principal=0, anterior=0, montante=0, juros=0;
   int resposta;
   int meses;
   int trimestre;

  	do
    {
   		printf("Digite  Quanto voce tem em acoes?:  ");
   		scanf("%f", &acoes);
   		printf("Digite  Quanto voce tem em acoes?:  ");
        scanf("%d",&meses);
   		printf("Digite  Qual a volatilidade do ativo?:  ");
   		scanf("%f", &vol);
   		printf("Digite  Qual o nivel de confiaça?:  ");
   		scanf("%f", &con);
   		printf("Digite  taxa de retorno medio?:  ");
   		scanf("%f", &medio);

   		medio=(medio/100);
   		vol=(vol/100);
   		con=(con/100);

   		risco=(medio-vol*con)*10;// VaR = Retorno médio – Volatilidade * Nível de confiança.
        acoes=(acoes/risco);
        printf("\n\n taxa de risco %f: " ,risco);
		printf("\n\n montante financeiro %.2f: " ,acoes);

        for(int i = 1; i <= trimestre; i++){
        montante = acoes * pow((1 + risco), i);
        juros = montante - principal - anterior;

        anterior += juro

        printf("\n\nDigite 1-Continuar 2-Sair \n");
    	scanf("%d", &resposta);
        printf("Rendimento: %.2f Montante: %.2f\n",juros,montante);
	}
    while(resposta==1);
    system("pause");
    return 0;
}
