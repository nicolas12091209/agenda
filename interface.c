//
// Created by aluno on 26/02/2026.
//

#include "interface.h"

#include <stdio.h>
#include <stdlib.h>

#include "agenda.h"

int listar_contatos(agenda_t* agenda) {
    for (int i = 0; i < agenda->tamanho; i++) {
        printf("\nContato %d\n", i + 1);
        printf("nome: %s\n", agenda->contatos[i].nome);
        printf("telefone: %s\n", agenda->contatos[i].telefone);
        printf("idade: %d\n", agenda->contatos[i].idade);
    }

    return 0;
}

int exibir_menu() {
    int opção;
    printf("====== AGENDA DE CONTATOS ======\n");
    printf("1 - Adicionar Contatos\n");
    printf("2 - Listar Contatos\n");
    printf("3 - Buscar contatos\n");
    printf("0 - Sair\n\n");
    printf("Digite a opcao: ");
    scanf("%d", &opção);
    return opção;
}

char** solicitar_contato() {

    char** contato = malloc(3 * sizeof(char*));
    char* nome = malloc(80 * sizeof(char));
    char* telefone = malloc(20 * sizeof(char));
    char* idade = malloc(10 * sizeof(char));

    printf("Digite o nome do contato: \n");
    scanf("%s", nome);
    printf("Digite a telefone do contato: \n");
    scanf("%s", telefone);
    printf("Digite a idade do contato: \n");
    scanf("%s", idade);

    contato[0] = nome;
    contato[1] = telefone;
    contato[2] = idade;

    return contato;
}