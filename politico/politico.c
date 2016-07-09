#include "politico.h"
#include <stdlib.h>

Politico* criarPolitico(char* nomeCompleto,char* apelido,Partido* part,char* cargo,float propina,int quantidade){
    Politico* p = (Politico*) malloc(sizeof(Politico));
    p->nome = nomeCompleto;
    p->apelido = apelido;
    p->cargo = cargo;
    p->partido = part;
    p->valorPropinaMensal = propina;
    p->quantidadeVezes = quantidade;
    return p;
}
