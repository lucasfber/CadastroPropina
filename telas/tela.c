#include "tela.h"
#include <stdlib.h>

int mostrarMenuPrincipal(){
	printf("\n\t ================================================\n");
	printf("\t|	  CADASTRO DE PROPINA - ODEBRECHT	 |\n");
	printf("\t|						 |\n");
	printf("\t|						 |\n");
	printf("\t|						 |\n");
	printf("\t|\tDIGITE:					 |\n");
	printf("\t|\t1 - MENU POLÍTICO			 |\n");
	printf("\t|\t2 - MENU PARTIDO			 |\n");
	printf("\t|\t0 - SAIR DA APLICAÇÃO			 |\n");
	printf("\t|						 |\n");
	printf("\t|						 |\n");
	printf("\t|						 |\n");
	printf("\t ================================================\n");

    int opcao;
	scanf("%d", &opcao);

//    do{}while()
//	switch(opcao){
//		case 1: system("clear");
//				mostrarMenuPolitico(listaPoliticos);
//				break;
//
//		case 2: system("clear");
//				mostrarMenuPartido();
//				break;
//
//		case 0: system("clear");
//				mostrarTelaSaida();
//				exit(1);
//	}
    return opcao;
}

int mostrarMenuPolitico(ListaPolitico* listaPoliticos){
	printf("\n\t ================================================\n");
	printf("\t|	  CADASTRO DE PROPINA - ODEBRECHT	 |\n");
	printf("\t|\t\t   MENU POLÍTICO	         |\n");
	printf("\t|						 |\n");
	printf("\t|						 |\n");
	printf("\t|\tDIGITE:					 |\n");
	printf("\t|\t1 - CADASTRAR POLÍTICO			 |\n");
	printf("\t|\t2 - EXCLUIR POLÍTICO			 |\n");
	printf("\t|\t3 - LISTAR POLÍTICO		 	 |\n");
	printf("\t|\t4 - LISTAR POLÍTICO POR PARTIDO	 	 |\n");
	printf("\t|\t5 - BUSCAR POLÍTICO			 |\n");
	printf("\t|\t6 - MODIFICAR POLÍTICO			 |\n");
	printf("\t|\t7 - GERAR MONTANTE 		 	 |\n");
	printf("\t|						 |\n");
	printf("\t|\t9 - VOLTAR			 	 |\n");
	printf("\t|\t0 - SAIR			 	 |\n");
	printf("\t|						 |\n");
	printf("\t|						 |\n");
	printf("\t|						 |\n");
	printf("\t ================================================\n");

	int opcao;
	scanf("%d", &opcao);
    return opcao;
//	switch(opcao){
//		case 1: system("clear");
//				telaCadastrarPolitico(listaPoliticos);
//				break;
//
//		case 2: system("clear");
//				listaPoliticos = telaExcluirPolitico(listaPoliticos);
//				break;
//
//		case 3: system("clear");
//				listarPoliticos(listaPoliticos);
//				break;
//
//        case 4: system("clear");
//				telaBuscarPolitico(listaPoliticos);
//				break;
//
//        case 5: system("clear");
//				telaModificarPolitico(listaPoliticos);
//				break;
//
//        case 6: system("clear");
//				telaMontantePolitico(listaPoliticos);
//				break;
//
//		case 9: system("clear");
//				//mostrarMenuPrincipal();
//				break;
//
//		case 0: system("clear");
//				mostrarTelaSaida();
//				exit(1);
//	}

}

