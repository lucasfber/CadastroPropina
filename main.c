#include <stdio.h>
#include "partido/partido.h"
#include "politico/lista_politico.h"

int main()
{

    ListaPolitico* l = criarListaPolitico();
    l = inserirPolitico(l,criarPolitico("Lucas","bertoldo",criarPartido("Partido X","PX"),"acessor",2000,3));
    l = inserirPolitico(l,criarPolitico("Aecio Neves","snow",criarPartido("Tucanos","PMDB"),"senador",1000000,5));
    l = inserirPolitico(l,criarPolitico("Gera Alck","fire",criarPartido("Tucanos","PMDB"),"preside",103300,2));
    //l = inserirPolitico(l,criarPolitico("Joe","joe do ferro velho",criarPartido("Partido Z","PZ"),"laranja",500,4));

    listarPoliticos(l);
    Politico* p = buscarPolitico(l,"snow");

    //printf("Montante do Politico %s - R$: %.2f\n",p->nome,p->valorPropinaMensal);

    printf("%.2f",gerarMontante(p));
    float salario = 500;
    int parcela = 3;

    float r = salario * parcela;

   // printf("%.2f",r);

    return 0;
}
