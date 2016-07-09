#include "lista_politico.h"
#include <stdlib.h>
#include <stdio.h>

ListaPolitico* criarListaPolitico(){
    return NULL;
}

ListaPolitico* inserirPolitico(ListaPolitico* l,Politico* p){
    if(l != NULL){

    }
    ListaPolitico* novo = (ListaPolitico*) malloc(sizeof(ListaPolitico));
    novo->politico = p;
    novo->prox = l;

    return novo;
}

void listarPoliticos(ListaPolitico* l){
    while(l != NULL){
        printf("Nome: %s\nApelido: %s\nCargo: %s\nPartido: %s - %s\nPropina Mensal: R$ %.2f\nQuantidade de Vezes: %d\n\n",l->politico->nome,l->politico->apelido,l->politico->cargo,l->politico->partido->nome,l->politico->partido->sigla,l->politico->valorPropinaMensal,l->politico->quantidadeVezes);
        l = l->prox;
    }
}

void listarPoliticosPorPartido(ListaPolitico* l,char* sigla){
    while(l != NULL){
        if(strcmp(l->politico->partido->sigla,sigla) == 0){
            printf("Nome: %s\nApelido: %s\nCargo: %s\nPartido: %s - %s\nPropina Mensal: R$ %.2f\nQuantidade de Vezes: %d\n\n",l->politico->nome,l->politico->apelido,l->politico->cargo,l->politico->partido->nome,l->politico->partido->sigla,l->politico->valorPropinaMensal,l->politico->quantidadeVezes);
        }
        l = l->prox;
    }
}

Politico* buscarPolitico(ListaPolitico* l,char* apelido){
    while(l != NULL){
        if(strcmp(l->politico->apelido,apelido) == 0)
            return l->politico;

        l = l->prox;
    }

    return NULL;
}

Politico* modificarPolitico(ListaPolitico* l,char* apelido,char* nNome,char* nApelido,char* nCargo,Partido* nPartido,float nPropina,int nQtd){

    Politico* mod = buscarPolitico(l,apelido);
    if(mod != NULL){
        mod->nome = nNome;
        mod->apelido = nApelido;
        mod->cargo = nCargo;
        mod->valorPropinaMensal = nPropina;
        mod->quantidadeVezes = nQtd;
        free(mod->partido);
        mod->partido = nPartido;
        return mod;
    }
    return NULL;
}

