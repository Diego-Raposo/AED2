/*1. Faça um algoritmo em Linguagem C que receba três números inteiros e calcule a
soma deles.*/

#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"

void entrada(int *num1, int *num2, int *num3){
    //entrada
    printf("Numero 1: ");
    scanf("%d",num1);
    printf("\nNumero 2: ");
    scanf("%d",num2);
    printf("\nNumero 3: ");
    scanf("%d",num3);
}
void processamento(int *num1, int *num2, int *num3, int *saida){
     *saida = *num1 + *num2 + *num3;
}

void saida(int saida){
    printf("\nsoma = %d",saida);
}
void questao01(void){
	int n1;
	int n2;
	int n3;
	int soma;
    //entrada
    entrada(&n1, &n2, &n3);
    //processamento
    processamento(&n1,&n2, &n3, &soma);
    //saida
    saida(soma);

}