ListaPolitico* telaCadastrarPolitico(ListaPolitico* listaPoliticos){

	printf("\n====================================================================\n");
	printf("\t\t    CADASTRO DE PROPINA - ODEBRECHT\n\n");
	printf("1 - CADASTRAR NOVO POLÍTICO\n");

	printf("\n1.1 - DIGITE O NOME COMPLETO DO POLITICO: ");
	char* nome = (char*) malloc(sizeof(char));
	scanf(" %[^\n]", nome);

	printf("1.2 - DIGITE O APELIDO PARA O POLITICO: ");
	char* apelido = (char*) malloc(sizeof(char));
	scanf(" %[^\n]", apelido);

	printf("1.3 - DIGITE O CARGO DO POLÍTICO: ");
	char* cargo = (char*) malloc(sizeof(char));
	scanf(" %[^\n]", cargo);

	printf("1.4 - DIGITE O NOME DO PARTIDO AO QUAL O POLÍTICO PERTENCE: ");
	char* nomePartido = (char*) malloc(sizeof(char));
	scanf(" %[^\n]", nomePartido);

	printf("1.5 - DIGITE A SIGLA DO PARTIDO AO QUAL O POLÍTICO PERTENCE: ");
	char* sigla = (char*) malloc(sizeof(char));
	scanf(" %[^\n]", sigla);

	printf("1.6 - DIGITE O VALOR DA PROPINA MENSAL DO POLITICO: ");
	float propina;
	scanf("%f", &propina);

	printf("1.7 - DIGITE A QUANTIDADE DE VEZES QUE O POLÍTICO IRÁ RECEBER O VALOR DA PROPINA: ");
	int quantidade;
	scanf("%d", &quantidade);

	listaPoliticos = inserirPolitico(listaPoliticos,criarPolitico(nome,apelido,criarPartido(nomePartido,sigla),cargo,propina,quantidade));

    printf("\nPOLÍTICO %s FOI CADASTRADO COM SUCESSO !\n",nome);

    system("clear");

    return listaPoliticos;
}

int mostrarMenuPartido(ListaPartido* l){
	printf("\n\t ================================================\n");
	printf("\t|	  CADASTRO DE PROPINA - ODEBRECHT	 |\n");
	printf("\t|\t\t   MENU PARTIDO	                 |\n");
	printf("\t|						 |\n");
	printf("\t|						 |\n");
	printf("\t|						 |\n");
	printf("\t|\tDIGITE:					 |\n");
	printf("\t|\t1 - ADICIONAR PARTIDO			 |\n");
	printf("\t|\t2 - EXCLUIR PARTIDO			 |\n");
	printf("\t|\t3 - LISTAR PARTIDOS			 |\n");
	printf("\t|\t4 - BUSCAR PARTIDO			 |\n");
	printf("\t|\t5 - MODIFICAR PARTIDO			 |\n");
	printf("\t|\t6 - GERAR MONTANTE POR PARTIDO           |\n");
	printf("\t|\t7 - GERAR MONTANTE PAGO POR MES          |\n");
	printf("\t|						 |\n");
	printf("\t|\t9 - VOLTAR			 	 |\n");
	printf("\t|\t0 - SAIR			 	 |\n");
	printf("\t|						 |\n");
	printf("\t|						 |\n");
	printf("\t|						 |\n");
	printf("\t ================================================\n");

	int opcao;
	scanf(" %d", &opcao);

	return opcao;
}

void mostrarOpcoesMontante(){
	printf("\n\t ================================================\n");
	printf("\t|	  CADASTRO DE PROPINA - ODEBRECHT	 |\n");
	printf("\t|\tESCOLHA COMO DESEJA GERAR O MONTANTE	 |\n");
	printf("\t|						 |\n");
	printf("\t|						 |\n");
	printf("\t|						 |\n");
	printf("\t|\tDIGITE:					 |\n");
	printf("\t|\t1 - POR MÊS				 |\n");
	printf("\t|\t2 - POR PARTIDO		 		 |\n");
	printf("\t|						 |\n");
	printf("\t|\t9 - VOLTAR			 	 |\n");
	printf("\t|\t0 - SAIR			 	 |\n");
	printf("\t|						 |\n");
	printf("\t|						 |\n");
	printf("\t|						 |\n");
	printf("\t ================================================\n");
}

