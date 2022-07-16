#include <stdio.h>

// Questão 4
// Este programa recebe idades do usuário e informa seu tempo em segundos.
// O programa para quando o usuário digitar 0.

int main(){
    int idade;

    scanf("%d", &idade);
    while (idade != 0){
    idade = (((idade * 365)*24)*60)*60;
    printf("Sua idade em segundos é: %d\n", idade);
    scanf("%d", &idade);
    }
    
    return 0;
}