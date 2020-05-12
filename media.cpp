#include <stdio.h> // abrindo biblioteca
#include <stdlib.h> // abrindo biblioteca
#include <locale.h> //necessario para definir o idioma
main()
{ // incio do metodo
   float media=((np1 *4) + (np2 *4) + (pim *2))/10, np1, np2, pim; // criar variavel numerica
   int resposta;

  	do()
	{


   		printf("Digite a nota da np1:  "); // mostra mensagem na tela
   		scanf("%f", &np1);  // aguarda valor numerico

		printf("Digite a nota da np2:  "); //mostrar mensagem na tela
		scanf("%f", &np2); // aguarda valor na tela

		printf("Digite a nota do pim:  "); //mostrar mensagem na tela
		scanf("%f", &pim); // aguarda valor na tela
            media= ((np1*4)+(np2*4)+(pim*2))/10;
		  printf("\n\nDigite 1-Continuar 2-Sair \n");
    	scanf("%d", &resposta);
	}


   system("pause"); // da uma pausa na execução do programa
   return 0; // retorna para o Sistema operacional

}// fim do metodo
