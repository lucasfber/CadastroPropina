#include "lista_partido.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

ListaPartido* criarListaPartido(){
    return NULL;
}

ListaPartido* inserirPartido(ListaPartido* l,Partido* p){
    ListaPartido* lista = malloc(sizeof(ListaPartido));
    lista->partido = p;
    lista->prox = l;

    return lista;
}

void listarPartidos(ListaPartido* l){
    printf("===================LISTA DOS PARTIDOS CADASTRADOS===================\n\n");
    while(l != NULL){
        printf("Nome do Partido: %s\nSigla do Partido: %s\n\n", l->partido->nome, l->partido->sigla);
        l = l->prox;
    }

}

Partido* buscarPartido(ListaPartido* l,char* sigla){
    ListaPartido* aux = l->prox;

    /*Partido está no inicio da lista*/
    if(strcmp(l->partido->sigla,sigla) == 0)
        return l->partido;


    while(aux != NULL){
        if(strcmp(aux->partido->sigla,sigla) == 0)
            return aux->partido;

         aux = aux->prox;
   }

    return NULL;
}

Partido* modificarPartido(ListaPartido* l,char* sigla, char* novoNome, char* novaSigla){
    Partido* modificado = buscarPartido(l,sigla);

    if(modificado != NULL){
        modificado->nome = novoNome;
        modificado->sigla = novaSigla;

        return modificado;
    }

    return NULL;
}

ListaPartido* excluirPartido(ListaPartido* l,char* sigla){

    ListaPartido* anterior = NULL;
    ListaPartido* atual = l;

    while(atual != NULL && strcmp(atual->partido->sigla,sigla) != 0){
        anterior = atual;
        atual = atual->prox;
    }

    /*Percorreu a lista toda e nao encontrou o elemento, retorna a lista sem modificar*/
    if(atual == NULL)
        return l;

    /*O elemento procurado é o primeiro da lista*/
    if(anterior == NULL){
        l = atual->prox;
    }
    else{
        anterior->prox = atual->prox;
    }
    free(atual);

    return l;
}
