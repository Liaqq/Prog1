#include <stdio.h>
#include <stdlib.h>

typedef struct produto
{

    int codigo;
    char nome[100];
    float preco;

} tp_produto;

struct tp_nodo
{

    tp_produto produto;
    struct tp_nodo *prox;
};
typedef struct tp_nodo tp_nodo;

int main(void)
{
    tp_nodo *Lista = (tp_nodo *) malloc(sizeof(tp_nodo));
    if(!Lista)
    {
        printf("Sem memoria disponivel!\n");
        exit(1);
    }
    inicia(Lista);
    int opt;

    do
    {
        opt=menu();
        opcao(Lista,opt);
    }
    while(opt);

    free(Lista);
    return 0;
}

void inicia(tp_nodo *Lista)
{
    Lista->prox = NULL;
}

int menu(void)
{
    int opt;

    printf("|      MENU      |\n");
    printf("|1. Exibir Lista.|\n");
    printf("|2. Insere.      |\n");
    printf("|0. Sair.        |\n");
    printf("\n\n\nOpcao: ");
    scanf("%d", &opt);
    system("cls");
    return opt;
}

void opcao(tp_nodo *Lista, int op)
{
    switch(op)
    {
    case 0:

        break;

    case 1:
        exibe(Lista);
        break;

    case 2:
        insereInicio(Lista);
        break;

    default:
        printf("Comando invalido\n\n");
    }
}

int vazia(tp_nodo *Lista)
{
    if(Lista->prox == NULL)
        return 1;
    else
        return 0;
}

void insereInicio(tp_nodo *Lista)
{
    tp_nodo *novo=(tp_nodo *) malloc(sizeof(tp_nodo));
    if(!novo)
    {
        printf("Sem memoria disponivel!\n");
        exit(1);
    }

    printf("Codigo do produto: ");
    scanf("%d", &novo->produto.codigo);

    printf("Nome do produto: ");
    scanf("%s", &novo->produto.nome);

    printf("Preco do produto: ");
    scanf("%f", &novo->produto.preco);

    tp_nodo *oldHead = Lista->prox;

    Lista->prox = novo;
    novo->prox = oldHead;
}

void exibe(tp_nodo *Lista)
{

    tp_nodo *tmp;
    tmp = Lista->prox;

    while( tmp != NULL)
    {
        printf("\nCodigo :%d\n", tmp->produto.codigo);
        printf("Nome :%s\n", tmp->produto.nome);
        printf("Preco : R$ %0.2f\n", tmp->produto.preco);
        tmp = tmp->prox;
    }
    printf("\n\n");
}










