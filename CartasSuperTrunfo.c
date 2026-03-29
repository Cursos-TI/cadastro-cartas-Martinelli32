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
   float Densidade_Populacional;
   float Pib_Per_Capita;

 
   // Área para entrada de dados


   char EstadoA = 'A';
   char CodigoA[] = "A01";
   char NomeCidadeA[20] = "São Paulo";
   int PopulacaoA = 12325000;
   float AreaA = 1521.11;
   float PibA = 699.28;
   int Pontos_TuristicosA = 50;
   float Densidade_PopulacionalA = PopulacaoA / AreaA;
   float Pib_Per_CapitaA = (PibA * 100000000.0) / PopulacaoA;


   char EstadoB = 'B';
   char CodigoB[] = "A02";
   char NomeCidadeB[20] = "Rio De Janeiro";
   int PopulacaoB = 6748000;
   float AreaB = 1200.25;
   float PibB = 300.50;
   int Pontos_TuristicosB = 30;
   float Densidade_PopulacionalB = PopulacaoB / AreaB;
   float Pib_Per_CapitaB = (PibB * 100000000.0) / PopulacaoB;
 

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
    printf("Densidade Populaciona: %.2f hab/km²\n", Densidade_PopulacionalA);
    printf("Pib_Per_Capita: %.2f Reais \n", Pib_Per_CapitaA);


    printf("             CARTA 2        \n");


    printf("Carta 2 - Rio De Janeiro, RJ\n");
    printf("Estado: %c\n", EstadoB);
    printf("Código: %s\n", CodigoB);
    printf("Cidade: %s\n", NomeCidadeB);
    printf("População: %d\n", PopulacaoB);
    printf("Área: %.2f km²\n", AreaB);
    printf("PIB: %.2f Bilhões De Reais\n", PibB);
    printf("Pontos Turísticos: %d\n", Pontos_TuristicosB);
    printf("Densidade Populaciona: %.2f hab/km²\n", Densidade_PopulacionalB);
    printf("Pib_Per_Capita: %.2f Reais \n", Pib_Per_CapitaB);



return 0;
} 
