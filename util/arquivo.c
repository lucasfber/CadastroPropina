#include "arquivo.h"
#include "../politico/politico.h"

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




