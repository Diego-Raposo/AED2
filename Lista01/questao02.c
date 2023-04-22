/*Faça um algoritmo Linguagem C que receba quatro números reais e calcule a média
deles.*/

#include <stdio.h>
#include <stdlib.h>
#include "questao02.h"
void entrada02(float *num1,float *num2,float *num3,float *num4){
	printf("\nnumero 1: ");
	scanf("%f",num1);
	printf("\nnumero 2: ");
	scanf("%f",num2);
	printf("\nnumero 3: ");
	scanf("%f",num3);
	printf("\nnumero 4: ");
	scanf("%f",num4);
}
void processamento02(float *num1, float *num2, float *num3, float *num4, float *media){
	*media = (*num1 + *num2 + *num3 + *num4);
}
void saida02(float media){
	printf("\nmedia = %.2f\n", media/4.0);
}
void questao02(){
	//entrada
	float numero1;
	float numero2;
	float numero3;
	float numero4;
	float res;
	entrada02(&numero1,&numero2,&numero3,&numero4);
	//processamento
	processamento02(&numero1,&numero2,&numero3,&numero4,&res);
	//saida
	saida02(res);
}


