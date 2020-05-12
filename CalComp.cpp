#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
  float  medio=0, acoes=0,risco=0 , con=0, vol=0;
  float principal;
  float taxa;
  int meses;
  int trimestre;
  float anterior = 0.0;
  float montante;
  float juros;
        printf("Digite  Quanto voce tem em acoes?:  ");
   		scanf("%f", &acoes);
   		printf("Digite  Quanto meses de exposiçao?:  ");
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
         anterior=acoes;


         risco=(medio-vol*con)*10;// VaR = Retorno médio – Volatilidade * Nível de confiança.
         acoes=(acoes/risco);
         printf("\n\n taxa de risco %f: " ,risco);
         printf("\n\n Montante financeiro %.2f: " ,acoes);
         trimestre = meses*4;

  for(int i = 1; i <= trimestre; i++){
    acoes = acoes * pow((1 + risco), i);
    risco = acoes - anterior;


    anterior += risco;

    //printf("Mês: %d - Montante: %f - Juros %f\n", i, montante, juros);
    printf("esposiço mensal: %.2f\n",risco,acoes);
  }
  system("PAUSE");
  return 0;
}
