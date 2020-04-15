#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char nome[50];
    float LIM=20, soma=0.0, media, mediaTurma;
    float a, b, c, d, e, f, g, h, i, j;
    int x, y;
    for (x=0; x<=LIM;x++){
        printf("Digite o nome do aluno:\t");
        scanf("%s", nome);
        printf("\nNota 1:");
        scanf("%f", &a);
        printf("Nota 2:");
        scanf("%f", &b);
        printf("Nota 3:");
        scanf("%f", &c);
        printf("Nota 4:");
        scanf("%f", &d);
        printf("Nota 5:");
        scanf("%f", &e);
        printf("Nota 6:");
        scanf("%f", &f);
        printf("Nota 7:");
        scanf("%f", &g);
        printf("Nota 8:");
        scanf("%f", &h);
        printf("Nota 9:");
        scanf("%f", &i);
        printf("Nota 10:");
        scanf("%f", &j);
        soma=a+b+c+d+e+f+g+h+i+j;
        media=soma/10;
               if (media>=5) {
                      printf("Aluno aprovado! Media %f\n", media);
               }
               else {
                      printf("Aluno reprovado! Media %f\n", media);
               }
        printf("-----------------------------\n\n");
        }
  system("PAUSE");
  return 0;
}
