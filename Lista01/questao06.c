/*Faça um algoritmo Linguagem C que receba os valores antigo e novo de um produto,
e calcule a porcentagem de aumento que o mesmo teve.*/

#include <stdio.h>
#include <stdlib.h>
#include "questao06.h"

void entrada06(float *valor_antigo, float *valor_novo){
    printf("Digite o antigo valor: ");
    scanf("%f", valor_antigo);
    printf("\nDigite o novo valor: ");
    scanf("%f", valor_novo);
}

void processamento06(float *valor_antigo, float *valor_novo, float *aumento_porcentagem){
    *aumento_porcentagem = ((*valor_novo - *valor_antigo)/(*valor_antigo))*100;
}
void saida06(float aumento_porcentagem){
    printf("\nPorcentagem de aumento sobre o produto: %.2f %", aumento_porcentagem);
}

void questao06(){
    float antigo_valor, novo_valor, Porcentagem_aumento;
    entrada06(&antigo_valor, &novo_valor);
    processamento06(&antigo_valor, &novo_valor, &Porcentagem_aumento);
    saida06(Porcentagem_aumento);
}