void mostrarTelaSaida(){
	printf("\n\t ================================================\n");
	printf("\t|	  CADASTRO DE PROPINA - ODEBRECHT	 |\n");
	printf("\t|						 |\n");
	printf("\t|						 |\n");
	printf("\t|						 |\n");
	printf("\t|\t					 |\n");
	printf("\t|	    SAINDO DO SISTEMA. ATÉ LOGO!	 |\n");
	printf("\t|\t					 |\n");
	printf("\t|						 |\n");
	printf("\t|\t  					 |\n");
	printf("\t|\t					 |\n");
	printf("\t|						 |\n");
	printf("\t|						 |\n");
	printf("\t|						 |\n");
	printf("\t ================================================\n");
}

ListaPolitico* telaExcluirPolitico(ListaPolitico* listaPoliticos){
    printf("\n====================================================================\n");
	printf("\t\t    CADASTRO DE PROPINA - ODEBRECHT\n\n");
	printf("1 - EXCLUIR POLÍTICO\n");

    printf("\n1.1 - DIGITE O APELIDO DO POLITICO QUE DESEJA EXCLUIR: ");
    char* apelido = (char*) malloc(sizeof(char));
    scanf(" %[^\n]", apelido);

    Politico* p = buscarPolitico(listaPoliticos,apelido);

    while(p == NULL){
        printf("NENHUM POLÍTICO COM ESSE APELIDO FOI ENCONTRADO! DIGITE UM APELIDO EXISTENTE\n");
        char* apelido = (char*) malloc(sizeof(char));
        scanf(" %[^\n]", apelido);

        p = buscarPolitico(listaPoliticos,apelido);
    }

    listaPoliticos = excluirPolitico(listaPoliticos,p->apelido);

    system("clear");

    return listaPoliticos;
}

void telaBuscarPolitico(ListaPolitico* l){
    Politico* p;
    printf("\n====================================================================\n");
	printf("\t\t    CADASTRO DE PROPINA - ODEBRECHT\n\n");
	printf("4 - BUSCAR POLÍTICO\n");

    printf("\n1.4 - DIGITE O APELIDO DO POLITICO QUE DESEJA ENCONTRAR: ");
    char* apelido = (char*) malloc(sizeof(char));
    scanf(" %[^\n]", apelido);
    p = buscarPolitico(l,apelido);

    int op;

    while(p == NULL){
        system("clear");
        printf("\n====================================================================\n");
        printf("\t\t    CADASTRO DE PROPINA - ODEBRECHT\n\n");
        printf("4 - BUSCAR POLÍTICO\n");
        printf("\nNÃO FOI ENCONTRADO NENHUM POLÍTICO COM ESSE APELIDO! DIGITE UM APELIDO EXISTENTE\n4 - TENTAR NOVAMENTE\n9 - VOLTAR AO MENU DE POLÍTICO\n");
        scanf("%d",&op);

        while(op != 9 && op != 4){
            system("clear");
            printf("\n====================================================================\n");
            printf("\t\t    CADASTRO DE PROPINA - ODEBRECHT\n\n");
            printf("4 - BUSCAR POLÍTICO\n");
            printf("\nNÃO FOI ENCONTRADO NENHUM POLÍTICO COM ESSE APELIDO! DIGITE UM APELIDO EXISTENTE\n4 - TENTAR NOVAMENTE\n9 - VOLTAR AO MENU DE POLÍTICO\n");
            scanf("%d",&op);
        }

        if(op == 9)
            return;

        if(op == 4){
            system("clear");
            printf("\n====================================================================\n");
            printf("\t\t    CADASTRO DE PROPINA - ODEBRECHT\n\n");
            printf("4 - BUSCAR POLÍTICO\n");
            printf("\n1.4 - DIGITE O APELIDO DO POLITICO QUE DESEJA ENCONTRAR: ");
            char* apelido = (char*) malloc(sizeof(char));
            scanf(" %[^\n]", apelido);
            p = buscarPolitico(l,apelido);
        }

    }

    system("clear");
    printf("RESULTADO ENCONTRADO:\n");
    printf("=================================================================================\n");
    printf("NOME: %s\n",p->nome);
	printf("APELIDO: %s\n",p->apelido);
	printf("CARGO: %s\n", p->cargo);
	printf("VALOR DA PROPINA MENSAL:R$ %.2f\n", p->valorPropinaMensal);
	printf("QUANTIDADE DE VEZES PAGAS: %d\n",p->quantidadeVezes);
	printf("PARTIDO: %s\n",p->partido->nome);
	printf("SIGLA: %s\n",p->partido->sigla);
    printf("=================================================================================\n");

    printf("\nPRESSIONE S PARA SAIR\n");

    char* sair;
    scanf(" %c",sair);

    system("clear");
}

