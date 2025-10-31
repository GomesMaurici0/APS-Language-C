#ifndef GEODATA_H
#define GEODATA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char cidade[100];
    float latitude;
    float longitude;
    int populacao;
} Registro;

typedef struct {
    Registro *registros;
    int tamanho;
} Geodata;

Geodata *carregar_dados(const char *arquivo);
void salvar_dados(const char *arquivo, Geodata *dados);
void liberar_dados(Geodata *dados);

#endif

