//
// Created by aluno on 26/02/2026.
//

#include "agenda.h"

#include <stdio.h>

#include "interface.h"

typedef struct contato {
    char* nome ;
    char* telefone ;
    int idade;
} contato_t;

typedef struct agenda {
    contato_t* contato;
    int tamanho;
} agenda_t;

int init_agenda() {

    int opção = 9;

    while (opção != 0) {
       opção = exibir_menu();
        switch (opção) {
            case 1:
                printf("adicionando contato...\n");
                break;
            case 2:
                printf("Listando o contato...\n");
                break;
            case 3:
                printf("Buscando o contato...\n");
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    }

    return 0;
}
