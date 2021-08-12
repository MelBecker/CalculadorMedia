#include <stdio.h>

int main(void)
{
    char nome[20];
    char turma[5];
    float prova1, prova2, trabalho, media;
    printf("Seja Bem-Vindo ao meu Primeiro Programa\n\n");
    printf("Qual seu nome? ");
    scanf("%s", nome);
    printf("\nQual sua Turma? ");
    scanf("%s", turma);
    printf("\nOlá, %s do %s!!", nome, turma);
    printf("\n\nVamos calcular a sua Média Bimestral!");
    printf("\n\nQuanto você tirou na Primeira Prova? ");
    scanf("%f", &prova1);
    printf("\nQuanto você tirou na Segunda Prova? ");
    scanf("%f", &prova2);
    printf("\nQuanto você tirou no Trabalho? ");
    scanf("%f", &trabalho);
    media = (prova1 + prova2 + trabalho) / 3;
    printf("\nSua Média Bimestral é %.2f", media);
    return (0);
}
