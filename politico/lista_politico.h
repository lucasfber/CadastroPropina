#ifndef LISTA_POLITICO_H
#define LISTA_POLITICO_H
#include "politico.h"

typedef struct lista_politico{
    Politico* politico;
    struct lista_politico* prox;
}ListaPolitico;

ListaPolitico* criarListaPolitico();

ListaPolitico* inserirPolitico(ListaPolitico* l,Politico* p);

void listarPoliticos(ListaPolitico* l);

void listarPoliticosPorPartido(ListaPolitico* l,char* sigla);

Politico* buscarPolitico(ListaPolitico* l,char* apelido);

Politico* modificarPolitico(ListaPolitico* l,char* apelido,char* nNome,char* nApelido,char* nCargo,Partido* nPartido,float nPropina,int nQtd);

ListaPolitico* excluirPolitico(ListaPolitico* l,char* apelido);

#endif
