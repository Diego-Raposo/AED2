/*Faça um algoritmo em Linguagem C que receba a velocidade deum veículo em
Km/h (quilômetros por hora) e a transforme em m/s (metros por segundo).*/

#include <stdio.h>
#include <stdlib.h>
#include "questao08.h"


void entrada08(float *vel_km){
    printf("Digite a velocidade em km/h: ");
    scanf("%f",vel_km);
}
void processamento08(float *vel_km, float *vel_m){
    *vel_m = *vel_km/3.6;
}
void saida08(float vel_m){
    printf("\nVelocidade em m/s: %.2f", vel_m);
}

void questao08(){
    float km_hora, metro_hora;
    entrada08(&km_hora);
    processamento08(&km_hora,&metro_hora);
    saida08(metro_hora);
}


