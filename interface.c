//
// Created by aluno on 26/02/2026.
//

#include "interface.h"

#include <stdio.h>

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
