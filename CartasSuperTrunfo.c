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
   float superPoder;

 
   // Área para entrada de dados


   char EstadoA = 'A';
   char CodigoA[] = "A01";
   char NomeCidadeA[20] = "São Paulo";
   int PopulacaoA = 12325000;
   float AreaA = 1521.11;
   float PibA = 699.28;
   int Pontos_TuristicosA = 50;
   float Densidade_PopulacionalA;
   float Pib_Per_CapitaA;
   float SuperPoderA;

   
   char EstadoB = 'B';
   char CodigoB[] = "A02";
   char NomeCidadeB[20] = "Rio De Janeiro";
   int PopulacaoB = 6748000;
   float AreaB = 1200.25;
   float PibB = 300.50;
   int Pontos_TuristicosB = 30;
   float Densidade_PopulacionalB;
   float Pib_Per_CapitaB;
   float SuperPoderB;

    Densidade_PopulacionalA = PopulacaoA / AreaA;
    Pib_Per_CapitaA = (PibA * 1000000000.0)/ PopulacaoA;
    SuperPoderA = PopulacaoA + AreaA + PibA + Pontos_TuristicosA + Pib_Per_CapitaA + (1.0 / Densidade_PopulacionalA);

    Densidade_PopulacionalB = PopulacaoB / AreaB;
    Pib_Per_CapitaB =(PibB * 1000000000.0)/ PopulacaoB;
    SuperPoderB = PopulacaoB + AreaB + PibB + Pontos_TuristicosB + Pib_Per_CapitaB + (1.0 / Densidade_PopulacionalB);
 

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

    printf("             VENCEDOR        \n");
    
    printf("População: Carta %d venceu (%d)\n", (PopulacaoA > PopulacaoB) ? 1 : 2, PopulacaoA > PopulacaoB);
    printf("Área: carta %d venceu (%d)\n", (AreaA > AreaB) ? 1 : 2, AreaA > AreaB);
    printf("Pib: carta %d venceu (%d)\n", (PibA > PibB) ? 1 : 2, PibA > PibB);
    printf("Pontos Turisticos: carta %d venceu (%d)\n", (Pontos_TuristicosA > Pontos_TuristicosB) ? 1 : 2, Pontos_TuristicosA > Pontos_TuristicosB);
    printf("Pib Per Capita: carta %d venceu (%d)\n", (Pib_Per_CapitaA > Pib_Per_CapitaB) ? 1 : 2, Pib_Per_CapitaA > Pib_Per_CapitaB);
    printf("Densidade Populacional: carta %d venceu (%d)\n", (Densidade_PopulacionalA < Densidade_PopulacionalB) ? 1 : 2, Densidade_PopulacionalA < Densidade_PopulacionalB);
    printf("Super Poder: carta %d venceu (%d)\n", (SuperPoderA > SuperPoderB) ? 1 : 2, SuperPoderA > SuperPoderB);




return 0;
} 
