#include <stdio.h>

int main(){
    // declaração de variáveis
    char Codigo1[15], Cidade1[15], Codigo2[15], Cidade2[15], Estado1[3], Estado2[3];
    int Populacao1, Populacao2;
    float Areakm1, Pib1, Areakm2, Pib2;
    int NumPontosTuristicos1, NumPontosTuristicos2;
    float DensPopulacional1, PibPerCapita1, DensPopulacional2, PibPerCapita2;

     //Cadastro Carta 1
     printf("Carta 1\n");
     printf("Digite o estado: \n");
     scanf(" %s", &Estado1);
 
     printf("Digite o código: \n");
     scanf(" %s", Codigo1);
 
     printf("Digite a cidade: \n");
     scanf(" %s", Cidade1);
 
     printf("Digite o número da população: \n");
     scanf(" %d", &Populacao1);
 
     printf("Digite a Área em km²: \n");
     scanf(" %f", &Areakm1);
 
     printf("Digite o pib: \n");
     scanf(" %f", &Pib1);
 
     printf("Digite o número de pontos turísticos: \n");
     scanf(" %d", &NumPontosTuristicos1);
 
     DensPopulacional1 = (float) Populacao1 / Areakm1;
     PibPerCapita1 = (float) Pib1 /Populacao1;
     
 
     //Cadastro Carta 2
     printf("Carta 2\n");
     printf("Digite o estado: \n");
     scanf(" %s", &Estado2);
 
     printf("Digite o código: \n");
     scanf(" %s", Codigo2);
 
     printf("Digite a cidade: \n");
     scanf(" %s", Cidade2);
 
     printf("Digite o número da população: \n");
     scanf(" %d", &Populacao2);
 
     printf("Digite a Área em km²: \n");
     scanf(" %f", &Areakm2);
 
     printf("Digite o pib: \n");
     scanf(" %f", &Pib2);
 
     printf("Digite o número de pontos turísticos: \n");
     scanf(" %d", &NumPontosTuristicos2);

     // calculo da densidade populacional e pib per capita
     DensPopulacional2 = (float) Populacao2/ Areakm2;
     PibPerCapita2 = (float) Pib2 / Populacao2;

    // comparação das cartas
     if (Areakm1 > Areakm2) {
        printf("Cidade 1 tem maior área em km.\n");
       } else {
        printf("Cidade 2 tem maior área em km.\n");
       }

       // exibição do resultado
       printf("Carta 1 - %s (%s): %.3f\n", Cidade1, Estado1, Areakm1);
       printf("Carta 2 - %s (%s): %.3f\n", Cidade2, Estado1, Areakm2);
       //carta vencedora
       printf("Carta 1 (%s) venceu!\n", Cidade2 );

    

    return 0;
}