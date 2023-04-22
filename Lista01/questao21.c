/*Crie um algoritmo que leia três números e exibe os números em ordem crescente.*/

#include <stdio.h>
#include "questao21.h"
int caso;
void entrada21(int *n1, int *n2, int *n3){
    printf("Digite o primeiro numero: ");
    scanf("%d", n1);
    printf("Digite o segundo numero: ");
    scanf("%d", n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", n3);
}

void processamento21(int *n1, int *n2, int *n3, int *maior, int *menor, int *meio){
    if(*n1==*n2 && *n2==*n3){
        caso = 1;
    }
    if(*n1>=*n2 && *n1>=*n3){
        *maior = *n1;
        if(*n2>*n3){
            *meio = *n2;
            *menor = *n3;
        }else{
            *meio = *n3;
            *menor = *n2;
        }
    }else if(*n2>=*n1 && *n2>=*n3){
        *maior = *n2;
        if(*n3>*n1){
            *meio = *n3;
            *menor = *n1;
        } else{
            *meio = *n1;
            *menor = *n3;
        }
    }else if(*n3>=*n1 && *n3>=*n2){
        *maior = *n3;
        if(*n2>*n1){
            *meio = *n2;
            *menor = *n1;
        } else{
            *meio = *n1;
            *menor = *n2;
        }
    }
}

void saida21(int maior, int meio, int menor){
    if(caso==1){
        printf("\nNumero identicos");
    }else{
        printf("\nMaior: %d\nMeio: %d\nMenor: %d", maior,meio,menor);
    }

}

void questao21(){
    int numero1,numero2,numero3, maior, meio, menor;
    entrada21(&numero1,&numero2,&numero3);
    processamento21(&numero1,&numero2,&numero3,&maior,&menor,&meio);
    saida21(maior,meio,menor);
}
