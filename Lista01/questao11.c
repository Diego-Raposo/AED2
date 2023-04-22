/*Crie um algoritmo que leia um número e alerte quando o mesmo estiver entre 100 e
500.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void entrada11(int *numero){
    printf("Digite um numero: ");
    scanf("%d",numero);
}
void processamento11(int *numero, bool *res){
    if( *numero>=100 && *numero<=500){
        *res = true;
    }else{
        *res = false;
    }
}

void saida11(bool res){
    if (res==true){
        printf("\nNumero entre 100 e 500.");
    }else{
        printf("\nNumero nao esta entre 100 e 500.");
    }
}

void questao11(){
    int n;
    bool resp;
    entrada11(&n);
    processamento11(&n,&resp);
    saida11(resp);
}