ListaPolitico* telaModificarPolitico(ListaPolitico* listaPoliticos){
    Politico* p;
    printf("\n====================================================================\n");
	printf("\t\t    CADASTRO DE PROPINA - ODEBRECHT\n\n");
	printf("5 - MODIFICAR POLÍTICO\n");

    printf("\n1.5 - DIGITE O APELIDO DO POLITICO NO QUAL DESEJA FAZER MODIFICAÇÕES: ");
    char* apelido = (char*) malloc(sizeof(char));
    scanf(" %[^\n]", apelido);
    p = buscarPolitico(listaPoliticos,apelido);

    int op;

    while(p == NULL){
        system("clear");
        printf("\n====================================================================\n");
        printf("\t\t    CADASTRO DE PROPINA - ODEBRECHT\n\n");
        printf("5 - MODIFICAR POLÍTICO\n");
        printf("\nNÃO FOI ENCONTRADO NENHUM POLÍTICO COM ESSE APELIDO! DIGITE UM APELIDO EXISTENTE\n5 - TENTAR NOVAMENTE\n9 - VOLTAR AO MENU DE POLÍTICO\n");
        scanf("%d",&op);

        while(op != 9 && op != 5){
            system("clear");
            printf("\n====================================================================\n");
            printf("\t\t    CADASTRO DE PROPINA - ODEBRECHT\n\n");
            printf("5 - BUSCAR POLÍTICO\n");
            printf("\nNÃO FOI ENCONTRADO NENHUM POLÍTICO COM ESSE APELIDO! DIGITE UM APELIDO EXISTENTE\n5 - TENTAR NOVAMENTE\n9 - VOLTAR AO MENU DE POLÍTICO\n");
            scanf("%d",&op);
        }

        if(op == 9){
            return;
        }

        if(op == 5){
            system("clear");
            printf("\n====================================================================\n");
            printf("\t\t    CADASTRO DE PROPINA - ODEBRECHT\n\n");
            printf("5 - BUSCAR POLÍTICO\n");
            printf("\n1.5 - DIGITE O APELIDO DO POLITICO NO QUAL DESEJA FAZER MODIFICAÇÕES: ");
            char* apelido = (char*) malloc(sizeof(char));
            scanf(" %[^\n]", apelido);
            p = buscarPolitico(listaPoliticos,apelido);
        }

    }

    printf("POLÍTICO ENCONTRADO\n");
    exibirPolitico(p);

    printf("\n5.1 - DIGITE O NOVO NOME COMPLETO DO POLITICO: ");
	char* nome = (char*) malloc(sizeof(char));
	scanf(" %[^\n]", nome);

	printf("5.2 - DIGITE O NOVO APELIDO PARA O POLITICO: ");
	char* novoApelido = (char*) malloc(sizeof(char));
	scanf(" %[^\n]", novoApelido);

	printf("5.3 - DIGITE O NOVO CARGO DO POLÍTICO: ");
	char* cargo = (char*) malloc(sizeof(char));
	scanf(" %[^\n]", cargo);

	printf("5.4 - DIGITE O NOME DO NOVO PARTIDO AO QUAL O POLÍTICO PERTENCE: ");
	char* nomePartido = (char*) malloc(sizeof(char));
	scanf(" %[^\n]", nomePartido);

	printf("5.5 - DIGITE A SIGLA DO NOVO PARTIDO AO QUAL O POLÍTICO PERTENCE: ");
	char* sigla = (char*) malloc(sizeof(char));
	scanf(" %[^\n]", sigla);

	printf("5.6 - DIGITE O NOVO VALOR DA PROPINA MENSAL DO POLITICO: ");
	float propina;
	scanf("%f", &propina);

	printf("5.7 - DIGITE A NOVA QUANTIDADE DE VEZES QUE O POLÍTICO IRÁ RECEBER O VALOR DA PROPINA: ");
	int quantidade;
	scanf("%d", &quantidade);

    p = modificarPolitico(listaPoliticos,apelido,nome,novoApelido,cargo,criarPartido(nomePartido,sigla),propina,quantidade);

    system("clear");
    printf("POLITICO ATUALIZADO !\n");
    exibirPolitico(p);
    printf("\nPRESSIONE S PARA SAIR\n");

    char sair;
    scanf("%c",sair);
    system("clear");
    return listaPoliticos;
}

