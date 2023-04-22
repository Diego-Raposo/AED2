/*Crie um algoritmo que leia uma senha fornecida pelo usu�rio composta por caracteres
para informar se a senha � v�lida ou inv�lida. A senha do sistema corresponde a
palavra �LINGUAGEMC�. Obs.: O algoritmo n�o faz distin��o de letras mai�sculas
e min�sculas.*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void entrada10(char *senha){
    printf("Digite sua senha: ");
    scanf("%s",senha);
}
void processamento10(char *senha, bool *res){
    if(strcasecmp(senha,"LINGUAGEMC")==0){
        *res = true;
    }else{
        *res = false;
    }
}

void saida10(bool res){
    if(res == true){
       printf("\nSENHA VALIDA");
    }else if(res==false){
        printf("\nSENHA INVALIDA");
    }
}

void questao10(){
    char senha[20];
    bool resp;
    entrada10(senha);
    processamento10(senha, &resp);
    saida10(resp);
}
