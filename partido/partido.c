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

void exibirPartido(Partido* p){
    system("clear");
    printf("=================================================================================\n");
    printf("NOME DO PARTIDO: %s\n",p->nome);
	printf("SIGLA: %s\n",p->sigla);
    printf("=================================================================================\n");

}
