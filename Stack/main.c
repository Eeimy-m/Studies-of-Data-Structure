#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void empilhar(Stack* p, int value) {
    int result;
    result = push(p, value);

    if(result == ERROR)
        printf("\nErro ao empilhar");
    else 
        printf("\nValor empilhado com sucesso");
}

void desempilhar(Stack* stack) {
    int result;
    int valorPop;
    result = pop(stack, &valorPop);

    if(result == ERROR) {
        printf("\nNão foi possível empilhar");
    }

    else {
        printf("\nElemento %d desempiplhado com sucesso", valorPop);
    }
}

int main() {
    Stack* stack = createStack();
    if(stack == NULL) {
        printf("Não foi possível alocar memória");
        return -1;
    }

    empilhar(stack, 10);
    empilhar(stack, 20);
    empilhar(stack, 30);
    empilhar(stack, 40);
    empilhar(stack, 50);

    int valorTopo;
    peek(stack, &valorTopo);

    showStack(stack);

    int result;
    result = push(stack, 10);

    desempilhar(stack);
    desempilhar(stack);

    showStack(stack);

    return 0;
}