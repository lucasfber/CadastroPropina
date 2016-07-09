#include <stdio.h>
#include "partido/partido.h"
#include "politico/lista_politico.h"

int main()
{

    ListaPolitico* l = criarListaPolitico();
    l = inserirPolitico(l,criarPolitico("Lucas","bertoldo",criarPartido("Partido X","PX"),"acessor",4500,3));
    l = inserirPolitico(l,criarPolitico("Aecio Neves","snow",criarPartido("Tucanos","PMDB"),"senador",1000000,5));
    l = inserirPolitico(l,criarPolitico("Gera Alck","fire",criarPartido("Tucanos","PMDB"),"preside",103300,2));
    //l = inserirPolitico(l,criarPolitico("Joe","joe do ferro velho",criarPartido("Partido Z","PZ"),"laranja",500,4));

    listarPoliticos(l);

    l = excluirPolitico(l,"bertoldo");

    printf("\n----------------Nova Lista-------------------\n\n");
    listarPoliticos(l);
    //modificarPolitico(l,"snows","Aecio","comido","senador",criarPartido("Tucanos","PSDB"),200,2);

    return 0;
}
