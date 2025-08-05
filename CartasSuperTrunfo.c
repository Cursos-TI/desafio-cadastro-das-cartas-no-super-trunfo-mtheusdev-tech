#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
//Teste Matheus Andrade Prata

int main() {
    char co1[10], co2[10], n1[50], n2[50], sim[5], es1[5], es2[5];
    float pib1, pib2, ar1, ar2, dp1, dp2;
    unsigned long int po1, po2;
    double pc1, pc2, invDap1, invDap2, super1, super2;
    int opcao, batalha, batalha2, res1, res2, tu1, tu2;

    do{
    

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
    scanf(" %2s", es1);

    printf("Qual o código? \n");
    scanf(" %s", co1);

    getchar();

    printf("Qual o nome da cidade? \n");
    scanf(" %49[^\n]", n1); 

    printf("Qual o número da população? \n");
    scanf("%lu", &po1);

    while (getchar() != '\n');

    printf("Qual a área da cidade? \n");
    scanf("%f", &ar1);

    while (getchar() != '\n');

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &pib1);

    while (getchar() != '\n');

    printf("Número de pontos turístico? \n");
    scanf("%d", &tu1);

    while (getchar() != '\n');

    dp1 = (ar1 == 0) ? 0.0f : (float)po1 / ar1;   
    double pib1_em_reais = pib1 * 1000000000.0;
    pc1 = (po1 == 0) ? 0.0 : pib1_em_reais / po1;   
    double invDap1 = ar1 / (double) po1; 
    unsigned long int super1 = (double)po1 + ar1 + pib1  + tu1 + invDap1 + pc1 + dp1;    
       
        printf("\n--- Carta 01: ---\n");
        printf("Estado: %2s \n", es1);
        printf("Código: %s\n", co1);
        printf("Nome da cidade: %s \n", n1);
        printf("População: %lu \n", po1);
        printf("Área: %.2f Km² \n", ar1);
        printf("PIB: %.2f bilhões \n", pib1);
        printf("Número de Pontos Turístico: %d \n", tu1);
        printf("Densidade Populacional: %.2f hab/km²\n", dp1);
        printf("PIB per Capita: R$ %.2f \n", pc1);
        printf("Super Poder: %lu \n", super1); 

     printf("\nQual o Estado? \n");
    scanf(" %2s", es2);
    
    printf("Qual o código? \n");
    scanf(" %s", co2);

    getchar();

    printf("Qual nome da cidade? \n");
    scanf(" %49[^\n]", n2);

    printf("Qual o número da população? \n");
    scanf("%lu", &po2);

    while (getchar() != '\n');

    printf("Qual área da cidade? \n");
    scanf("%f", &ar2);

    while (getchar() != '\n');

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &pib2);

    while (getchar() != '\n');

    printf("Número de Pontos Turístico? \n");
    scanf("%d", &tu2);

    while (getchar() != '\n');

    dp2 = (ar2 == 0) ? 0.0f : (float)po2 / ar2;   
    double pib2_em_reais = pib2 * 1000000000.0;
    pc2 = (po2 == 0) ? 0.0 : pib2_em_reais / po2; 
    double invDap2 = ar2 / (double) po2;
    unsigned long int super2 = (double)po2 + ar2 + pib2  + tu2 + invDap2 + pc2 + dp2;


         printf("\n--- Carta 02: ---\n");
         printf("Estado: %2s \n", es2);
         printf("Código: %s \n", co2);
         printf("Nome da Cidade: %s \n", n2);
         printf("População: %lu \n", po2);
         printf("Área: %.2f Km² \n", ar2);
         printf("PIB: %.2f bilhões \n", pib2);
         printf("Número de Pontos Turístico: %d \n", tu2);
         printf("Densidade Populacional: %.2f hab/km² \n", dp2);
         printf("PIB per Capita: R$ %.2f \n", pc2);
         printf("Super Poder: %lu \n", super2); 

   

    printf("\n##########---Escolha o primeiro atributo para BATALHAR:---##########\n");
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
        printf("Valores: %s são %lu --- %s são %lu \n", n1, po1, n2, po2);
        res1 = 1;
    } else if (po1 < po2){
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("População: %s vence!\n", n2);
        printf("Valores: %s são %lu --- %s são %lu \n", n1, po1, n2, po2);
        res1 = 2;
    } else {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("População: Houve um empate! \n");
        printf("Valores: %s são %lu --- %s são %lu \n", n1, po1, n2, po2);
        res1 = 0;
    }
        break;
    case 2:
           if (ar1 > ar2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Área: %s vence! \n", n1);
        printf("Valores: %s são %.2f --- %s são %.2f \n", n1, ar1, n2, ar2);
        res1 = 1;
    } else if(ar1 < ar2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Área: %s vence! \n", n2);
        printf("Valores: %s são %.2f --- %s são %.2f \n", n1, ar1, n2, ar2);
        res1 = 2;
    } else {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Área: Houve um empate! \n");
        printf("Valores: %s são %.2f --- %s são %.2f \n", n1, ar1, n2, ar2);
        res1 = 0;
    }
        break;
    case 3:
           if (pib1 > pib2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("PIB: %s vence! \n", n1);
        printf("Valores: %s são %.2f --- %s são %.2f \n", n1, pib1, n2, pib2);
        res1 = 1;
    } else if(pib1 < pib2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("PIB: %s vence! \n", n2);
        printf("Valores: %s são %.2f --- %s são %.2f \n", n1, pib1, n2, pib2);
        res1 = 2;
    } else {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("PIB: Houve um empate! \n");
        printf("Valores: %s são %.2f --- %s são %.2f \n", n1, pib1, n2, pib2);
        res1 = 0;
    }
        break;
    case 4:
           if (tu1 > tu2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Turísmo: %s vence! \n", n1);
        printf("Valores: %s são %d --- %s são %d \n", n1, tu1, n2, tu2);
        res1 = 1;
    } else if(tu1 < tu2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Turísmo: %s vence! \n", n2);
        printf("Valores: %s são %d --- %s são %d \n", n1, tu1, n2, tu2);
        res1 = 2;
    } else {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Turísmo: Houve um empate! \n");
        printf("Valores: %s são %d --- %s são %d \n", n1, tu1, n2, tu2);
        res1 = 0;
    }
        break;
    case 5:
     printf("Batalha entre: %s -- %s \n", n1, n2); 
     res1 = (pc1 > pc2) ? 1 : ((pc2 > pc1) ? 2 : 0);   
     if (res1 == 1) {        printf("PIB per capita: %s vence! \n", n1);    
     } else if (res1 == 2) {        
        printf("PIB per capita: %s vence! \n", n2);    
     } else {        
     printf("PIB per capita: Houve um empate! \n");    }  
     printf("Valores: %s são %.2f --- %s são %.2f \n", n1, pc1, n2, pc2);   
           break; 
   /* res1 = pc1 > pc2 ? 1 : 0;
           if (pc1 < pc2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("PIB per capita: %s vence! \n", n1);
        printf("Valores: %s são %2.f --- %s são %2.f \n", n1, pc1, n2, pc2);
        res1 = 1;
    } else if(pc1 > pc2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("PIB per capita: %s vence! \n", n2);
        printf("Valores: %s são %2.f --- %s são %2.f \n", n1, pc1, n2, pc2);
        res1 = 2;
    } else {
         printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("PIB per capita: Houve um empate! \n");
        printf("Valores: %s são %2.f --- %s são %2.f \n", n1, pc1, n2, pc2);
        res1 = 0;
    }
        break; */
    case 6:
           if (super1 > super2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Super Poder: %s vence! \n", n1);
        printf("Valores: %s são %lu --- %s são %lu \n", n1, super1, n2, super2);
        res1 = 1;
    } else if(super1 < super2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Super Poder: %s vence! \n", n2);
        printf("Valores: %s são %lu --- %s são %lu \n", n1, super1, n2, super2);
        res1 = 2;
    } else {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Super Poder: Houve um empate! \n");
        printf("Valores: %s são %lu --- %s são %lu \n", n1, super1, n2, super2);
        res1 = 0;
    }
        break;
    case 7:
            if (invDap1 < invDap2){
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Densidade Demográfica: %s vence! \n", n1);
        printf("Valores: De %s são %f --- De %s são %f \n", n1, invDap1, n2, invDap2);
        res1 = 1;
            } else if(invDap1 < invDap2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Densidade Demográfica: %s vence! \n", n2);
        printf("Valores: De %s são %f --- De %s são %f \n", n1, invDap1, n2, invDap2);
        res1 = 2;
            } else {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Densidade Demográfica: Houve um empate! \n");
        printf("Valores: De %s são %f --- De %s são %f \n", n1, invDap1, n2, invDap2);
        res1 = 0;
            }
        break;    
    default:
     printf("\n***-- Opção inválida! Por favor, tente novamente! --***\n");
        break;
    }

    do {

         printf("\n##########---Escolha o segundo atributo para BATALHAR (diferente do primeiro):---##########\n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Número de pontos turísticos \n");
    printf("5. PIB per capita \n");
    printf("6. Super Poder \n");
    printf("7. Densidade Demográfica \n");
    scanf("%d", &batalha2);

    if (batalha2 == batalha) {
        printf("Erro: O segundo atributo não pode ser igual ao primeiro. Tente novamente. \n");
         } else if (batalha2 < 1 || batalha2 > 7) { 
        printf("Opção inválida. Por favor, tente novamente. \n");
         } 
        }while (batalha2 == batalha || batalha2 < 1 || batalha2 > 7);
    
    
    switch (batalha2)
    {
    case 1:
           if (po1 > po2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("População: %s vence!\n", n1);
        printf("Valores: %s são %lu --- %s são %lu \n", n1, po1, n2, po2);
        res2 = 1;
    } else if (po1 < po2){
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("População: %s vence!\n", n2);
        printf("Valores: %s são %lu --- %s são %lu \n", n1, po1, n2, po2);
        res2 =2;
    } else {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("População: Houve um empate! \n");
        printf("Valores: %s são %lu --- %s são %lu \n", n1, po1, n2, po2);
        res2 = 0;
    }
        break;
    case 2:
           if (ar1 > ar2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Área: %s vence! \n", n1);
        printf("Valores: %s são %.2f --- %s são %.2f \n", n1, ar1, n2, ar2);
        res2 = 1;
    } else if(ar1 < ar2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Área: %s vence! \n", n2);
        printf("Valores: %s são %.2f --- %s são %.2f \n", n1, ar1, n2, ar2);
        res2 = 2;
    } else {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Área: Houve um empate! \n");
        printf("Valores: %s são %.2f --- %s são %.2f \n", n1, ar1, n2, ar2);
        res2 = 0;
    }
        break;
    case 3:
           if (pib1 > pib2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("PIB: %s vence! \n", n1);
        printf("Valores: %s são %.2f --- %s são %.2f \n", n1, pib1, n2, pib2);
        res2 = 1;
    } else if(pib1 < pib2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("PIB: %s vence! \n", n2);
        printf("Valores: %s são %.2f --- %s são %.2f \n", n1, pib1, n2, pib2);
        res2 = 2;
    } else {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("PIB: Houve um empate! \n");
        printf("Valores: %s são %.2f --- %s são %.2f \n", n1, pib1, n2, pib2);
        res2 = 0;
    }
        break;
    case 4:
           if (tu1 > tu2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Turísmo: %s vence! \n", n1);
        printf("Valores: %s são %d --- %s são %d \n", n1, tu1, n2, tu2);
        res2 = 1;
    } else if(tu1 < tu2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Turísmo: %s vence! \n", n2);
        printf("Valores: %s são %d --- %s são %d \n", n1, tu1, n2, tu2);
        res2 = 2;
    } else {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Turísmo: Houve um empate! \n");
        printf("Valores: %s são %d --- %s são %d \n", n1, tu1, n2, tu2);
        res2 = 0;
    }
        break;
    case 5:
           if (pc1 < pc2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("PIB per capita: %s vence! \n", n1);
        printf("Valores: %s são %2.f --- %s são %2.f \n", n1, pc1, n2, pc2);
        res2 = 1;
    } else if(pc1 > pc2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("PIB per capita: %s vence! \n", n2);
        printf("Valores: %s são %2.f --- %s são %2.f \n", n1, pc1, n2, pc2);
        res2 = 2;
    } else {
         printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("PIB per capita: Houve um empate! \n");
        printf("Valores: %s são %2.f --- %s são %2.f \n", n1, pc1, n2, pc2);
        res2 = 0;
    }
        break;
    case 6:
           if (super1 < super2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Super Poder: %s vence! \n", n1);
        printf("Valores: %s são %lu --- %s são %lu \n", n1, super1, n2, super2);
        res2 = 1;
    } else if(super1 > super2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Super Poder: %s vence! \n", n2);
        printf("Valores: %s são %lu --- %s são %lu \n", n1, super1, n2, super2);
        res2 = 2;
    } else {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Super Poder: Houve um empate! \n");
        printf("Valores: %s são %lu --- %s são %lu \n", n1, super1, n2, super2);
        res2 = 0;
    }
        break;
    case 7:
            if (invDap1 < invDap2){
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Densidade Demográfica: %s vence! \n", n1);
        printf("Valores: De %s são %.2f --- De %s são %f \n", n1, invDap1, n2, invDap2);
        res2 = 1;
            } else if(invDap1 < invDap2) {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Densidade Demográfica: %s vence! \n", n2);
        printf("Valores: De %s são %.2f --- De %s são %.2f \n", n1, invDap1, n2, invDap2);
        res2 = 2;
            } else {
        printf("Batalha entre: %s -- %s \n", n1, n2);
        printf("Densidade Demográfica: Houve um empate! \n");
        printf("Valores: De %s são %.2f --- De %s são %.2f \n", n1, invDap1, n2, invDap2);
        res2 = 0;
            }
            
    default:
     printf("\n***-- Opção inválida! Por favor, tente novamente! --***\n");
        break;
    }

    if (res1 == 1 && res2 == 1) {
    printf("Parabéns, jogador! A carta %s venceu a rodada! \n", n1);
         } else if (res1 == 2 && res2 == 2) {
    printf("Parabéns, jogador! A carta %s venceu a rodada! \n", n2);
         } else {
    printf("Empate na rodada! \n");
         }
    
     printf("\n¨¨¨¨¨ OBRIGADO POR JOGAR!!! ¨¨¨¨¨\n");
        break;

    case 2:
    printf("Regras do jogo:\n");
    printf("1. Vence a carta com maior valor no atributo escolhido\n");
    printf("2. Para DENSIDADE DEMOGRÁFICA, a carta com menor valor vence.\n");
    printf("3. Os valores cadastrados devem ser real.\n");
        break;

    case 3:
    printf("Saindo do jogo! Até logo..............\n");
        break;

    default:
    printf("***-- Opção inválida! Por favor, tente novamente! --***");
        break;
    }
     
    } while (opcao !=  3);
    return 0;

     
}
