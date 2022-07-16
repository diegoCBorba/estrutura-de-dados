#include <stdio.h>

int main(){
    int numero_de_vezes, numero_da_vez, posicao, menor_valor;
    
    scanf("%d", &numero_de_vezes);

    for(int i = 0; i < numero_de_vezes; i++){
        scanf("%d", &numero_da_vez);
        if(i == 0){
            menor_valor = numero_da_vez;
            posicao = i;
        }

        if(numero_da_vez < menor_valor){
            menor_valor = numero_da_vez;
            posicao = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d", menor_valor, posicao);
    return 0;
}