#include <stdio.h>

int main(){
   
    //Dados Cartas
    char estado1, estado2;
    char codigo1[5],codigo2[5];
    char cidade1[17],cidade2[17];
    signed long int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int turisticos1,turisticos2;
    float densidade1,densidade2;
    float capita1, capita2;
    float superpoder1, superpoder2;
    float inverso1, inverso2;

  
   //Cadastramento primeira carta
   printf("\nPreencha os dados da sua carta:\n");

   printf("Estado, uma letra de A-H: ");
   scanf(" %c", &estado1);
   printf("Código da Carta(ex:A01): ");
   scanf("%s", codigo1);
   printf("Nome da Cidade: ");
   scanf("%s", cidade1);
   printf("Número de habitantes: ");
   scanf(" %lu", &populacao1);
   printf("Área em quilometros quadrados: ");
   scanf("%f", &area1);
   printf("Digite o PIB(produto interno): ");
   scanf("%f", &pib1);
   printf("Quantidade de pontos turísticos: ");
   scanf("%d", &turisticos1);

    //Cadastramento segunda carta
   printf("\nPreencha os dados da sua carta:\n");

   printf("Estado, uma letra de A-H: ");
   scanf(" %c", &estado2);
   printf("Código da Carta(ex:A01): ");
   scanf("%s", codigo2);
   printf("Nome da Cidade: ");
   scanf("%s", cidade2);
   printf("Número de habitantes: ");
   scanf(" %lu", &populacao2);
   printf("Área em quilometros quadrados: ");
   scanf("%f", &area2);
   printf("Digite o PIB(produto interno): ");
   scanf("%f", &pib2);
   printf("Quantidade de pontos turísticos: ");
    scanf("%d", &turisticos2);

//Calculos
 densidade1= populacao1/area1;
 densidade2= populacao2/area2;
 capita1= pib1/populacao1;
 capita2= pib2/populacao2;
 inverso1 = area1 / (float)populacao1;
 inverso2 = area2 / (float)populacao2;
 superpoder1 = populacao1 + area1 + pib1 + turisticos1 + inverso1 + capita1;
 superpoder2 = populacao2 + area2 + pib2 + turisticos2 + inverso2 + capita2;

 
//Leitura Cartas
   printf("\nCARTA 1:\n");
   printf("Estado: %c\n",estado1);
   printf("Código: %s\n",codigo1);
   printf("Nome da Cidade: %s\n", cidade1);
   printf("População: %lu\n", populacao1);
   printf("Área: %.2f Km²\n",area1);
   printf("PIB: %.2f bilhões de reais\n",pib1);
   printf("Número de pontos turisticos: %d \n", turisticos1);
   printf("Densidade populacional: %.2f hab/km² \n", densidade1);
   printf("PIB per Capita: %.2f reais \n", capita1);
   printf("Super Poder: %f \n", superpoder1);

   printf("\nCARTA 2:\n");
   printf("Estado: %c\n",estado2);
   printf("Código: %s\n",codigo2);
   printf("Nome da Cidade: %s\n", cidade2);
   printf("População: %lu\n", populacao2);
   printf("Área: %.2f Km²\n",area2);
   printf("PIB: %.2f bilhões de reais\n",pib2);
   printf("Número de pontos turisticos: %d \n", turisticos2);
   printf("Densidade populacional: %.2f hab/km² \n", densidade2);
   printf("PIB per Capita: %.2f reais \n", capita2);
   printf("Super Poder: %f \n", superpoder2);

// Comparação  entre dois atributos
    
printf("\n COMPARANDO ENTRE A ÁREA\n");
printf("\nCarta 1: %s - %.2f \n", cidade1, area1);
printf("\nCarta 2: %s - %.2f \n", cidade2, area2);

if (area1>area2){
   printf("\nA Carta 1 Venceu! \n");
}else
   printf("A Carta 2  Venceu! \n");
   


    // Menu de atributos
    int atributo1, atributo2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;
    float soma1, soma2;

    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade populacional\n");
    scanf("%d", &atributo1);

    // Menu dinâmico para segundo atributo
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos turísticos\n"); break;
                case 5: printf("5 - Densidade populacional\n"); break;
            }
        }
    }
    scanf("%d", &atributo2);

    // Obter valores dos atributos com switch
    switch (atributo1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = turisticos1; valor1_carta2 = turisticos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        default: printf("Atributo 1 inválido!\n"); return 1;
    }

    switch (atributo2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = turisticos1; valor2_carta2 = turisticos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        default: printf("Atributo 2 inválido!\n"); return 1;
    }

    // Comparações individuais
    printf("\nComparando %s x %s\n", cidade1, cidade2);
    printf("Atributo 1: %d | Carta 1: %.2f | Carta 2: %.2f\n", atributo1, valor1_carta1, valor1_carta2);
    printf("Atributo 2: %d | Carta 1: %.2f | Carta 2: %.2f\n", atributo2, valor2_carta1, valor2_carta2);

    // Regra especial para densidade
    float resultado1 = (atributo1 == 5) ? (valor1_carta1 < valor1_carta2 ? 1 : 0) : (valor1_carta1 > valor1_carta2 ? 1 : 0);
    float resultado2 = (atributo2 == 5) ? (valor2_carta1 < valor2_carta2 ? 1 : 0) : (valor2_carta1 > valor2_carta2 ? 1 : 0);

    // Soma dos atributos
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    printf("\nSoma dos atributos:\nCarta 1: %.2f\nCarta 2: %.2f\n", soma1, soma2);

    // Resultado final
    printf("\nResultado Final:\n");
if (soma1 > soma2) {
    printf("Carta 1 venceu!\n");
} else if (soma2 > soma1) {
    printf("Carta 2 venceu!\n");
} else {
    printf("Empate!\n");
}

}
