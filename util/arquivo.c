#include "arquivo.h"
#include "../politico/politico.h"
#include "../partido/lista_partido.h"
#include "../partido/partido.h"

ListaPolitico* carregarDadosPolitico(ListaPolitico* lista,FILE* pLeitura){

	char* str = (char*) malloc(sizeof(char));

	while(fgets(str,90,pLeitura) != NULL){
        Politico* p = instanciarPolitico(instaciarPartido());

		fscanf(pLeitura,"%[^;];%[^;];%[^;];%f;%d;%[^;];%[^\n]", p->nome, p->apelido, p->cargo, &p->valorPropinaMensal, &p->quantidadeVezes, p->partido->nome, p->partido->sigla);

        lista = inserirPolitico(lista,p);
	}

	return lista;
}

void salvarPoliticos(ListaPolitico* lista,FILE* pEscrita){
    if(lista != NULL){
        ListaPolitico* p = lista;
        fprintf(pEscrita,"\n");
        while(p != NULL){

            fprintf(pEscrita,"%s;%s;%s;%.2f;%d;%s;%s", p->politico->nome, p->politico->apelido, p->politico->cargo, p->politico->valorPropinaMensal, p->politico->quantidadeVezes,p->politico->partido->nome,p->politico->partido->sigla);
            p = p->prox;
        }
    }

}

void salvarAlteracoesPoliticos(ListaPolitico* lista,FILE* pEscrita){
    if(lista != NULL){
        ListaPolitico* p = lista;
        fprintf(pEscrita,"\n");
        while(p != NULL){
            if(p->prox == NULL){
                fprintf(pEscrita,"%s;%s;%s;%.2f;%d;%s;%s", p->politico->nome, p->politico->apelido, p->politico->cargo, p->politico->valorPropinaMensal, p->politico->quantidadeVezes,p->politico->partido->nome,p->politico->partido->sigla);
                p = p->prox;
                continue;
            }

            fprintf(pEscrita,"%s;%s;%s;%.2f;%d;%s;%s\n", p->politico->nome, p->politico->apelido, p->politico->cargo, p->politico->valorPropinaMensal, p->politico->quantidadeVezes,p->politico->partido->nome,p->politico->partido->sigla);
            p = p->prox;
        }
    }

}

void salvarAlteracoesPartidos(ListaPartido* lista,FILE* pPartido){
    if(lista != NULL){
        ListaPartido* p = lista;
        fprintf(pPartido,"\n");
        while(p != NULL){
            if(p->prox == NULL){
                fprintf(pPartido,"%s;%s", p->partido->nome, p->partido->sigla);
                p = p->prox;
                return;
            }

            fprintf(pPartido,"%s;%s\n", p->partido->nome, p->partido->sigla);
            p = p->prox;
        }
    }

}

ListaPartido* carregarDadosPartido(ListaPartido* lista,FILE* pLeitura){

	char* str = (char*) malloc(sizeof(char));

	while(fgets(str,80,pLeitura) != NULL){
        Partido* p = instaciarPartido();

		fscanf(pLeitura,"%[^;];%[^\n]", p->nome, p->sigla);

        lista = inserirPartido(lista,p);
	}

	return lista;
}

void salvarPartidos(ListaPartido* lista,FILE* pEscrita){
    if(lista != NULL){
        ListaPartido* p = lista;
        fprintf(pEscrita,"\n");
        while(p != NULL){

            fprintf(pEscrita,"%s;%s\n", p->partido->nome, p->partido->sigla);
            p = p->prox;
        }
    }

}




