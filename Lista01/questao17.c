/*Um comerciante comprou um produto e quer vendê-lo com um lucro de 50% se o
valor da compra for menor que R$ 200, caso contrário o lucro será de 30%. Crie um
algoritmo que leia o valor da compra e exiba o valor da venda.*/

#include <stdio.h>
#include "questao17.h"

void entrada17(float *valor_compra){
    printf("Digite o valor da compra: ");
    scanf("%f",valor_compra);
}

void processamento17(float *valor_compra, float *valor_venda){
    if(*valor_compra<200){
        *valor_venda = 1.5*(*valor_compra);
    }else{
        *valor_venda = 1.3*(*valor_compra);
    }
}

void saida17(float valor_venda){
    printf("\nValor de venda: %.2f", valor_venda);
}

void questao17(){
    float valorVenda, ValorCompra;
    entrada17(&ValorCompra);
    processamento17(&ValorCompra,&valorVenda);
    saida17(valorVenda);
}
