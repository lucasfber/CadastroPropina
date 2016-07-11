#ifndef TELA_H
#define TELA_H
#include "../politico/lista_politico.h"
#include "../partido/lista_partido.h"

int mostrarMenuPrincipal();

int mostrarMenuPolitico(ListaPolitico* listaPoliticos);

ListaPolitico* telaCadastrarPolitico(ListaPolitico* listaPoliticos);

ListaPolitico* telaExcluirPolitico(ListaPolitico* listaPoliticos);

void telaBuscarPolitico(ListaPolitico* l);

char* menuListarPoliticoPartido();

ListaPolitico* telaModificarPolitico(ListaPolitico* listaPoliticos);

void telaMontantePolitico(ListaPolitico* listaPoliticos);

void mostrarMenuListarPolitico(ListaPolitico* l);

void mostrarOpcoesMontante();





int mostrarMenuPartido(ListaPartido* l);

ListaPartido* telaCadastrarPartido(ListaPartido* lista);

ListaPartido* telaExcluirPartido(ListaPartido* l);

void telabuscarPartido(ListaPartido* l);

void telaGerarMontante(ListaPartido* lPart,ListaPolitico* lPol);

void mostrarTelaSaida();

#endif
