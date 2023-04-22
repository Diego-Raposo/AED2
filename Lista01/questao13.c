/*Crie um algoritmo que leia um número inteiro e informe se ele é ou não divisível por
5*/

#include<stdio.h>
#include"questao13.h"
void entrada13(int *n){
    printf("Digite um numero: ");
    scanf("%d",n);
}
void processamento13(int *n, int *res){
    *res = *n%5;
}
void saida13(int res){
    if(res==0){
        printf("\nNumero divisivel por 5.");
    }else{
        printf("\nNumero nao divisivel por 5.");
    }
}
void questao13(){
    int numero, resto;
    entrada13(&numero);
    processamento13(&numero, &resto);
    saida13(resto);
}
