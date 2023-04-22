/*Crie um algoritmo que leia uma senha fornecida pelo usuário composta por caracteres
para informar se a senha é válida ou inválida. A senha do sistema corresponde a
palavra “LINGUAGEMC”. Obs.: O algoritmo não faz distinção de letras maiúsculas
e minúsculas.*/

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
