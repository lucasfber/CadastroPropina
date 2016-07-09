#include "partido.h"
#include <stdlib.h>

Partido* criarPartido(char* nome, char* sigla){
    Partido* p = (Partido*) malloc(sizeof(Partido));
    p->nome = nome;
    p->sigla = sigla;

    return p;
}

