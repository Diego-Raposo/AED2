/*Faça um algoritmo que receba o tamanho do raio de um
círculo e faça o cálculo do diâmetro, do perímetro e da área do círculo. Calcule
também o volume se esse círculo fosse a base para se criar uma esfera.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "questao07.h"

void entrada07(float *raio){
    printf("Digite o raio do circulo: ");
    scanf("%f", raio);
}

void processamento07(float *raio, float *diametro, float *perimetro, float *area, float *volume){
    *diametro = 2*(*raio);
    *perimetro = 2*3.14*(*raio);
    *area = 3.14*pow(*raio,2);
    *volume = (4*3.14*pow(*raio,3))/3;
}

void saida07(float *diametro, float *perimetro, float *area, float *volume){
    printf("\nDiametro do circulo: %.2f", *diametro);
    printf("\nPerimetro do circulo: %.2f", *perimetro);
    printf("\nArea do circulo: %.2f", *area);
    printf("\nvolume caso o circulo fosse a base de uma esfera: %.2f", *volume);
}

void questao07(){
    float raio07, diametro07, perimetro07, area07, volume07;
    entrada07(&raio07);
    processamento07(&raio07, &diametro07, &perimetro07, &area07, &volume07);
    saida07(&diametro07, &perimetro07, &area07, &volume07);
}
