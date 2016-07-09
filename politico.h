#ifndef POLITICO_H
#define POLITICO_H
#include "partido.h"

typedef struct politico{
    char* nome;
    char* apelido;
    Partido* partido;
    char* cargo;
    float valorPropinaMensal;
    int quantidadeVezes;
}Politico;

Politico* criarPolitico(char* nomeCompleto,char* apelido,Partido* part,char* cargo,float propina,int quantidade);

#endif
