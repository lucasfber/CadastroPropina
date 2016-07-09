#ifndef LISTA_PARTIDO_H
#define LISTA_PARTIDO_H
#include "partido.h"

typedef struct lista_partido{
    Partido* partido;
    struct lista_partido* prox;
}ListaPartido;

/*retorna null, ou seja uma lista vazia que irá apontar pra NULL*/
ListaPartido* criarListaPartido();

/*Insere o Partido p na Lista Encadeada de Partido l e retorna o elemento recém inserido*/
ListaPartido* inserirPartido(ListaPartido* l,Partido* p);

/*lista todos os partidos inseridos na lista l*/
void listarPartidos(ListaPartido* l);

/*busca determinado partido tendo como chave sua sigla, se o encontrar retorna o partido, senão retorna NULL*/
Partido* buscarPartido(ListaPartido* l,char* sigla);

/*Altera o nome e a sigla de um determinado partido*/
Partido* modificarPartido(ListaPartido* l,char* sigla, char* novoNome, char* novaSigla);

/*Exclui um partido com base na sigla passada como parâmetro, retorna l atualizada caso obteve sucesso
e l sem modificações caso contrário*/
ListaPartido* excluirPartido(ListaPartido* l,char* sigla);

#endif
