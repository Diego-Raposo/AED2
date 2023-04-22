/*Suponha que um caixa disponha apenas de notas de 1, 10 e 100. Considerando que
alguém está pagando uma compra. escreva um algoritmo que mostre o número
mínimo de cada nota que o caixa deve fornecer como troco. O algoritmo receberá
como entrada o Valor da Compra e Valor do pagamento, ambos os valores são
inteiro. Caso o valor do pagamento seja inferior ao valor da compra o cálculo não
será efetuado deverá imprimir a seguinte mensagem: “Pagamento Negado”.*/

#include <stdio.h>
#include <stdlib.h>
#include "questao24.h"
int x, cont_100=0, cont_10=0,cont_1=0;
void entrada24(int *valor_compra, int *valor_pagamento){
    printf("Valor da compra: ");
    scanf("%d",valor_compra);
    printf("Valor do pagamento: ");
    scanf("%d",valor_pagamento);
}

void processamento24(int *valor_compra, int *valor_pagamento, int *troco){
    if(*valor_pagamento<*valor_compra){
        x=0;
    }else{
        *troco = (*valor_pagamento) - (*valor_compra);
        x=1;
        do{
            cont_100++;
            *troco = *troco - 100;
        }while(*troco>=100);
        do{
            cont_10++;
            *troco = *troco - 10;
        }while(*troco>=10);
        while(*troco>0){
            cont_1++;
            *troco = *troco-1;
        }
    }
}
void saida24(int x){
    if(x == 0){
        printf("\nPagamento negado.");
    }else{
        printf("\nPagamento aprovado.");
        printf("\n--Troco--\n");
        printf("\nNotas de 100: %d",cont_100);
        printf("\nNotas de 10: %d",cont_10);
        printf("\nNotas de 1: %d",cont_1);
    }
}

void questao24(){
    int compra, pagamento,troco;
    entrada24(&compra, &pagamento);
    processamento24(&compra, &pagamento, &troco);
    saida24(x);
}
