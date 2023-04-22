/*Faça um algoritmo Linguagem C que receba o salário-base e a quantidade de
dependentes, e calcule o salário líquido sabendo que, para cada filho, o funcionário
recebe o salário família de R$ 32,00 e, ao final, paga imposto de renda de 27,5%
sobre o salário bruto.*/

#include <stdio.h>
#include <stdlib.h>
#include "questao05.h"

void entrada05(float *salario_base, int *dependentes ){
    printf("Digite o salario_base: ");
    scanf("%f",salario_base);
    printf("\nDigite o numero de dependentes: ");
    scanf("%d",dependentes);
}
void processamento05(float *salario_base, int *dependentes, float *salario_bruto, float *salario_liquido){
    *salario_bruto = *salario_base + (*dependentes*32);
    *salario_liquido = *salario_bruto - ((*salario_bruto * 27.5)/100);
}
void saida05(float salario_liquido){
    printf("\nSalario liquido: %.2f",salario_liquido);
}

questao05(){
    float salarioBase, salarioBruto, salarioLiquido;
    int quantDependentes;
    entrada05(&salarioBase,&quantDependentes);
    processamento05(&salarioBase,&quantDependentes,&salarioBruto,&salarioLiquido);
    saida05(salarioLiquido);
}
