#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
//Teste Matheus Andrade Prata

int main() {
    char co1[10], co2[10]; 
    int tu1, tu2;
    float pib1, pib2, ar1, ar2, po1, po2;
    char n1[50], n2[50], es1, es2;

    printf("Qual o Estado? \n");
    scanf(" %c", &es1);

    printf("Qual o código? \n");
    scanf(" %s", co1);

    printf("Qual o nome da cidade? \n");
    scanf(" %[^\n]", n1); 

    printf("Qual o número da população? \n");
    scanf("%f", &po1);

    printf("Qual a área da cidade? \n");
    scanf("%f", &ar1);

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &pib1);

    printf("Número de pontos turístico? \n");
    scanf("%d", &tu1);

     printf("\n--- Carta 01: ---\n");
      printf("Estado: %c \n", es1);
       printf("Código: %s\n", co1);
        printf("Nome da cidade: %s \n", n1);
         printf("População: %.2f \n", po1);
          printf("Área: %.2f Km² \n", ar1);
           printf("PIB: %.2f bilhões \n", pib1);
            printf("Número de Pontos Turístico: %d \n", tu1);
    
            
    printf("\nQual o Estado? \n");
    scanf(" %c", &es2);
    
    printf("Qual o código? \n");
    scanf(" %s", co2);

    printf("Qual nome da cidade? \n");
    scanf(" %[^\n]", n2);

    printf("Qual o número da população? \n");
    scanf("%f", &po2);

    printf("Qual área da cidade? \n");
    scanf("%f", &ar2);

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turístico? \n");
    scanf("%d", &tu2);

     printf("\n--- Carta 02: ---\n");
      printf("Estado: %c \n", es2);
       printf("Código: %s \n", co2);
        printf("Nome da Cidade: %s \n", n2);
         printf("População: %.2f \n", po2);
          printf("Área: %.2f Km² \n", ar2);
           printf("PIB: %.2f bilhões \n", pib2);
            printf("Número de Pontos Turístico: %d \n", tu2);

    return 0;
}