void telaMontantePolitico(ListaPolitico* listaPoliticos){
    Politico* p;
    int op;
    printf("\n====================================================================\n");
	printf("\t\t    CADASTRO DE PROPINA - ODEBRECHT\n\n");
	printf("7 - GERAR MONTANTE POLÍTICO\n");

    printf("\n1.7 - DIGITE O APELIDO DO POLITICO DO QUAL GERAR A MONTANTE PAGA: ");
    char* apelido = (char*) malloc(sizeof(char));
    scanf(" %[^\n]", apelido);

    p = buscarPolitico(listaPoliticos,apelido);

    while(p == NULL){
        system("clear");
        printf("\n====================================================================\n");
        printf("\t\t    CADASTRO DE PROPINA - ODEBRECHT\n\n");
        printf("6 - MODIFICAR POLÍTICO\n");
        printf("\nNÃO FOI ENCONTRADO NENHUM POLÍTICO COM ESSE APELIDO! DIGITE UM APELIDO EXISTENTE\n6 - TENTAR NOVAMENTE\n9 - SAIR\n");
        scanf("%d",&op);

        while(op != 9 && op != 6){
            system("clear");
            printf("\n====================================================================\n");
            printf("\t\t    CADASTRO DE PROPINA - ODEBRECHT\n\n");
            printf("6 - BUSCAR POLÍTICO\n");
            printf("\nNÃO FOI ENCONTRADO NENHUM POLÍTICO COM ESSE APELIDO! DIGITE UM APELIDO EXISTENTE\n6 - TENTAR NOVAMENTE\n9 - SAIR\n");
            scanf("%d",&op);
        }

        if(op == 9){
            return;
        }

        if(op == 6){
            system("clear");
            printf("\n====================================================================\n");
            printf("\t\t    CADASTRO DE PROPINA - ODEBRECHT\n\n");
            printf("6 - BUSCAR POLÍTICO\n");
            printf("\n1.6 - DIGITE O APELIDO DO POLITICO DO QUAL GERAR A MONTANTE PAGA: ");
            char* apelido = (char*) malloc(sizeof(char));
            scanf(" %[^\n]", apelido);
            p = buscarPolitico(listaPoliticos,apelido);
        }

    }

    exibirPolitico(p);
    printf("MONTANTE PAGA AO POLÍTICO %s\nVALOR: R$ %.2f\n", p->nome, gerarMontante(p));

    printf("\nPRESSIONE S PARA SAIR\n");
    char* sair;
    scanf(" %c", sair);
    system("clear");

}

