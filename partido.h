#ifndef PARTIDO_H
#define PARTIDO_H

typedef struct partido{
    char* nome;
    char* sigla;
}Partido;

Partido* criarPartido(char* nome,char* sigla);

#endif // PARTIDO_H
