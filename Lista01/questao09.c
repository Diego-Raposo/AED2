/*Crie um algoritmo que leia um número e alerte quando o mesmo for maior do que
100.*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "questao09.h"

void entrada09(int *numero){
    printf("Digite um numero: ");
    scanf("%d",numero);
}
void processamento09(int *numero, bool *res){
    if(*numero > 100){
        *res = true;
    }else{
        *res = false;
    }
}
void saida09(bool res){
    if(res==true){
        printf("\nNumero maior que 100");
    }else{
        printf("\nNumero menor ou igual a 100");
    }
}

void questao09(){
    int n;
    bool resp;
    entrada09(&n);
    processamento09(&n,&resp);
    saida09(resp);
}
