#include <stdio.h>

// Declaração das variaveis das cartas
int main (){
    char* carta1 = "A";
    char* carta2 = "B";
    char cidade1[20] = "Rio de Janeiro";
    char cidade2[20] = "Sao Paulo";
    char codigo1 = "A01";
    char codigo2 = "B02";
    int populacao1 = 6730729;
    int populacao2 = 11000000;
    float area1 = 11.823f;
    float area2 = 152.111f;
    float PIB1 = 1.3f;
    float pib2 = 3.5f;
    int turisticos1 = 100;
    int turisticos2 = 86;

// Entrada e saída de dados
    printf("Digite o código da sua carta (A/B): ");
    scanf(" %c", &carta1);
    printf("Digite o código da carta do adversário (A/B): ");
    scanf(" %c", &carta2);
    printf("\nCarta 1\n");
    printf("Estado: %c \nCódigo: A01 \nNome da cidade: %s\nPopulação: %d\nÁrea: %f km²\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %d\n ", carta1,cidade1,populacao1,area1,PIB1,turisticos1);
    printf("\nCarta 2\n");
    printf("Estado: %c \nCódigo: B02 \nNome da cidade: %s\nPopulação: %d\nÁrea: %f km²\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %d\n ", carta2,cidade2,populacao2,area2,pib2,turisticos2);

    return 0;


}
