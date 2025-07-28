#include <stdio.h>

// Desafio Super Trunfo - Países
//Teste Matheus Andrade Prata

int main() {
    char co1[10], co2[10], n1[50], n2[50], sim[5], sim2[5], es1, es2;
    float pib1, pib2, ar1, ar2, dp1, dp2, tu1, tu2;
    unsigned int po1, po2;
    double pc1, pc2;

    printf("\n¨¨¨¨VAMOS JOGAR???¨¨¨¨\n");
    scanf("%s", sim2);

    printf("Qual o Estado? \n");
    scanf(" %c", &es1);

    printf("Qual o código? \n");
    scanf(" %s", co1);

    printf("Qual o nome da cidade? \n");
    scanf(" %[^\n]", n1); 

    printf("Qual o número da população? \n");
    scanf("%u", &po1);

    printf("Qual a área da cidade? \n");
    scanf("%f", &ar1);

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &pib1);

    printf("Número de pontos turístico? \n");
    scanf("%f", &tu1);

    dp1 = po1 / ar1;
    pib1 = pib1 * 1000000000;
    pc1 = (double)pib1 / po1;

        printf("\n--- Carta 01: ---\n");
        printf("Estado: %c \n", es1);
        printf("Código: %s\n", co1);
        printf("Nome da cidade: %s \n", n1);
        printf("População: %u \n", po1);
        printf("Área: %.2f Km² \n", ar1);
        printf("PIB: %.2f bilhões \n", pib1);
        printf("Número de Pontos Turístico: %.2f \n", tu1);
        printf("Densidade Populacional: %.2f hab/km²\n", dp1);
        printf("PIB per Capita: R$ %.2f \n", pc1);
    
            
    printf("\nQual o Estado? \n");
    scanf(" %c", &es2);
    
    printf("Qual o código? \n");
    scanf(" %s", co2);

    printf("Qual nome da cidade? \n");
    scanf(" %[^\n]", n2);

    printf("Qual o número da população? \n");
    scanf("%u", &po2);

    printf("Qual área da cidade? \n");
    scanf("%f", &ar2);

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turístico? \n");
    scanf("%f", &tu2);

     dp2 = po2 / ar2;
     pib2 = pib2 * 1000000000;
     pc2 = (double) pib2 / po2; 

         printf("\n--- Carta 02: ---\n");
         printf("Estado: %c \n", es2);
         printf("Código: %s \n", co2);
         printf("Nome da Cidade: %s \n", n2);
         printf("População: %u \n", po2);
         printf("Área: %.2f Km² \n", ar2);
         printf("PIB: %.2f bilhões \n", pib2);
         printf("Número de Pontos Turístico: %.2f \n", tu2);
         printf("Densidade Populacional: %.2f hab/km² \n", dp2);
         printf("PIB per Capita: R$ %.2f \n", pc2);

    printf("\n---PRONTO PARA BATALHAR?---\n");
    scanf("%s", sim);

    double invDap1 = ar1 / (double) po1;
    double invDap2 = ar2 / (double) po2;

    unsigned long int super1 =(double) po1 + ar1 + pib1  + tu1 + invDap1 + pc1;
    unsigned long int super2 =(double) po2 + ar2 + pib2  + tu2 + invDap2 + pc2;

    // DESENVOLVENDO A LÓGICA DO JOGO

     printf("\n---RESULTADOS---\n");

    if (po1 > po2) {
        printf("População: %s vence!\n", co1);
    } else {
        printf("População: %s vence!\n", co2);
    }
    if (ar1 > ar2) {
        printf("Área: %s vence! \n", co1);
    } else {
        printf("Área: %s vence! \n", co2);
    }
    if (pib1 > pib2) {
        printf("PIB: %s vence! \n", co1);
    } else {
        printf("PIB: %s vence1 \n", co2);
    }
    if (tu1 > tu2) {
        printf("Turísmo: %s vence! \n", co1);
    } else {
        printf("Turísmo: %s vence! \n", co2);
    }
    if (pc1 < pc2) {
        printf("PIB per capita: %s vence! \n", co1);
    } else {
        printf("PIB per capita: %s vence! \n", co2);
    }
    if (super1 > super2) {
        printf("Super Poder: %s vence! \n", co1);
    } else {
        printf("Super Poder: %s vence! \n", co2);
    }
    
     /* NÍVEL 1 DO MODO MESTRE
    int Vencepop = (po1 > po2) ? 1 : 0;
    int Vencear = (ar1 > ar2) ? 1 : 0;
    double Vencepib = (pib1 > pib2) ? 1 : 0;
    int Vencenum = (tu1 > tu2) ? 1 : 0;
    int Venceper = (pc1 > pc2) ? 1 : 0;
    int Vencesup = (super1 > super2) ? 1 : 0;

     printf("\n---RESULTADOS---\n");
     printf("População: %u vence!\n", Vencepop? 1 : 2);
     printf("Área: %u vence!\n", Vencear? 1 : 2);
     printf("PIB: %u vence!\n", Vencepib? 1 : 2);
     printf("Turísmo: %d vence!\n", Vencenum? 1: 2);
     printf("PIB per capita: %u vence!\n", Venceper? 1 : 2);
     printf("Super Poder: %u vence!\n", Vencesup? 1 : 2); */

     printf("\n---Valores óbitidos: SUPER PODER: %lu---\n", super1);
     printf("\n---Valores óbitidos: SUPER PODER: %lu---\n", super2); 

     printf("\n¨¨¨¨¨ OBRIGADO POR JOGAR!!! ¨¨¨¨¨\n");
    return 0;
}
