#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

    
   char Estado;
   char Codigo[4];
   char NomeCidade[20];
   int Populacao;
   float Area;
   float Pib;
   int Pontos_Turisticos;

 
   // Área para entrada de dados


   char EstadoA = 'A';
   char CodigoA[] = "A01";
   char NomeCidadeA[20] = "São Paulo";
   int PopulacaoA = 12325000;
   float AreaA = 1521.11;
   float PibA = 699.28;
   int Pontos_TuristicosA = 50;


   char EstadoB = 'B';
   char CodigoB[] = "A02";
   char NomeCidadeB[20] = "Rio De Janeiro";
   int PopulacaoB = 6748000;
   float AreaB = 1200.25;
   float PibB = 300.50;
   int Pontos_TuristicosB = 30;
 

    // Área para exibição dos dados da cidade

     
    printf("       CARTA 1         \n");


    printf("Carta 1 - São Paulo, SP\n");
    printf("Estado: %c\n", EstadoA);
    printf("Código: %s\n", CodigoA);
    printf("Cidade: %s\n", NomeCidadeA);
    printf("População: %d\n", PopulacaoA);
    printf("Área: %.2f km²\n", AreaA);
    printf("PIB: %.2f Bilhões De Reais\n", PibA);
    printf("Pontos Turísticos: %d\n", Pontos_TuristicosA);


    printf("             CARTA 2        \n");


    printf("Carta 2 - Rio De Janeiro, RJ\n");
    printf("Estado: %c\n", EstadoB);
    printf("Código: %s\n", CodigoB);
    printf("Cidade: %s\n", NomeCidadeB);
    printf("População: %d\n", PopulacaoB);
    printf("Área: %.2f km²\n", AreaB);
    printf("PIB: %.2f Bilhões De Reais\n", PibB);
    printf("Pontos Turísticos: %d\n", Pontos_TuristicosB);


return 0;
} 
