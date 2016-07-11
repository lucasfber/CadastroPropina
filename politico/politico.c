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

Politico* instanciarPolitico(Partido* partido){
    Politico* p =  (Politico*) malloc(sizeof(Politico));
    p->nome = malloc(sizeof(char));
    p->apelido = malloc(sizeof(char));
    p->cargo = malloc(sizeof(char));
    p->partido = partido;

    return p;
}

void exibirPolitico(Politico* p){
    system("clear");
    printf("=================================================================================\n");
    printf("NOME: %s\n",p->nome);
	printf("APELIDO: %s\n",p->apelido);
	printf("CARGO: %s\n", p->cargo);
	printf("VALOR DA PROPINA MENSAL:R$ %.2f\n", p->valorPropinaMensal);
	printf("QUANTIDADE DE VEZES PAGAS: %d\n",p->quantidadeVezes);
	printf("PARTIDO: %s\n",p->partido->nome);
	printf("SIGLA: %s\n",p->partido->sigla);
    printf("=================================================================================\n");

}