void mostrarMenuListarPolitico(ListaPolitico* l){
	printf("\n\t ================================================\n");
	printf("\t|	  CADASTRO DE PROPINA - ODEBRECHT	 |\n");
	printf("\t|             LISTAR POLÍTICOS		         |\n");
	printf("\t|						 |\n");
	printf("\t|						 |\n");
	printf("\t|\tDIGITE:					 |\n");
	printf("\t|\t1 - LISTAR TODOS			 |\n");
	printf("\t|\t2 - LISTAR POLÍTICO POR PARTIDO		 |\n");
	printf("\t|						 |\n");
	printf("\t|\t9 - VOLTAR PARA O MENU POLITICO		 |\n");
	printf("\t|\t0 - SAIR DA APLICAÇÃO			 |\n");
	printf("\t|						 |\n");
	printf("\t|						 |\n");
	printf("\t|						 |\n");
	printf("\t ================================================\n");

	int opcao;
	scanf("%d", &opcao);

	switch(opcao){
		case 1: system("clear");
				listarPoliticos(l);
				break;

		case 2: system("clear");
				menuListarPoliticoPartido(l);
				break;

        case 9: system("clear");
				mostrarMenuPolitico(l);
				break;

		case 0: system("clear");
				mostrarTelaSaida();
				exit(1);
	}

}

char* menuListarPoliticoPartido(){
    int op;
    printf("\n====================================================================\n");
	printf("\t\t    CADASTRO DE PROPINA - ODEBRECHT\n\n");
	printf("3 - LISTAR POLÍTICO\n");

    printf("\n3.2 - DIGITE A SIGLA DO PARTIDO NO QUAL DESEJAR LISTAR OS SEUS POLÍTICOS CADASTRADOS: ");
    char* sigla = (char*) malloc(sizeof(char));
    scanf(" %[^\n]", sigla);

    return sigla;
//    printf("\nRESULTADOS ENCONTRADOS PARA: %s\n",sigla);
//    listarPoliticosPorPartido(l,sigla);
//
//    printf("\nPRESSIONE\n   9 - PARA VOLTAR AO MENU DE POLÍTICO\n   0 - SAIR DA APLICAÇÃO\n");
//    scanf("%d",&op);
//
//    while(op != 9 && op != 0){
//        system("clear");
//        printf("RESULTADOS ENCONTRADOS PARA: %s\n",sigla);
//        listarPoliticosPorPartido(l,sigla);
//        printf("\nPRESSIONE\n   9 - PARA VOLTAR AO MENU DE POLÍTICO\n   0 - SAIR DA APLICAÇÃO\n");
//        scanf("%d",&op);
//    }
//
//    if(op == 0){
//        system("clear");
//        mostrarTelaSaida();
//        exit(1);
//    }
//
//    system("clear");
//    mostrarMenuPolitico(l);
}

ListaPartido* telaCadastrarPartido(ListaPartido* lista){
    printf("DIGITE O NOME DO PARTIDO QUE DESEJA CADASTRAR: ");
    char* nomePartido = malloc(sizeof(char));
    scanf(" %[^\n]", nomePartido);

    printf("DIGITE A SIGLA DO PARTIDO QUE DESEJA CADASTRAR: ");
    char* siglaPartido = malloc(sizeof(char));
    scanf(" %[^\n]", siglaPartido);

    lista = inserirPartido(lista,criarPartido(nomePartido,siglaPartido));

    printf("PARTIDO %s CADASTRADO COM SUCESSO !\n",nomePartido);

    //confirmacaoSaida();

    return lista;
}

