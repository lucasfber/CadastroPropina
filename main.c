#include <stdio.h>
#include "partido/partido.h"
#include "politico/lista_politico.h"
#include "telas/tela.h"
#include "util/enums.h"
#include "util/arquivo.h"

void calcularTotal(Mes mes,float valor);
int main()
{

    FILE* pPartido;
    pPartido = fopen("util/partidos.txt","a+");

    FILE* pLeitura = fopen("util/dados.txt","a+");

    /*APENAS PARA ENTRAR NO LOOP*/
    int op = 3;

    ListaPolitico* listaPoliticos = criarListaPolitico();
    ListaPartido* listaPartidos = criarListaPartido();

    listaPoliticos = carregarDadosPolitico(listaPoliticos,pLeitura);
    listaPartidos = carregarDadosPartido(listaPartidos,pPartido);

    do{

        op = mostrarMenuPrincipal();

        if(op == 1){
            system("clear");
            op = mostrarMenuPolitico(listaPoliticos);
            	switch(op){
                    case 1: system("clear");
                            ListaPolitico* temp = criarListaPolitico();
                            temp = telaCadastrarPolitico(temp);
                            salvarPoliticos(temp,pLeitura);
                            fclose(pLeitura);
                            break;

                    case 2: system("clear");
                            listaPoliticos = telaExcluirPolitico(listaPoliticos);
                            pLeitura = fopen("util/dados.txt","w+");
                            salvarAlteracoesPoliticos(listaPoliticos,pLeitura);
                            fclose(pLeitura);
                            break;

                    case 3: system("clear");
                            pLeitura = fopen("util/dados.txt","a+");
                            ListaPolitico* listaPol = criarListaPolitico();
                            listaPol = carregarDadosPolitico(listaPol,pLeitura);
                            listarPoliticos(listaPol);
                            fclose(pLeitura);
                            break;

                    case 4: system("clear");
                            char* sigla = menuListarPoliticoPartido();
                            listarPoliticosPorPartido(listaPoliticos,sigla);
                            break;

                    case 5: system("clear");
                            telaBuscarPolitico(listaPoliticos);
                            break;

                    case 6: system("clear");
                            listaPoliticos = telaModificarPolitico(listaPoliticos);
                            pLeitura = fopen("util/dados.txt","w+");
                            salvarAlteracoesPoliticos(listaPoliticos,pLeitura);
                            fclose(pLeitura);
                            break;

                    case 7: system("clear");
                            telaMontantePolitico(listaPoliticos);
                            break;

                    case 9: system("clear");
                            /*SO VOLTA PARA O MENU PRINCIPAL*/
                            break;

                    case 0: system("clear");
                            mostrarTelaSaida();
                            exit(1);
                }
        }//if

       else if(op == 2){
            system("clear");
            int opPartido = mostrarMenuPartido(listaPartidos);

            switch(opPartido){
                case 1: system("clear");
                        ListaPartido* tempPartido = criarListaPartido();
                        tempPartido = telaCadastrarPartido(tempPartido);
                        pPartido = fopen("util/partidos.txt","a+");
                        salvarAlteracoesPartidos(tempPartido,pPartido);
                        fclose(pPartido);
                        break;

                case 2: system("clear");
                        //l = telaExcluirPartido(l);
                        listaPartidos = telaExcluirPartido(listaPartidos);
                        pPartido = fopen("util/partidos.txt","w+");
                        salvarAlteracoesPartidos(listaPartidos,pPartido);
                        fclose(pPartido);
                        break;

                case 3: system("clear");
                        ListaPartido* listaPart = criarListaPartido();
                        pPartido = fopen("util/partidos.txt","a+");
                        listaPart = carregarDadosPartido(listaPart,pPartido);
                        fclose(pPartido);
                        listarPartidos(listaPart);
                        break;

                case 4: system("clear");
                        telabuscarPartido(listaPartidos);
                        break;

                case 5: system("clear");
                        //telaModificarPartido(l);
                        listaPartidos = telaModificarPartido(listaPartidos);
                        pPartido = fopen("util/partidos.txt","w+");
                        salvarAlteracoesPartidos(listaPartidos,pPartido);
                        fclose(pPartido);
                        break;

                case 6: system("clear");
                        telaGerarMontante(listaPartidos,listaPoliticos);
                        break;

                case 7: system("clear");
                        telaGerarMontantePorMes(listaPartidos,listaPoliticos);
                        break;


            }

        }

    }while(op != 0);

    system("clear");
    mostrarTelaSaida();

    fclose(pPartido);
    fclose(pLeitura);

    return 0;
}
