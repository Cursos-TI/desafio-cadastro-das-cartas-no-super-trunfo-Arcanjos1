#include <stdio.h>

int main() {
// Carta 1
char estado_1;
char codigo_carta_1[4];
char nome_cidade_1[40];
int populacao_1;
float area_1;
float PIB_1;
int turistas_1;
float densidade_1;
float PIB_cap1;
float super1;


// Carta 2
char estado_2;
char codigo_carta_2[4];
char nome_cidade_2[40];
int populacao_2;
float area_2;
float PIB_2;
int turistas_2;
float densidade_2;
float PIB_cap2;
float super2;


// Entrada de dados carta 1
printf("***** Cadastro da carta 1 *****\n");
printf("Estado (uma letra de 'A' a 'H'): \n");
scanf(" %c", &estado_1);

printf("Código (exemplo: A01 ): \n");
scanf("%s", codigo_carta_1);

printf("Nome da cidade (exemplo: Minas_Gerais): \n");
scanf("%s", nome_cidade_1);

printf("Populaçao (sem pontos): \n");
scanf(" %d", &populacao_1);

printf("Área: \n");
scanf("%f", &area_1);

printf("PIB: \n");
scanf("%f", &PIB_1);

printf("Numero de pontos turísticos: \n");
scanf("%d", &turistas_1);


// Entrada de dados carta 2
printf("***** Cadastro carta 2 *****\n");

printf("Estado (uma letra de 'A'a 'H'): \n");
scanf(" %c", &estado_2);

printf("Código (exemplo: A01 ): \n");
scanf("%s", codigo_carta_2);

printf("Nome da cidade (exempo: São_Paulo): \n");
scanf("%s", nome_cidade_2);

printf("Populaçao (sem pontos): \n");
scanf("%d", &populacao_2);

printf("Área: \n");
scanf(" %f", &area_2);

printf("PIB: \n");
scanf("%f", &PIB_2);

printf("Numero de pontos turísticos: \n");
scanf("%d", &turistas_2);
printf("\n");

//calculo carta 1 e 2
densidade_1 = (float)populacao_1/area_1;
densidade_2 = (float)populacao_2/area_2;
super1 = (float)populacao_1 + area_1 + PIB_1 + (float)turistas_1 +PIB_cap1 + (1.0 / densidade_1);
super2 = (float)populacao_2 + area_2 + PIB_2 + (float)turistas_2 +PIB_cap2 + (1.0 / densidade_2);
PIB_cap1 = (float)PIB_1/populacao_1;
PIB_cap2 = (float)PIB_2/populacao_2;


//Saída de dados carta 1
printf("Carta 1 \n");
printf("Estado: %c\n", estado_1);
printf("Código: %s\n", codigo_carta_1);
printf("Nome da cidade: %s\n", nome_cidade_1);
printf("Populacao: %d\n", populacao_1);
printf("Área: %.2f km²\n", area_1);
printf("PIB: %.2f Bilhoes de reais\n", PIB_1);
printf("Numero de pontos turisticos: %d\n", turistas_1);
printf("Desnidade Populacional: %.2f  hab/km²\n", densidade_1);
printf("PIB per Capita: %2.f reais\n", PIB_cap1);
printf("Super poder: %.2f\n", super1);

//Saída de dados carta 2
printf("Carta 2 \n");
printf("Estado: %c\n", estado_2);
printf("Codigo: %s\n", codigo_carta_2);
printf("Nome da cidade: %s\n", nome_cidade_2);
printf("Populacao: %d\n", populacao_2);
printf("Area: %.2f km²\n", area_2);
printf("PIB: %.2f Bilhoes de reais\n", PIB_2);
printf("Numero de pontos turisticos: %d\n", turistas_2);
printf("Desnidade Populacional: %.2f  hab/km²\n", densidade_2);
printf("PIB per Capita: %2.f reais\n", PIB_cap2);
printf("Super poder: %.2f\n", super2);

//Comparaçoes das cartas 1 e 2
printf("*** Compraçoes das cartas ***\n");
printf("## Verdadeiro: 1 Falso: 2 ##\n");
printf("Populaçao: carta1 ganha da carta2? (%d)\n", populacao_1 > populacao_2);
printf("Area: Carta1 ganha da carta2? (%d)\n", area_1 > area_2);
printf("PIB: carta1 ganha da carta2? (%d)\n", PIB_1 > PIB_2);
printf("Numeros de pontos turisticos: carta1 ganha da carta2? (%d)\n", turistas_1 > turistas_2);
printf("Densidade populacional: carta1 ganha da carta2? (%d)\n", densidade_1 < densidade_2);
printf("PIB per capita: carta1 ganha da carta2? (%d)\n", PIB_cap1 > PIB_cap2);
printf("Super poder: carta1 ganha da carta2? (%d)\n", super1 > super2);






    return 0;
}