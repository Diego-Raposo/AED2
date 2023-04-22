/*Crie um algoritmo que após receber o Salário Bruto, calcule o salário líquido
descontando 10% quando o salário bruto for menor que R$ 2000, caso contrário
descontar 20%. No final, exiba o salário líquido.*/

#include <stdio.h>
#include "questao16.h"

void entrada16(float *salario_bruto){
    printf("Digite o salario bruto: ");
    scanf("%f",salario_bruto);
}

void processamento16(float *salario_bruto, float *salario_liquido){
    if(*salario_bruto<2000){
        *salario_liquido = 90*(*salario_bruto)/100;
    }else{
        *salario_liquido = 80*(*salario_bruto)/100;
    }
}
void saida16(float salario_liquido){
    printf("\nSalario liquido: %.2f", salario_liquido);
}

void questao16(){
    float salarioBruto, salarioLiquido;
    entrada16(&salarioBruto);
    processamento16(&salarioBruto, &salarioLiquido);
    saida16(salarioLiquido);
}
