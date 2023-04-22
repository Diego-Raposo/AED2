/*. Crie um algoritmo que leia três números e exibe o maior deles. Caso os números
sejam iguais exibir a seguinte mensagem: “Número idênticos”.*/

#include <stdio.h>
#include <stdbool.h>
#include "questao20.h"

int numero1, numero2, numero3;

void entrada20(int *n1, int *n2, int *n3) {
    printf("Digite o primeiro numero: ");
    scanf("%d", n1);
    printf("Digite o segundo numero: ");
    scanf("%d", n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", n3);
}

void processamento20(int *n1, int *n2, int *n3,int *maior){
    if(*n1>*n2 && *n1>*n3){
        *maior = *n1;
    }else if(*n2>*n1 && *n2>*n3){
        *maior = *n2;
    }else if(*n3>*n2 && *n3>*n1){
        *maior = *n3;
    }
}

void saida20(int maior){
    if (numero1==numero2 && numero2==numero3){
        printf("\nNumeros identicos.");
    }else{
        printf("\nMaior numero: %d",maior);
    }
}

void questao20(){
    int maior_numero;
    entrada20(&numero1,&numero2,&numero3);
    processamento20(&numero1,&numero2,&numero3, &maior_numero);
    saida20(maior_numero);
}
