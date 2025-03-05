#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo1, codigo2;
    char nome1, nome2;
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;


    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o código da primeira carta (formato: A01, B02, etc): ");
    scanf("%s", &codigo1);

    printf("Digite o nome da primeira carta: ");
    scanf("%s", &nome1);
    
    printf("Digite a população da primeira carta: ");
    scanf("%d", &populacao1);

    printf("Digite a Área da primeira carta: ");
    scanf("%d", &area1);

    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da primeira carta: ");
    scanf("%d", &pontos_turisticos1);


    printf("Digite o código da segunda carta (formato: A01, B02, etc): ");
    scanf("%s", &codigo2);

    printf("Digite o nome da segunda carta: ");
    scanf("%s", &nome2);
    
    printf("Digite a população da segunda carta: ");
    scanf("%d", &populacao2);

    printf("Digite a Área da segunda carta: ");
    scanf("%d", &area2);

    printf("Digite o PIB da segunda carta: ");
    scanf("%d", &pib2);

    printf("Digite a quantidade de pontos turísticos da segunda carta: ");
    scanf("%d", &pontos_turisticos2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibição da primeira carta
    printf("Carta 1:\n");
    printf("Nome: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n\n", pontos_turisticos1);
    
    // Exibição da segunda carta
    printf("Carta 2:\n");
    printf("Nome: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);


    return 0;
}
