#include "../include/geodata.h"

Geodata *carregar_dados(const char *arquivo) {
    FILE *fp = fopen(arquivo, "r");
    if (!fp) return NULL;

    Geodata *dados = malloc(sizeof(Geodata));
    dados->registros = NULL;
    dados->tamanho = 0;

    char linha[256];
    while (fgets(linha, sizeof(linha), fp)) {
        dados->tamanho++;
        dados->registros = realloc(dados->registros, dados->tamanho * sizeof(Registro));

        Registro *r = &dados->registros[dados->tamanho - 1];
        sscanf(linha, "%99[^,],%f,%f,%d", r->cidade, &r->latitude, &r->longitude, &r->populacao);
    }

    fclose(fp);
    return dados;
}

void salvar_dados(const char *arquivo, Geodata *dados) {
    FILE *fp = fopen(arquivo, "w");
    if (!fp) return;

    for (int i = 0; i < dados->tamanho; i++) {
        fprintf(fp, "%s,%.2f,%.2f,%d\n",
                dados->registros[i].cidade,
                dados->registros[i].latitude,
                dados->registros[i].longitude,
                dados->registros[i].populacao);
    }

    fclose(fp);
}

void liberar_dados(Geodata *dados) {
    free(dados->registros);
    free(dados);
}

