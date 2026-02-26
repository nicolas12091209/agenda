//
// Created by aluno on 26/02/2026.
//

#include "agenda.h"

#include <stdio.h>
#include <stdlib.h>

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

int adicionar_contato(agenda_t* agenda) {

    solicitar_contato();

    return 0;
}


int init_agenda() {

    agenda_t* agenda = malloc(sizeof(agenda_t));
    agenda->contato = malloc(100 * sizeof(contato_t));
    agenda->tamanho = 0;

    int opção = 9;

    while (opção != 0) {
       opção = exibir_menu();
        switch (opção) {
            case 1:
                adicionar_contato();
                break;
            case 2:
                printf("Listando o contato...\n");
                break;
            case 3:
                printf("Buscando o contato...\n");
                break;
            case 0:
                printf("Saindo...\n");
                // TODO implementar liberação de memória;
                break;
            default:
                printf("Opcao invalida\n");
        }
    }

    return 0;
}
