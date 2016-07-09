#include <stdio.h>
#include "partido.h"
#include "lista_politico.h"

int main()
{

    ListaPolitico* l = criarListaPolitico();
    l = inserirPolitico(l,criarPolitico("Lucas","bertoldo",criarPartido("Partido X","PX"),"acessor",4500,3));
    l = inserirPolitico(l,criarPolitico("Aecio Neves","snow",criarPartido("Tucanos","PMDB"),"senador",1000000,5));
    l = inserirPolitico(l,criarPolitico("Gera Alck","fire",criarPartido("Tucanos","PMDB"),"preside",103300,2));
    l = inserirPolitico(l,criarPolitico("Joe","joe do ferro velho",criarPartido("Partido Z","PZ"),"laranja",500,4));


    listarPoliticos(l);


//   Politico* achado = buscarPolitico(l,"bertoldo");
//    if(achado != NULL)
//        printf("%s - %s",achado->nome,achado->apelido);

    //listarPoliticosPorPartido(l,"PMDB");

    return 0;
}
