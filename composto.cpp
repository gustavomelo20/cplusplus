#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
  float principal;
  float taxa;
  int meses;
  int trimestre;
  float anterior = 0.0;
  float montante;
  float juros;
  scanf("%f",&principal);
  scanf("%f",&taxa);
  scanf("%d",&meses);
  trimestre = meses*4;
  for(int i = 1; i <= trimestre; i++){
    montante = principal * pow((1 + taxa), i);
    juros = montante - principal - anterior;

    anterior += juros;

    //printf("Mês: %d - Montante: %f - Juros %f\n", i, montante, juros);
    printf("Rendimento: %.2f Montante: %.2f\n",juros,montante);
  }
  system("PAUSE");
  return 0;
}
