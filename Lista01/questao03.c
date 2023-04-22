/*Faça um algoritmo Linguagem C que receba duas notas de prova, seus respectivos
pesos e calcule a média ponderada deles.*/

#include <stdio.h>
#include<stdlib.h>
#include"questao03.h"
void entrada03(float *n1, float *n2, int *p1, int *p2){
    printf("Digite a primeira nota: ");
    scanf("%f",n1);
    printf("\nDigite a segunda nota: ");
    scanf("%f",n2);
    printf("\nDigite o peso da primeira nota: ");
    scanf("%d",p1);
    printf("\nDigite o peso da segunda nota: ");
    scanf("%d",p2);

}
void processamento03(float *n1, float *n2, int *p1, int *p2, float *media){
    *media = ((*n1) * (*p1) + (*n2) * (*p2))/(*p1 + *p2);
}
saida03(float media){
    printf("\nMedia ponderada = %.2f", media);
}
void questao03(){
    int peso1, peso2;
    float nota1,nota2,res;
    entrada03(&nota1,&nota2,&peso1,&peso2);
    processamento03(&nota1,&nota2,&peso1,&peso2,&res);
    saida03((float) res);
}
