/*Crie um algoritmo que leia tr�s lados de um tri�ngulo e determine se ele � equil�tero,
is�sceles ou escaleno. Quando os tr�s lados forem iguais trata-se de um tri�ngulo
equil�tero, dois lados iguais � um tri�ngulo is�sceles e os tr�s lados diferentes � um
tri�ngulo escaleno. */
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
