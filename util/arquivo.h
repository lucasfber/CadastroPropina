#ifndef ARQUIVO_H
#define ARQUIVO_H
#define TAMANHO_MAXIMO_LINHA 120
#include "../politico/lista_politico.h"
#include <stdio.h>

//const FILE* fEscrita = fopen("../dados.txt","r");

ListaPolitico* carregarDadosPolitico(ListaPolitico* lista,FILE* pLeitura);

void salvarPoliticos(ListaPolitico* lista,FILE* pEscrita);
#endif // ARQUIVO_H
