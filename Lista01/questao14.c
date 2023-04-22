/*Crie um algoritmo que leia um número inteiro e informe se ele é par ou ímpar.*/

#include <stdio.h>
#include "questao14.h"

void entrada14(int *n){
    printf("Digite um numero: ");
    scanf("%d",n);
}
void processamento14(int *n1, int *resto){
    *resto = *n1%2;
}

void saida14(int res){
    if(res==0){
        printf("\nNumero par.");
    }else{
        printf("\nNumero impar.");
    }
}

void questao14(){
    int numero, resto;
    entrada14(&numero);
    processamento14(&numero, &resto);
    saida14(resto);
}
