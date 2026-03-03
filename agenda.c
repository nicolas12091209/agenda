//
// Created by aluno on 26/02/2026.
//

#include "agenda.h"

#include <stdio.h>
#include <stdlib.h>

#include "interface.h"

int salvar_contato(agenda_t* agenda, contato_t* contato) {
    agenda->contatos[agenda->tamanho] = *contato;
    agenda->tamanho++;
    return 0;
}
int adicionar_contato(agenda_t* agenda) {

    char** contato_informado = solicitar_contato();
    contato_t* novo_contato = malloc(sizeof(contato_t));
    novo_contato->nome = contato_informado [0];
    novo_contato->telefone = contato_informado [1];
    novo_contato->idade = atoi(contato_informado [2]);

    salvar_contato(agenda, novo_contato);

    return 0;
}

int salvar_agenda(agenda_t* agenda) {

    FILE* arquivo = fopen("agenda.txt", "w");

    if (arquivo == NULL) {
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < agenda->tamanho; i++) {
        fprintf(arquivo, "%s,%s,%d\n",
            agenda->contatos[i].nome,
            agenda->contatos[i].telefone,
            agenda->contatos[i].idade);
    }

    fclose(arquivo);

    return 0;
}
int finalizar_agenda(agenda_t* agenda) {

    salvar_agenda(agenda);
    for (int i = 0; i < agenda->tamanho; i++) {
        free(agenda->contatos[i].nome);
        free(agenda->contatos[i].telefone);
    }

    free(agenda->contatos);
    free(agenda);

    return 0;
}


int init_agenda() {

    agenda_t* agenda = malloc(sizeof(agenda_t));
    agenda->contatos = malloc(100 * sizeof(contato_t));
    agenda->tamanho = 0;

    int opção = 9;

    while (opção != 0) {
       opção = exibir_menu();
        switch (opção) {
            case 1:
                adicionar_contato(agenda);
                break;
            case 2:
                listar_contatos(agenda);
                break;
            case 3:
                printf("Buscando o contato...\n");
                break;
            case 0:
                finalizar_agenda(agenda);
                break;
            default:
                printf("Opcao invalida\n");
        }
    }

    return 0;
}