ListaPartido* telaExcluirPartido(ListaPartido* l){
    printf("DIGITE A SIGLA DO PARTIDO QUE DESEJA EXCLUIR: ");
    char* siglaPartido = malloc(sizeof(char));
    scanf(" %[^\n]", siglaPartido);

    Partido* p = buscarPartido(l,siglaPartido);

    while(p == NULL){
        int op;
        printf("NÃO FOI ENCONTRADO NENHUM POLÍTICO COM ESSA SIGLA\n");
        printf("\nDIGITE 1 - TENTAR NOVAMENTE 0 - SAIR\n");
        scanf("%d", &op);

        while(op != 1 && op != 0){
            printf("\nDIGITE 1 - TENTAR NOVAMENTE 0 - SAIR\n");
            scanf("%d", &op);
        }

        if(op == 0)
            return l;

        printf("DIGITE A SIGLA DO PARTIDO QUE DESEJA EXCLUIR: ");
        char* siglaPartido = malloc(sizeof(char));
        scanf(" %[^\n]", siglaPartido);

        p = buscarPartido(l,siglaPartido);
    }

    l = excluirPartido(l,p->sigla);

    printf("\nPARTIDO EXCLUIDO COM SUCESSO !\n");
    //confirmacaoSaida();

    return l;
}

void telabuscarPartido(ListaPartido* l){
    printf("DIGITE A SIGLA DO PARTIDO QUE DESEJA ENCONTRAR: ");
    char* siglaPartido = malloc(sizeof(char));
    scanf(" %[^\n]", siglaPartido);

    Partido* p = buscarPartido(l,siglaPartido);

    while(p == NULL){
        int op;
        printf("NÃO FOI ENCONTRADO NENHUM POLÍTICO COM ESSA SIGLA\n");
        printf("\nDIGITE 1 - TENTAR NOVAMENTE 0 - SAIR\n");
        scanf("%d", &op);

        while(op != 1 && op != 0){
            printf("\nDIGITE 1 - TENTAR NOVAMENTE 0 - SAIR\n");
            scanf("%d", &op);
        }

        if(op == 0)
            return;

        printf("DIGITE A SIGLA DO PARTIDO QUE DESEJA BUSCAR: ");
        char* siglaPartido = malloc(sizeof(char));
        scanf(" %[^\n]", siglaPartido);

        printf("PARTIDO ENCONTADO:\n");
        p = buscarPartido(l,siglaPartido);
    }

    exibirPartido(p);

    confirmacaoSaida();
    system("clear");

}

ListaPartido* telaModificarPartido(ListaPartido* l){
    printf("DIGITE A SIGLA DO PARTIDO QUE DESEJA MODIFICAR: ");
    char* siglaPartido = malloc(sizeof(char));
    scanf(" %[^\n]", siglaPartido);

    Partido* p = buscarPartido(l,siglaPartido);

    while(p == NULL){
        int op;
        printf("NÃO FOI ENCONTRADO NENHUM POLÍTICO COM ESSA SIGLA\n");
        printf("\nDIGITE 1 - TENTAR NOVAMENTE 0 - SAIR\n");
        scanf("%d", &op);

        while(op != 1 && op != 0){
            printf("\nDIGITE 1 - TENTAR NOVAMENTE 0 - SAIR\n");
            scanf("%d", &op);
        }

        if(op == 0)
            return l;

        printf("DIGITE A SIGLA DO PARTIDO QUE DESEJA MODIFICAR: ");
        char* siglaPartido = malloc(sizeof(char));
        scanf(" %[^\n]", siglaPartido);

        p = buscarPartido(l,siglaPartido);
    }
    printf("PARTIDO ENCONTRADO\n");

    exibirPartido(p);
    printf("\nDIGITE O NOVO NOME PARA O PARTIDO\n");
    char* novoNome = (char*) malloc(sizeof(char));
    scanf(" %[^\n]", novoNome);

    printf("\nDIGITE A NOVA SIGLA PARA O PARTIDO\n");
    char* novaSigla = (char*) malloc(sizeof(char));
    scanf(" %[^\n]", novaSigla);

    modificarPartido(l,p->sigla,novoNome,novaSigla);

    confirmacaoSaida();
    system("clear");

    return l;
}

