#include "../include/mergesort.h"

void merge(Geodata *dados, int inicio, int meio, int fim) {
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    Registro *L = malloc(n1 * sizeof(Registro));
    Registro *R = malloc(n2 * sizeof(Registro));

    for (int i = 0; i < n1; i++) L[i] = dados->registros[inicio + i];
    for (int j = 0; j < n2; j++) R[j] = dados->registros[meio + 1 + j];

    int i = 0, j = 0, k = inicio;

    while (i < n1 && j < n2) {
        if (L[i].populacao <= R[j].populacao)
            dados->registros[k++] = L[i++];
        else
            dados->registros[k++] = R[j++];
    }

    while (i < n1) dados->registros[k++] = L[i++];
    while (j < n2) dados->registros[k++] = R[j++];

    free(L);
    free(R);
}

void mergesort(Geodata *dados, int inicio, int fim) {
    if (inicio < fim) {
        int meio = (inicio + fim) / 2;
        mergesort(dados, inicio, meio);
        mergesort(dados, meio + 1, fim);
        merge(dados, inicio, meio, fim);
    }
}

