/* Sabendo que somente os municípios que possuem mais de 200.000 eleitores têm
segundo turno nas eleições para prefeito quando o 1º colocado não obtém mais do
que 50% dos votos, crie um algoritmo que leia o nome do município, a quantidade
de eleitores e o número de votos do candidato mais votados e informe se terá ou não
segundo turno na eleição municipal*/

#include <stdio.h>
#include "questao22.h"
char municipio[20];
void entrada22(char *mun[20], int *quant, int *num_votos){
    printf("Municipio: ");
    gets(mun);
    fflush(stdin);
    printf("\nQuantidade de eleitores: ");
    scanf("%d",quant);
    printf("\nNumero de votos do candidato mais votado: ");
    scanf("%d",num_votos);
}

void processamento22(int *quant, int *num_votos, int *porc, int *res){
    *porc = ((*num_votos)*100)/ (*quant);
    if(*porc>50){
        *res = 0;
    }else{
        *res = 1;
    }
}

void saida22(int res){
    if(res==0){
        printf("\n%s: Nao tera segundo turno.",municipio);
    }else{
        printf("\n%s: Tera segundo turno.", municipio);
    }
}

void questao22(){
    int quantidade_populacao, numero_votos, porcentagem, resultado;
    entrada22(&municipio,&quantidade_populacao, &numero_votos);
    processamento22(&quantidade_populacao, &numero_votos, &porcentagem, &resultado);
    saida22(resultado);
}
