#include <stdio.h>

// Questão 5
// Este programa recebe um número de dias do usuário e divide este em quantas semanas e dias ele equivale.
// O programa para quando o usuário digitar 0.

int main(){
    int dias, semana, resto_dias;

    scanf("%d", &dias);
    
    while (dias != 0){
    semana = dias/7;
    resto_dias = dias%7;
    if(dias == 1){
        printf("%d dia equivale a ", dias);
    }else{
        printf("%d dias equivalem a ", dias);
    }

    if(semana == 1){
        printf("%d semana", semana);
    }else{
        printf("%d semanas", semana);
    }

    if(resto_dias == 1){
        printf(" e %d dia.\n", resto_dias);
    }else{
        printf(" e %d dias.\n", resto_dias);
    }
    scanf("%d", &dias);
    }

    return 0;
}