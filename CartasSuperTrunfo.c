#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
printf("Super Trunfo\n");
printf("Carta 1 \n");
char estado;
int numero;
char codigo[4];
char nome[30];
int populaçao;
float área;
float PIB;
int turistas;

printf("Estado: \n");
scanf(" %c", &estado);

printf("Código: \n");
scanf("%d", &numero);
sprintf(codigo, "%c%02d", estado, numero);

printf("Nome da cidade: \n");
scanf("%s", &nome);

printf("Populaçao: \n");
scanf("%d", &populaçao);

printf("Área: \n");
scanf("%f", &área);

printf("PIB: \n");
scanf("%f", &PIB);

printf("Numero de pontos turísticos: \n");
scanf("%d", &turistas);

printf("Estado: %c\n", estado);
printf("Código: %s\n", codigo);
printf("Nomeda cidade: %s\n", nome);
printf("Populaçao: %d\n", populaçao);
printf("Área: %f km²\n", área);
printf("PIB: %f Bilhoes de reais\n", PIB);
printf("Numero de pontos turisticos: %d\n", turistas);


printf("Carta 2 \n");

printf("Estado: \n");
scanf(" %c", &estado);

printf("Código: \n");
scanf("%d", &numero);
sprintf(codigo, "%c%02d", estado, numero);

printf("Nome da cidade: \n");
scanf("%s", &nome);

printf("Populaçao: \n");
scanf("%d", &populaçao);

printf("Área: \n");
scanf("%f", &área);

printf("PIB: \n");
scanf("%f", &PIB);

printf("Numero de pontos turísticos: \n");
scanf("%d", &turistas);

printf("Estado: %c\n", estado);
printf("Código: %s\n", codigo);
printf("Nomeda cidade: %s\n", nome);
printf("Populaçao: %d\n", populaçao);
printf("Área: %f km²\n", área);
printf("PIB: %f Bilhoes de reais\n", PIB);
printf("Numero de pontos turisticos: %d\n", turistas);









    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
