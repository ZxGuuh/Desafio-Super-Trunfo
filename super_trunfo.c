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

int main() {
    // Criando as cartas
    struct CartaSuperTrunfo brasilia, fortaleza;

    // Dados de Brasília
    strcpy(brasilia.estado, "DF");
    strcpy(brasilia.codigo, "A01");
    strcpy(brasilia.nomeCidade, "Brasília");
    brasilia.populacao = 2817381;
    brasilia.area = 5760.78;
    brasilia.pib = 286.94;
    brasilia.numeroPontosTuristicos = 12;

    // Dados de Fortaleza
    strcpy(fortaleza.estado, "CE");
    strcpy(fortaleza.codigo, "A02");
    strcpy(fortaleza.nomeCidade, "Fortaleza");
    fortaleza.populacao = 2465800;
    fortaleza.area = 314.93;
    fortaleza.pib = 67.03;
    fortaleza.numeroPontosTuristicos = 10;

    int opcao;

    // Menu de seleção
    printf("===== SUPER TRUNFO - CIDADES =====\n");
    printf("Escolha uma carta para visualizar:\n");
    printf("1 - Brasilia\n");
    printf("2 - Fortaleza\n");
    printf("Digite sua opção (1 ou 2): ");
    scanf("%d", &opcao);
    
}