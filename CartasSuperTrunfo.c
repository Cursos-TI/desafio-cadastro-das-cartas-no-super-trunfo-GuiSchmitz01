#include <stdio.h> // Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Variáveis para a primeira cidade (Aracaju)
    int codigoCidade1 = 1;
    char nomeCidade1[50] = "Aracaju";
    int populacaoCidade1 = 657500;
    float areaCidade1 = 136.8f; // km²
    float pibCidade1 = 8000.0f; // milhões
    int numPontosTuristicosCidade1 = 10;

    // Variáveis para a segunda cidade (Curitiba)
    int codigoCidade2 = 2;
    char nomeCidade2[50] = "Curitiba";
    int populacaoCidade2 = 1956000;
    float areaCidade2 = 430.9f; // km²
    float pibCidade2 = 150000.0f; // milhões
    int numPontosTuristicosCidade2 = 20;

    // Exibição dos dados das cidades
    printf("Dados da primeira cidade:\n");
    printf("Código: %d\n", codigoCidade1);
    printf("Nome: %s\n", nomeCidade1);
    printf("População: %d\n", populacaoCidade1);
    printf("Área: %.2f km²\n", areaCidade1);
    printf("PIB: %.2f milhões\n", pibCidade1);
    printf("Pontos turísticos: %d\n", numPontosTuristicosCidade1);

    printf("\nDados da segunda cidade:\n");
    printf("Código: %d\n", codigoCidade2);
    printf("Nome: %s\n", nomeCidade2);
    printf("População: %d\n", populacaoCidade2);
    printf("Área: %.2f km²\n", areaCidade2);
    printf("PIB: %.2f milhões\n", pibCidade2);
    printf("Pontos turísticos: %d\n", numPontosTuristicosCidade2);

      return 0;
}
