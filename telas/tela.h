#ifndef TELA_H
#define TELA_H
#include "../politico/lista_politico.h"

int mostrarMenuPrincipal(ListaPolitico* listaPoliticos);

int mostrarMenuPolitico(ListaPolitico* listaPoliticos);

ListaPolitico* telaCadastrarPolitico(ListaPolitico* listaPoliticos);

ListaPolitico* telaExcluirPolitico(ListaPolitico* listaPoliticos);

void telaBuscarPolitico(ListaPolitico* l);

char* menuListarPoliticoPartido();

ListaPolitico* telaModificarPolitico(ListaPolitico* listaPoliticos);

void telaMontantePolitico(ListaPolitico* listaPoliticos);

void mostrarMenuListarPolitico(ListaPolitico* l);

void mostrarOpcoesMontante();




void mostrarMenuPartido();


void mostrarTelaSaida();

#endif
