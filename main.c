#include <stdio.h>
#include "Fracao.h"

int main() {
    Fracao* f1 = criarFracao(3, 4);
    Fracao* f2 = criarFracao(1, 2);

    printf("Fração 1: %d/%d\n", obterNumerador(f1), obterDenominador(f1));
    printf("Fração 2: %d/%d\n", obterNumerador(f2), obterDenominador(f2));

    return 0;
}