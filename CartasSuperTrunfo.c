#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
/*Alterado o conteudo do int main() para receber o conteudo de 2 cartas e imprimir ambas no final sem uso de loop*/
int main() {
    //variaveis
    char estado, estado2;
    char cidade[50], cidade2[50];
    int codigo, codigo2;
    int populacao, populacao2;
    float area, area2;
    float PIB, PIB2;
    int n_pontos_turisticos, n_pontos_turisticos2;
    //inserção de dados carta 1
    printf("Para Carta 1:\n");
    printf("Digite o codigo do estado (letras de A a H): ");
    scanf(" %c", &estado);

    printf("Digite o codigo da cidade (numero de 1 a 4): ");
    scanf(" %d", &codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade);

    printf("Digite a populacao: ");
    scanf(" %d", &populacao);

    printf("Digite a area: ");
    scanf(" %f", &area);

    printf("Digite o PIB: ");
    scanf(" %f", &PIB);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &n_pontos_turisticos);

    printf("\n\n\n");
    //Inserção de dados carta 2
    printf("Para Carta 2:\n");
    printf("Digite o codigo do estado (letras de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da cidade (numero de 1 a 4): ");
    scanf(" %d", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao: ");
    scanf(" %d", &populacao2);

    printf("Digite a area: ");
    scanf(" %f", &area2);

    printf("Digite o PIB: ");
    scanf(" %f", &PIB2);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &n_pontos_turisticos2);

    printf("\n\n\n");

    printf("CARTA 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %c0%d\n", estado, codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$%.2f\n", PIB);
    printf("Numero de pontos turisticos: %d\n", n_pontos_turisticos);

    printf("\n\n\n");

    printf("CARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c0%d\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: R$%.2f\n", PIB2);
    printf("Numero de pontos turisticos: %d\n", n_pontos_turisticos2);
    return 0;

return 0;
} 
