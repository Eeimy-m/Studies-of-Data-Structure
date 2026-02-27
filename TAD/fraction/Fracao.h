typedef struct fracao Fracao;

Fracao* criarFracao(int numerador, int denominador);  
Fracao* somarFracao(Fracao* f1, Fracao* f2);
//retorna um ponteiro pq ele não sabe a quantidade de bytes necessária pra alocar uma fração

float converterParaDecimal(Fracao* f);
int obterNumerador(Fracao* f);
int obterDenominador(Fracao* f);
void liberarFracao(Fracao *f);