void telaGerarMontante(ListaPartido* lPart,ListaPolitico* lPol){
    Partido* p;
    printf("\nDIGITE A SIGLA DO PARTIDO DO QUAL DESEJA GERAR A MONTANTE: ");
    char* sigla = (char*) malloc(sizeof(char));
    scanf(" %[^\n]", sigla);

    p = buscarPartido(lPart,sigla);

    while(p == NULL){
        system("clear");
        printf("\n====================================================================\n");
        printf("\nNÃO FOI ENCONTRADO NENHUM PARTIDO COM ESSA SIGLA! \n6 - TENTAR NOVAMENTE\n0 - SAIR\n");
        int op;
        scanf("%d",&op);

        while(op != 0 && op != 6){
            system("clear");
            printf("\nNÃO FOI ENCONTRADO NENHUM PARTIDO COM ESSA SIGLA! \n6 - TENTAR NOVAMENTE\n0 - SAIR\n");
            scanf("%d",&op);
        }

        if(op == 0){
            return;
        }

        if(op == 6){
            system("clear");
            printf("\nDIGITE A SIGLA DO PARTIDO DO QUAL DESEJA GERAR A MONTANTE: ");
            char* siglaPartido = (char*) malloc(sizeof(char));
            scanf(" %[^\n]", siglaPartido);
            p = buscarPartido(lPart,siglaPartido);
        }

    }

    exibirPartido(p);
    printf("Ainda venho até aqui\n");
    printf("MONTANTE PAGA AO PARTIDO %s\nVALOR: R$ %.2f\n",p->nome, gerarMontantePorPartido(lPol,p->sigla));

    confirmacaoSaida();
    system("clear");

}

void telaGerarMontantePorMes(ListaPartido* lPart,ListaPolitico* lPol){
    Partido* p;
    printf("\nDIGITE A SIGLA DO PARTIDO DO QUAL DESEJA GERAR A MONTANTE: ");
    char* sigla = (char*) malloc(sizeof(char));
    scanf(" %[^\n]", sigla);

    p = buscarPartido(lPart,sigla);

    while(p == NULL){
        system("clear");
        printf("\n====================================================================\n");
        printf("\nNÃO FOI ENCONTRADO NENHUM PARTIDO COM ESSA SIGLA! \n6 - TENTAR NOVAMENTE\n0 - SAIR\n");
        int op;
        scanf("%d",&op);

        while(op != 0 && op != 6){
            system("clear");
            printf("\nNÃO FOI ENCONTRADO NENHUM PARTIDO COM ESSA SIGLA! \n6 - TENTAR NOVAMENTE\n0 - SAIR\n");
            scanf("%d",&op);
        }

        if(op == 0){
            return;
        }

        if(op == 6){
            system("clear");
            printf("\nDIGITE A SIGLA DO PARTIDO DO QUAL DESEJA GERAR A MONTANTE: ");
            char* siglaPartido = (char*) malloc(sizeof(char));
            scanf(" %[^\n]", siglaPartido);
            p = buscarPartido(lPart,siglaPartido);
        }

    }

    exibirPartido(p);

    printf("DIGITE O MÊS QUE DESEJA CALCULAR A MONTANTE QUE FOI PAGA AO PARTIDO %s:\n",p->sigla);
    printf("1 - JANEIRO\t\t7 - JULHO\n");
    printf("2 - FEVEREIRO\t\t8 - AGOSTO\n");
    printf("3 - MARÇO\t\t9 - SETEMBRO\n");
    printf("4 - ABRIL\t\t10 - OUTUBRO\n");
    printf("5 - MAIO\t\t11 - NOVEMBRO\n");
    printf("6 - JUNHO\t\t12 - DEZEMBRO\n");
    int mesMontante;
    scanf("%d",&mesMontante);

    printf("MONTANTE PAGA AO PARTIDO %s\nVALOR: ATÉ O MES %d\nVALOR: R$ %.2f\n",p->nome,mesMontante,gerarMontantePorMes(lPol,p->sigla,mesMontante));

    confirmacaoSaida();
    system("clear");

}

void confirmacaoSaida(){
    int s;
    printf("\nDIGITE 1 PARA SAIR: ");
    scanf("%d",&s);
}
