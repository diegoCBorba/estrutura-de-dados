#include <stdio.h>

int lista[10], inteiro_escolhido, inteiro_da_vez, count = 0;

int main(){
    for(int i = 0; i < 10; i++){
        scanf("%d", &inteiro_da_vez);
        lista[i] = inteiro_da_vez;
    }

    scanf("%d", &inteiro_escolhido);

    for(int i = 0; i < 10; i++){
        if(lista[i] == inteiro_escolhido){
            count += 1;
        }
    }

    printf("%d", count);
}