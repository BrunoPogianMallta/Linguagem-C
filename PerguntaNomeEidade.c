#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>



int main(){

    setlocale (LC_ALL, "portuguese");

    char nome[50];
    int  idade;


    printf("Qual é o seu nome?\n");
        scanf("%s",&nome);

    printf("Qual é a sua idade?\n");
        scanf("%i",&idade);


    printf("Seu nome é %s , e você tem %i anos?\n",nome,idade);

        system("pause");




    return 0;
}
