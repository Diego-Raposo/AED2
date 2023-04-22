/*Crie um algoritmo que leia o percurso em quilômetros, o tipo do carro e informe o
consumo estimado de combustível, sabendo-se que um carro do tipo C faz 12 KM
com um litro de gasolina, um tipo B faz 9 KM e o tipo A faz 8 KM. Caso seja
fornecido um tipo de carro inválido o algoritmo deve alertar o fato.*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "questao23.h"
int res = 0;
void entrada23(float *percurso, char *tipo){
    printf("Digite o percurso em KM: ");
    scanf("%f", percurso);
    fflush(stdin);
    printf("\nDigite o tipo do carro: ");
    scanf("%s",tipo);
}

void processamento23(float *percurso, char *tipo, float *consumo){
    if(strcasecmp(tipo,"A")==0){
        *consumo = (*percurso)/8;
    }else if(strcasecmp(tipo, "B")==0){
        *consumo = (*percurso)/9;
    }else if(strcasecmp(tipo, "C")==0){
        *consumo = (*percurso)/12;
    }else{
        res = 1;
    }
}

void saida23(float consumo){
    if(res==1){
      printf("\nTipo de carro invalido.");
    }else{
        printf("\nConsumo estimado de combustivel: %.2f litros",consumo);
    }
}

void questao23(){
    float percurso_km, consumo_litros;
    char tipo_carro;
    entrada23(&percurso_km, &tipo_carro);
    processamento23(&percurso_km, &tipo_carro, &consumo_litros);
    saida23(consumo_litros);
}
