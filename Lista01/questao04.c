/*Faça um algoritmo Linguagem C que receba o salário inicial, a porcentagem de aumento
e calcule o novo salário.*/

#include<stdio.h>
#include<stdlib.h>
#include "questao04.h"

void entrada04(float *salario, float *porcentagem){
    printf("Digite o salario inicial: ");
    scanf("%f",salario);
    printf("\nDigite a porcentagem de aumento(%): ");
    scanf("%f",porcentagem);
}
void processamento04(float *salario, float *porcentagem, float *novoSalario){
    *novoSalario = *salario + (((*salario)*(*porcentagem))/100);
}
void saida04(float novoSalario){
    printf("\nNovo salario: %.2f", novoSalario);
}

void questao04(void){
    float salario_inicial, porcentagem_aumento, novo_salario;
    entrada04(&salario_inicial,&porcentagem_aumento);
    processamento04(&salario_inicial,&porcentagem_aumento,&novo_salario);
    saida04(novo_salario);
}

