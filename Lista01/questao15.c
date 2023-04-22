/*Crie um algoritmo que leia dois valores diferentes e determine o maior.*/

#include <stdio.h>
#include "questao15.h"

void entrada15(int *n1, int *n2){
    printf("Digite o primeiro numero: ");
    scanf("%d",n1);
    printf("\nDigite o primeiro numero: ");
    scanf("%d",n2);
}

void processamento15(int *n1, int *n2, int *maior){
    if(*n1>*n2){
        *maior = *n1;
    }else if(*n2>*n1){
        *maior = *n2;
    }else{
        *maior = *n1;
    }
}

void saida15(int maior){
    printf("\nNumero maior: %d", maior);
}

void questao15(){
    int numero1,numero2, maior_numero;
    entrada15(&numero1, &numero2);
    processamento15(&numero1, &numero2, &maior_numero);
    saida15(maior_numero);
}
