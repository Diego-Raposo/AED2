/*Crie um algoritmo que leia a média das duas unidades para calcular a sua média final.
Em seguida exiba a média final e o resultado que pode ser aprovado, prova final ou
reprovado. A média de aprovação é 7, menor que 3 para reprovação e as demais prova
final.*/

#include <stdio.h>
#include "questao18.h"
void entrada18(float *media1,float *media2){
    printf("Digite a media da unidade 1: ");
    scanf("%f",media1);
    printf("\nDigite a media da unidade 2: ");
    scanf("%f",media2);
}

void processamento18(float *media1, float *media2, float *media_final){
    *media_final = (*media1 + *media2)/2;
}

void saida18(float media_final){
    printf("\nMedia final: %.2f",media_final);
    if(media_final>=7){
        printf("\nAprovado.");
    }else if(media_final<=3){
        printf("\nReprovado.");
    }else{
        printf("\nProva final.");
    }
}

void questao18(){
    float mediaOne, mediaTwo, mediaFinal;
    entrada18(&mediaOne, &mediaTwo);
    processamento18(&mediaOne, &mediaTwo, &mediaFinal);
    saida18(mediaFinal);
}
