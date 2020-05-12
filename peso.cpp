#include <stdio.h> // abrindo biblioteca
#include <stdlib.h> // abrindo biblioteca
#include <locale.h> //necessario para definir o idioma
main()
{ // incio do metodo
   float altura=0, peso=0;
   int resposta;

  	do
	{
   		printf("Digite sua altura:  "); // mostra mensagem na tela
   		scanf("%f", &altura);  // aguarda valor numerico

   		peso = (72.7*altura)-58;

		printf("\n\nO peso ideal e %f: " , peso);
		printf("\n\nPara a altura e %f: " , altura); //mostrar mensagem na tela
		 // aguarda valor na tela


        printf("\n\nDigite 1-Continuar 2-Sair \n");
    	scanf("%d", &resposta);
	}
    while(resposta==1);

   system("pause"); // da uma pausa na execução do programa
   return 0; // retorna para o Sistema operacional

}// fim do metodo
