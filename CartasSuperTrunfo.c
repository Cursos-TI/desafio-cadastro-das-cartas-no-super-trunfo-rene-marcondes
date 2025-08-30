#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
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
// Declaração das variáveis da Carta 1
char estado1;
char codigo[4];
char nomeCidade1[50];
int populacao1;
float area1;
float pib1;
int pontosTuristicos1;

// Declaração das variáveis da Carta 2
char estado2;
char codigo2[4];
char nomeCidade2[50];
int populacao2;
float  area2;
float pib2;
int pontosTuristicos2;

// Entrada de dados da Carta 1 =
printf("Cadastro da Carta 1 \n");

printf("Digite o estado (A-H): ");
scanf(" %c", &estado1);

printf("Digite o codigo da carta (ex: A01): ");
scanf("%s", codigo1);

printf("Digite o nome da cidade: ");
scanf(" %[^\n]", nomeCidade1);

printf("Digite a populacao: ");
scanf("%d", &populacao1);

printf("Digite a area em km2: ");
scanf("%f", &area1);

prinf("Digite o PIB: ");
scanf("%f", &pib1);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &pontosTuristicos1);

 //  Entrada de dados da Carta 2 
 prinf("\n=== Cadastro da Carta 2 ===\n");

 prinf("Digite o estado (A-H): ");
 scanf(" %c", &estado2);

 printf("Digite o codigo da carta (ex: B02): ");
 scanf("%s", codigo2);

 printf("Digite o nome da cidade: );
 scanf(" %[^\n]", nomeCidade2);

 printf("Digite a populacao: ");
 scanf("%d", &populacao);

 printf("Digite a area em km2: ");
 scanf("%f", &area2);

 printf("Digite o PIB: ");
 scanf("%d", &pontosTuristicos2);

 // Saída dos dados das cartas 

 printf("\n===== CARTA 1 =====\n");
 printf("Estado: %c\n", estado1);
 printf("Codigo: %s\n", codigo1);
 printf("Nome da Cidade: %s\n", nomeCidade1);
 printf("Populacao: %d\n", populacao1);
 printf("Area: %.2f km2\n", area1);
 printf("PIB: %.2f bilhoes de reais\n", pib1);
 printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

 printf("\n===== CARTA 2 =====\n);
 printf("Estado: %c\n", estado2);
 printf("Codigo: %s\n", codigo2);
 printf("Nome da Cidade: %s\n", nomeCidade2);
 printf("Populacao: %d\n", populacao2);
 printf("Area: %.2f km2\n", area2);
 printf("PIB: %.2f bilhoes de reais\n", pib2);
 printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

  return 0;
}