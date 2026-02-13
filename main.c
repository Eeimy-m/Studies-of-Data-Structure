#include <stdio.h>
#include "Fracao.h"

int main() {
    Fracao* f1 = criarFracao(3, 4);
    Fracao* f2 = criarFracao(1, 2);

    printf("Fração 1: %d/%d\n", obterNumerador(f1), obterDenominador(f1));
    printf("Fração 2: %d/%d\n", obterNumerador(f2), obterDenominador(f2));

    Fracao* soma = somarFracao(f1, f2); 

    printf("Soma = %d/%d\n", obterNumerador(soma), obterDenominador(soma)); //isso é necessário pois não definimos struct de fração nesse arq
    printf("F2 em decimal: %f", converterParaDecimal(f2));

    liberarFracao(f1);
    liberarFracao(f2);
    liberarFracao(soma);

    return 0;
}