#include <stdio.h>
#include <stdlib.h>
#include "../include/geodata.h"
#include "../include/quicksort.h"
#include "../include/mergesort.h"
#include "../include/insertionsort.h"

int main() {
    Geodata *dados = carregar_dados("dados.csv");
    if (dados == NULL) {
        printf("Erro ao carregar os dados geoespaciais!\n");
        return 1;
    }

    printf("Ordenando dados com QuickSort...\n");
    quicksort(dados, 0, dados->tamanho - 1);

    printf("Ordenação concluída!\n");
    salvar_dados("resultado.csv", dados);

    liberar_dados(dados);
    return 0;
}

