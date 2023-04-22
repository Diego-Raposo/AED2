/*Crie um algoritmo que leia duas notas para calcular a média do aluno e determinar
se o mesmo foi aprovado ou reprovado. A média para aprovação é 7.*/

#include <stdio.h>
#include "questao12.h"

void entrada12(float *n1, float *n2){
    printf("nota 1:");
    scanf("%f",n1);
    printf("\nnota 2:");
    scanf("%f",n2);
}
void processamento12(float *n1, float *n2, float *media_final){
    *media_final = (*n1 + *n2)/2.0;
}
void saida12(float media_final){
    if(media_final>=7.0){
        printf("\nMedia: %.2f", media_final);
        printf("\nAluno aprovado!");
    }else{
        printf("\nMedia: %.2f", media_final);
        printf("\nAluno reprovado!");
    }
}

void questao12(){
    float nota1, nota2, media;
    entrada12(&nota1, &nota2);
    processamento12(&nota1,&nota2,&media);
    saida12(media);
}
