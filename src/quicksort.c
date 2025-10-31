#include "../include/quicksort.h"

int particionar(Geodata *dados, int inicio, int fim) {
    Registro pivo = dados->registros[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        if (dados->registros[j].populacao < pivo.populacao) {
            i++;
            Registro temp = dados->registros[i];
            dados->registros[i] = dados->registros[j];
            dados->registros[j] = temp;
        }
    }

    Registro temp = dados->registros[i + 1];
    dados->registros[i + 1] = dados->registros[fim];
    dados->registros[fim] = temp;

    return i + 1;
}

void quicksort(Geodata *dados, int inicio, int fim) {
    if (inicio < fim) {
        int p = particionar(dados, inicio, fim);
        quicksort(dados, inicio, p - 1);
        quicksort(dados, p + 1, fim);
    }
}

