#include <stdio.h>

// struct define a estrutura da carta do jogo, gosto de ver isso como se fosse uma  classe
struct carta 
{
    char estado;
    char codigo[4],nomeCidade[49];
    int populacao, numeroDePontosTuristicos;
    float areaPorKm, pib;
};
int main() 
{
   struct carta carta1; //aqui eu declaro a carta1 e carta2 como instancias da estrutura carta
   struct carta carta2;

   printf("cadastro da carta1.....\n");
   printf("Digite o estado, lembre-se: Uma letra de 'A' a 'H. \n estado: ");
   scanf("%c", &carta1.estado);
   printf("\n Digite o Código da Carta: A letra do estado seguida de um número de 01 a 04 \n ex: A01.\n Cod: ");
   scanf("%s",&carta1.codigo);
   printf("\n Digite o nome da cidade: ");
   scanf(" %[^\n]", carta1.nomeCidade);
   printf("\n digite a populacao da cidade: ");
   scanf("%d", &carta1.populacao);
   printf("\n digite a area em km quadrados: ");
   scanf("%f", &carta1.areaPorKm);
   printf("\n digite o pib: ");
   scanf("%f", &carta1.pib);
   printf("\n digite o numero de pontos turisticos: ");
   scanf("%d", &carta1.numeroDePontosTuristicos);
   printf("Carta 1 cadastrada! Abaixo estão todos os dados");
   printf("\n estado: %c\n codigo: %s\n nome da cidade: %s \n populacao: %d \n area em km quadrado: %.2fkm \n",carta1.estado,carta1.codigo,carta1.nomeCidade,carta1.populacao,carta1.areaPorKm);
   printf(" pib: %.2f \n numero de pontos turisticos: %d",carta1.pib,carta1.numeroDePontosTuristicos);

    printf("cadastro da carta2.....\n");
   printf("Digite o estado, lembre-se: Uma letra de 'A' a 'H. \n estado: ");
   scanf("%c", &carta2.estado);
   printf("\n Digite o Código da Carta: A letra do estado seguida de um número de 01 a 04 \n ex: A01.\n Cod: ");
   scanf("%s",&carta2.codigo);
   printf("\n Digite o nome da cidade: ");
   scanf(" %[^\n]", carta2.nomeCidade);
   printf("\n digite a populacao da cidade: ");
   scanf("%d", &carta2.populacao);
   printf("\n digite a area em km quadrados: ");
   scanf("%f", &carta2.areaPorKm);
   printf("\n digite o pib: ");
   scanf("%f", &carta2.pib);
   printf("\n digite o numero de pontos turisticos: ");
   scanf("%d", &carta2.numeroDePontosTuristicos);
   printf("Carta 2 cadastrada! Abaixo estão todos os dados");
   printf("\n estado: %c\n codigo: %s\n nome da cidade: %s \n populacao: %d \n area em km quadrado: %.2fkm \n",carta2.estado,carta2.codigo,carta2.nomeCidade,carta2.populacao,carta2.areaPorKm);
   printf(" pib: %.2f \n numero de pontos turisticos: %d",carta2.pib,carta2.numeroDePontosTuristicos);

   return 0;
}