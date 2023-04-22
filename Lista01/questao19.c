/*Crie um algoritmo que leia três lados de um triângulo e determine se ele é equilátero,
isósceles ou escaleno. Quando os três lados forem iguais trata-se de um triângulo
equilátero, dois lados iguais é um triângulo isósceles e os três lados diferentes é um
triângulo escaleno. */
#include <string.h>
#include <stdio.h>
#include "questao19.h"
void entrada19(int *lado1, int *lado2, int *lado3){
    printf("Digite o lado 1: ");
    scanf("%d", lado1);
    printf("\nDigite o lado 2: ");
    scanf("%d", lado2);
    printf("\nDigite o lado 3: ");
    scanf("%d", lado3);
}

void processamento19(int *lado1, int *lado2, int *lado3, int *tipo){
    if(*lado1 == *lado2 && *lado1 == *lado3){
        *tipo = 1;
    }else if((*lado1 == *lado2 && *lado1 != *lado3) || (*lado1 == *lado3 && *lado1 != *lado2) || (*lado3 == *lado2 && *lado2 != *lado1) ){
        *tipo= 2;
    }else {
        *tipo = 3 ;
    }
}
void saida19(int tipo){
    if(tipo==1){
        printf("\nTriangulo equilatero.");
    }else if(tipo==2){
        printf("\nTriangulo isosceles.");
    }else if(tipo==3){
        printf("\nTriangulo escaleno.");
    }
}

void questao19(){
    int l1,l2,l3,triangulo;
    entrada19(&l1,&l2,&l3);
    processamento19(&l1,&l2,&l3,&triangulo);
    saida19(triangulo);
}
