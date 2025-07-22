#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
// Carta 1
char estado_1;
char codigo_carta_1[4];
char nome_cidade_1[40];
int populaçao_1;
float área_1;
float PIB_1;
int turistas_1;
// Adiçao das varivaeis do nivel aventureiro
float densidade_1;
float PIB_cap1;


// Carta 2
char estado_2;
char codigo_carta_2[4];
char nome_cidade_2[40];
int populaçao_2;
float área_2;
float PIB_2;
int turistas_2;
// Adiçao das variaveis do nivel aventureiro
float densidade_2;
float PIB_cap2;


// Entrada de dados carta 1
printf("Cadastro da carta 1\n");
printf("Estado (uma letra de 'A'a 'H'): \n");
scanf(" %c", &estado_1);

printf("Código (exemplo: A01 ): \n");
scanf("%s", &codigo_carta_1);

printf("Nome da cidade (exemplo: Minas_Gerais): \n");
scanf("%s", &nome_cidade_1);

printf("Populaçao (sem pontos): \n");
scanf(" %d", &populaçao_1);

printf("Área: \n");
scanf("%f", &área_1);

printf("PIB: \n");
scanf("%f", &PIB_1);

printf("Numero de pontos turísticos: \n");
scanf("%d", &turistas_1);


// Entrada de dados carta 2
printf("Cadastro carta 2\n");

printf("Estado (uma letra de 'A'a 'H'): \n");
scanf(" %c", &estado_2);

printf("Código (exemplo: A01 ): \n");
scanf("%s", &codigo_carta_2);

printf("Nome da cidade (exempo: São_Paulo): \n");
scanf("%s", &nome_cidade_2);

printf("Populaçao (sem pontos): \n");
scanf("%d", &populaçao_2);

printf("Área: \n");
scanf(" %f", &área_2);

printf("PIB: \n");
scanf("%f", &PIB_2);

printf("Numero de pontos turísticos: \n");
scanf("%d", &turistas_2);
printf("\n");

//calculo da densidade populacional carta 1 e 2
densidade_1 = (float)populaçao_1/área_1;
densidade_2 = (float)populaçao_2/área_2;

// Calculo do pib per capita
PIB_cap1 = (float)PIB_1/populaçao_1;
PIB_cap2 = (float)PIB_2/populaçao_2;

//Saída de dados carta 1
printf("Carta 1 \n");
printf("Estado: %c\n", estado_1);
printf("Código: %s\n", codigo_carta_1);
printf("Nomeda cidade: %s\n", nome_cidade_1);
printf("Populaçao: %d\n", populaçao_1);
printf("Área: %.2f km²\n", área_1);
printf("PIB: %.2f Bilhoes de reais\n", PIB_1);
printf("Numero de pontos turisticos: %d\n", turistas_1);
printf("Desnidade Populacional: %.2f  hab/km²\n", densidade_1);
printf("PIB per Capita: %2.f reais\n", PIB_cap1);

//Saída de dados carta 2
printf("Carta 2 \n");
printf("Estado: %c\n", estado_2);
printf("Código: %s\n", codigo_carta_2);
printf("Nome da cidade: %s\n", nome_cidade_2);
printf("Populaçao: %d\n", populaçao_2);
printf("Área: %.2f km²\n", área_2);
printf("PIB: %.2f Bilhoes de reais\n", PIB_2);
printf("Numero de pontos turisticos: %d\n", turistas_2);
printf("Desnidade Populacional: %.2f  hab/km²\n", densidade_2);
printf("PIB per Capita: %2.f reais\n", PIB_cap2);









    return 0;
}
