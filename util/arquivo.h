#ifndef ARQUIVO_H
#define ARQUIVO_H
#define TAMANHO_MAXIMO_LINHA 120
#include "../politico/lista_politico.h"
#include "../partido/lista_partido.h"
#include <stdio.h>

//const FILE* fEscrita = fopen("../dados.txt","r");

ListaPolitico* carregarDadosPolitico(ListaPolitico* lista,FILE* pLeitura);

void salvarPoliticos(ListaPolitico* lista,FILE* pEscrita);

void salvarAlteracoesPoliticos(ListaPolitico* lista,FILE* pEscrita);

ListaPartido* carregarDadosPartido(ListaPartido* lista,FILE* pLeitura);

void salvarPartidos(ListaPartido* lista,FILE* pEscrita);

void salvarAlteracoesPartidos(ListaPartido* listaPartidos,FILE* pPartido);


#endif // ARQUIVO_H
