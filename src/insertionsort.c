#include "../include/insertionsort.h"

void insertionsort(Geodata *dados) {
    for (int i = 1; i < dados->tamanho; i++) {
        Registro key = dados->registros[i];
        int j = i - 1;

        while (j >= 0 && dados->registros[j].populacao > key.populacao) {
            dados->registros[j + 1] = dados->registros[j];
            j--;
        }

        dados->registros[j + 1] = key;
    }
}

