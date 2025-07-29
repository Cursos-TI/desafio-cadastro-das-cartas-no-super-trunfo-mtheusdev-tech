#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
//Teste Matheus Andrade Prata

int main() {
    char co1[10], co2[10], n1[50], n2[50], sim[5], es1, es2;
    float pib1, pib2, ar1, ar2, dp1, dp2, tu1, tu2;
    unsigned int po1, po2;
    double pc1, pc2, invDap1, invDap2;
    int opcao, batalha;

    printf("\n¨¨¨¨ SUPER TRUNFO - PAÍSES ¨¨¨¨\n");
    printf("1 - Vamos jogar\n");
    printf("2 - Regras do jogo\n");
    printf("3 - Sair\n");
    printf("Escolha uma opção:");
    scanf("%d", &opcao); 

    switch (opcao)
    {
    case 1:

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
       
    double invDap1 = ar1 / (double) po1;
    double invDap2 = ar2 / (double) po2;

    unsigned long int super1 =(double) po1 + ar1 + pib1  + tu1 + invDap1 + pc1;
    unsigned long int super2 =(double) po2 + ar2 + pib2  + tu2 + invDap2 + pc2;

    printf("\n##########---Escolha um atributo para BATALHAR:---##########\n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Número de pontos turísticos \n");
    printf("5. PIB per capita \n");
    printf("6. Super Poder \n");
    printf("7. Densidade Demográfica \n");
    scanf("%d", &batalha);

    
    switch (batalha)
    {
    case 1:
           if (po1 > po2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("População: %s vence!\n", n1);
        printf("Valores: %s são %u --- %s são %u \n", n1, po1, n2, po2);
    } else if (po1 < po2){
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("População: %s vence!\n", n2);
        printf("Valores: %s são %u --- %s são %u \n", n1, po1, n2, po2);
    } else {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("População: Houve um empate! \n");
        printf("Valores: %s são %u --- %s são %u \n", n1, po1, n2, po2);
    }
        break;
    case 2:
           if (ar1 > ar2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Área: %s vence! \n", n1);
        printf("Valores: %s são %2.f --- %s são %2.f \n", n1, ar1, n2, ar2);
    } else if(ar1 < ar2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Área: %s vence! \n", n2);
        printf("Valores: %s são %2.f --- %s são %2.f \n", n1, ar1, n2, ar2);
    } else {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Área: Houve um empate! \n");
        printf("Valores: %s são %2.f --- %s são %2.f \n", n1, ar1, n2, ar2);
    }
        break;
    case 3:
           if (pib1 > pib2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("PIB: %s vence! \n", n1);
        printf("Valores: %s são %2.f --- %s são %2.f \n", n1, pib1, n2, pib2);
    } else if(pib1 < pib2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("PIB: %s vence! \n", n2);
        printf("Valores: %s são %2.f --- %s são %2.f \n", n1, pib1, n2, pib2);
    } else {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("PIB: Houve um empate! \n");
        printf("Valores: %s são %2.f --- %s são %2.f \n", n1, pib1, n2, pib2);
    }
        break;
    case 4:
           if (tu1 > tu2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Turísmo: %s vence! \n", n1);
        printf("Valores: %s são %2.f --- %s são %2.f \n", n1, tu1, n2, tu2);
    } else if(tu1 < tu2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Turísmo: %s vence! \n", n2);
        printf("Valores: %s são %2.f --- %s são %2.f \n", n1, tu1, n2, tu2);
    } else {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Turísmo: Houve um empate! \n");
        printf("Valores: %s são %2.f --- %s são %2.f \n", n1, tu1, n2, tu2);
    }
        break;
    case 5:
           if (pc1 < pc2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("PIB per capita: %s vence! \n", n1);
        printf("Valores: %s são %2.f --- %s são %2.f \n", n1, pc1, n2, pc2);
    } else if(pc1 > pc2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("PIB per capita: %s vence! \n", n2);
        printf("Valores: %s são %2.f --- %s são %2.f \n", n1, pc1, n2, pc2);
    } else {
         printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("PIB per capita: Houve um empate! \n");
        printf("Valores: %s são %2.f --- %s são %2.f \n", n1, pc1, n2, pc2);
    }
        break;
    case 6:
           if (super1 > super2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Super Poder: %s vence! \n", n1);
        printf("Valores: %s são %2.lu --- %s são %2.lu \n", n1, super1, n2, super2);
    } else if(super1 < super2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Super Poder: %s vence! \n", n2);
        printf("Valores: %s são %2.lu --- %s são %2.lu \n", n1, super1, n2, super2);
    } else {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Super Poder: Houve um empate! \n");
        printf("Valores: %s são %2.lu --- %s são %2.lu \n", n1, super1, n2, super2);
    }
        printf("\n---Valores óbitidos: SUPER PODER: %lu---\n", super1);
        printf("\n---Valores óbitidos: SUPER PODER: %lu---\n", super2); 
        break;
    case 7:
            if (invDap1 < invDap2){
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Densidade Demográfica: %s vence! \n", n1);
        printf("Valores: De %s são %.2f --- De %s são %.2f \n", n1, invDap1, n2, invDap2);
            } else if(invDap1 > invDap2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Densidade Demográfica: %s vence! \n", n2);
        printf("Valores: De %s são %.2f --- De %s são %.2f \n", n1, invDap1, n2, invDap2);
            } else {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Densidade Demográfica: Houve um empate! \n");
        printf("Valores: De %s são %.2f --- De %s são %.2f \n", n1, invDap1, n2, invDap2);
            }
            
    default:
     printf("\n***-- Opção inválida! Por favor, tente novamente! --***\n");
        break;
    }
 
     printf("\n¨¨¨¨¨ OBRIGADO POR JOGAR!!! ¨¨¨¨¨\n");
    return 0;
        break;

    case 2:
    printf("Regras do jogo:\n");
    printf("1. Vence a carta com maior valor no atributo escolhido\n ");
    printf("2. Para DENSIDADE DEMOGRÁFICA, a carta com menor valor vence.\n");
    printf("3. Os valores cadastrados devem ser real.\n");
        break;

    case 3:
    printf("\n............Saindo do jogo! Até logo..............\n");
        break;

    default:
    printf("***-- Opção inválida! Por favor, tente novamente! --***");
        return 1;
    }

    return 0;
}
