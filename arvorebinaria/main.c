#include <stdio.h>
#include "banco_de_dados.h"

enum {
    OP_NAO_SELECIONADA = 0,
    OP_ADICIONAR,
    OP_ALTERAR,
    OP_EXCLUIR,
    OP_PROCURAR,
    OP_RELATORIO,
    OP_SAIR
};

void menu() {
    printf("\nMenu:\n");
    printf("1. Adicionar\n");
    printf("2. Alterar\n");
    printf("3. Excluir\n");
    printf("4. Procurar\n");
    printf("5. Relatório\n");
    printf("6. Sair\n");
    printf("Selecione uma opção: ");
}

int main() {
    NodoLista* listaNomes = NULL;
    NodoArvore* arvoreCPFs = NULL;
    NodoListaDinamica* listaDados = NULL;
    int opcao = OP_NAO_SELECIONADA;

    while (opcao != OP_SAIR) {
        menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case OP_ADICIONAR:
                adicionarRegistro(&listaNomes, &arvoreCPFs, &listaDados);
                break;
            case OP_ALTERAR:
                alterarRegistro(&listaNomes, arvoreCPFs, listaDados);
                break;
            case OP_EXCLUIR:
                excluirRegistro(&listaNomes, &arvoreCPFs, listaDados);
                break;
            case OP_PROCURAR:
                procurarRegistro(arvoreCPFs);
                break;
            case OP_RELATORIO:
                printf("Relatório: \n");
                imprimirListaDinamicaOrdenada(listaNomes, listaDados);
                break;
            case OP_SAIR:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Por favor, tente novamente.\n");
        }
    }

    return 0;
}
