#include <stdio.h>
#include "partido/partido.h"
#include "politico/lista_politico.h"
#include "telas/tela.h"
#include "util/enums.h"
#include "util/arquivo.h"

void calcularTotal(Mes mes,float valor);
int main()
{
    int op = 3;
    ListaPolitico* l = criarListaPolitico();
    l = inserirPolitico(l,criarPolitico("Gera Alck","Fire",criarPartido("Tucanos","PMDB"),"preside",10000,3));
    l = inserirPolitico(l,criarPolitico("Joe","joe do ferro velho",criarPartido("Partido Z","PZ"),"laranja",50000,5));

    do{

        op = mostrarMenuPrincipal(l);

        if(op == 1){
            system("clear");
            op = mostrarMenuPolitico(l);
            	switch(op){
                    case 1: system("clear");
                            l = telaCadastrarPolitico(l);
                            break;

                    case 2: system("clear");
                            l = telaExcluirPolitico(l);
                            break;

                    case 3: system("clear");
                            listarPoliticos(l);
                            break;

                    case 4: system("clear");
                            char* sigla = menuListarPoliticoPartido();
                            listarPoliticosPorPartido(l,sigla);
                            break;

                    case 5: system("clear");
                            telaBuscarPolitico(l);
                            break;

                    case 6: system("clear");
                            telaModificarPolitico(l);
                            break;

                    case 7: system("clear");
                            telaMontantePolitico(l);
                            break;

                    case 9: system("clear");
                            break;

                    case 0: system("clear");
                            mostrarTelaSaida();
                            exit(1);
                }
        }

        else if(op == 2){
            //
        }
    }while(op != 0);
    system("clear");
    mostrarTelaSaida();

    //listarPoliticos(l);
    //mostrarMenuPrincipal(l);
//    ListaPolitico* l = criarListaPolitico();
//    ListaPolitico* l2 = criarListaPolitico();
//    FILE* pLeitura = fopen("util/dados.txt","a+");
//
//
//    l = carregarDadosPolitico(l,pLeitura);
//
//    listarPoliticos(l);
//
//
//    l2 = compararInserirPolitico(l,l2,criarPolitico("Jose Genoino","Genino",criarPartido("Partido dos Trabalhadores","PT"),"Deputado",300000,3));
//
//    //fclose(pLeitura);
//
//    //listarPoliticos(l2);
//    //FILE* pEscrita = fopen("util/dados.txt","a+");
//    //salvarPoliticos(l2,pLeitura);
//
//    l = criarListaPolitico();
//    l = carregarDadosPolitico(l,pLeitura);
//
//    fclose(pLeitura);
//
//
////    l = inserirPolitico(l,criarPolitico("Gera Alck","fire",criarPartido("Tucanos","PMDB"),"preside",103300,2));
////    //l = inserirPolitico(l,criarPolitico("Joe","joe do ferro velho",criarPartido("Partido Z","PZ"),"laranja",500,4));
////
////    listarPoliticos(l);
////    Politico* p = buscarPolitico(l,"bertoldo");
////
////    //printf("Montante do Politico %s - R$: %.2f\n",p->nome,p->valorPropinaMensal);
////
////    printf("%.2f",gerarMontante(p));
////
   // printf("%.2f",r);


    return 0;
}

void calcularTotal(Mes mes,float valor){
    valor = valor * mes;

    printf("%.2f ",valor);
}
