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

 //Calculos super poder

 inverso1=  area1/(float)populacao1;
 inverso2=  area2/(float)populacao2;

 superpoder1= (float)populacao1+area1+pib1+turisticos1+inverso1+capita1;
 superpoder2= (float)populacao2+area2+pib2+turisticos2+inverso2+capita2;


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
   


   //MENU INTERATIVO

//VARIAVEL
int escolhajogador;

printf("\n #### ESCOLHA O ATRIBUTO QUE DESEJA COMPARAR ####\n");
printf("1-População\n");
printf("2-Área\n");
printf("3-Pib\n");
printf("4-Pontos turisticos\n");
printf("5-Densidade populacional\n");
scanf("%d", &escolhajogador);


printf ("\nComparação : %s x %s \n", cidade1, cidade2);

switch (escolhajogador){

case 1: //POPULAÇAO

printf ("População: %lu x  %lu \n", populacao1, populacao2 );

if (populacao1>populacao2){
    printf("\nParabéns Carta 1 venceu!\n");
}
else if(populacao1 < populacao2){
    printf("\nParabéns Carta 2 venceu!\n");
}
else{
     printf("\nHouve um empate!\n");
}
break;

case 2: //ÁREA

printf ("Área: %2.f x  %2.f \n", area1,area2 );

if (area1>area2){
    printf("\nParabéns Carta 1 venceu!\n");
}
else if(area1<area2){
    printf("\nParabéns Carta 2 venceu!\n");
}
else
    printf("\nHouve um empate!\n");

break;

case 3: //PIB

printf ("PIB : %2.f x  %2.f \n", pib1,pib2);

if (pib1>pib2){
    printf("\nParabéns Carta 1 venceu!\n");
}
else if(pib1<pib2){
    printf("\nParabéns Carta 2 venceu!\n");
}
else
    printf("\nHouve um empate!\n");

break;

case 4: //Pontos turisticos

printf ("Pontos turisticos: %d x %d \n", turisticos1,turisticos2);

if (turisticos1>turisticos2){
    printf("\nParabéns Carta 1 venceu!\n");
}
else if(turisticos1<turisticos2){
    printf("\nParabéns Carta 2 venceu!\n");
}
else
    printf("\nHouve um empate!\n");

break;

case 5: //Densidade demografica

printf ("Densidade populacional: %f x %f \n", densidade1,densidade2);

if (densidade1<densidade2){
    printf("\nParabéns Carta 1 venceu!\n");
}
else if(densidade2<densidade1){
    printf("\nParabéns Carta 2 venceu!\n");
}
else
    printf("\nHouve um empate!\n");

break;
}

return 0;
}