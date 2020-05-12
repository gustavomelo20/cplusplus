#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){

	setlocale(LC_ALL, "Portuguese");
	float media,np1,np2,pim;
	int resposta;
   	printf("Digite a nota da NP1 do aluno\n");
   	scanf("%f", &np1);
   	printf("Digite a nota da NP2 do aluno\n");
   	scanf("%f", &np2);
   	printf("Digite a nota PIM do aluno\n");
   	scanf("%f", &pim);
   	media=((np1*4)+(np2*4)+(pim*2))/10;
   	if (media >= 5) {

      	printf("\n A média do aluno foi: %f \n Aluno está aprovado ", media);
    	}
    else if (media>=0 && media<4,75)
	 	{
	  	printf("A média do aluno foi: %f \n Aluno reprovado.\n\n,", media);
		}
   	else
	  	{
	  	printf("Média inválida.\n\n");
	  	}

        {
		printf("\n\nDigite 1 para Continuar e 2 para Sair \n");
    	scanf("%d", &resposta);
        }



      while(resposta==1);

    system("pause");
   	return 0;
}

