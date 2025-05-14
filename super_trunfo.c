#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para strcpy

// Estrutura da carta
struct CartaSuperTrunfo {
    char estado[3];
    char codigo[4];
    char nomeCidade[30];
    int populacao;
    float area;
    float pib;
    int numeroPontosTuristicos;

};

// Função para exibir uma carta
void exibirCarta(struct super_trunfo carta) {
    printf("\n=== Carta Selecionada ===\n");
    printf("Estado: %s\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: R$ %.2f bilhões\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.numeroPontosTuristicos);
    printf("=========================\n\n");
}