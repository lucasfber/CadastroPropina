#ifndef LISTA_POLITICO_H
#define LISTA_POLITICO_H
#include "politico.h"
#include "../util/enums.h"

typedef struct lista_politico{
    Politico* politico;
    struct lista_politico* prox;
}ListaPolitico;

ListaPolitico* criarListaPolitico();

ListaPolitico* compararInserirPolitico(ListaPolitico* l, ListaPolitico* l2, Politico* p);

ListaPolitico* inserirPolitico(ListaPolitico* l,Politico* p);

void listarPoliticos(ListaPolitico* l);

void listarPoliticosPorPartido(ListaPolitico* l,char* sigla);

Politico* buscarPolitico(ListaPolitico* l,char* apelido);

Politico* modificarPolitico(ListaPolitico* l,char* apelido,char* nNome,char* nApelido,char* nCargo,Partido* nPartido,float nPropina,int nQtd);

ListaPolitico* excluirPolitico(ListaPolitico* l,char* apelido);

float gerarMontante(Politico* p);

float gerarMontantePorPartido(ListaPolitico* p,char* siglaPartido);

float gerarMontantePorMes(ListaPolitico* l,char* siglaPartido,Mes mes);

#endif
