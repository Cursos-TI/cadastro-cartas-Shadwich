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
    unsigned long int populacao, populacao2;
    float area, area2;
    float PIB, PIB2;
    int n_pontos_turisticos, n_pontos_turisticos2;
    float densidade_pop1, densidade_pop2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    printf("Para Carta 1:\n");
    printf("Digite o codigo do estado (letras de A a H): ");
    scanf(" %c", &estado);

    printf("Digite o codigo da cidade (numero de 1 a 4): ");
    scanf(" %d", &codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade);

    printf("Digite a populacao: ");
    scanf(" %lu", &populacao);

    printf("Digite a area: ");
    scanf(" %f", &area);

    printf("Digite o PIB: ");
    scanf(" %f", &PIB);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &n_pontos_turisticos);

    printf("\n\n\n");

    printf("Para Carta 2:\n");
    printf("Digite o codigo do estado (letras de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da cidade (numero de 1 a 4): ");
    scanf(" %d", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao: ");
    scanf(" %lu", &populacao2);

    printf("Digite a area: ");
    scanf(" %f", &area2);

    printf("Digite o PIB: ");
    scanf(" %f", &PIB2);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &n_pontos_turisticos2);

    // Calcular densidade populacional e PIB per capita
    densidade_pop1 = (float)populacao / area;
    pib_per_capita1 = PIB / (float)populacao;

    densidade_pop2 = (float)populacao2 / area2;
    pib_per_capita2 = PIB2 / (float)populacao2;

    // Calcular Super Poder
    super_poder1 = (float)populacao + area + PIB + (float)n_pontos_turisticos + pib_per_capita1 + (1.0 / densidade_pop1);
    super_poder2 = (float)populacao2 + area2 + PIB2 + (float)n_pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_pop2);

    printf("\n\n");

    printf("CARTA 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %c0%d\n", estado, codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %lu\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: R$%.2f\n", PIB);
    printf("Numero de pontos turisticos: %d\n", n_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\n");

    printf("CARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c0%d\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: R$%.2f\n", PIB2);
    printf("Numero de pontos turisticos: %d\n", n_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    printf("\n\n");
    printf("Comparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", (populacao > populacao2) ? 1 : 2, (populacao > populacao2));
    printf("Area: Carta %d venceu (%d)\n", (area > area2) ? 1 : 2, (area > area2));
    printf("PIB: Carta %d venceu (%d)\n", (PIB > PIB2) ? 1 : 2, (PIB > PIB2));
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (n_pontos_turisticos > n_pontos_turisticos2) ? 1 : 2, (n_pontos_turisticos > n_pontos_turisticos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade_pop1 < densidade_pop2) ? 1 : 2, (densidade_pop1 < densidade_pop2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2, (pib_per_capita1 > pib_per_capita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, (super_poder1 > super_poder2));

return 0;
} 
