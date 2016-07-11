#include "partido.h"
#include <stdlib.h>

Partido* criarPartido(char* nome, char* sigla){
    Partido* p = (Partido*) malloc(sizeof(Partido));
    p->nome = nome;
    p->sigla = sigla;

    return p;
}

Partido* instaciarPartido(){
    Partido* partido = (Partido*) malloc(sizeof(Partido));
    partido->nome = malloc(sizeof(char));
    partido->sigla = malloc(sizeof(char));

    return partido;
}
