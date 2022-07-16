#include <stdio.h>

int main(){
    int tamanho_matriz;

    scanf("%d", &tamanho_matriz);

    int matriz[tamanho_matriz][tamanho_matriz];

    for(int i = 0; i < tamanho_matriz; i++){
        for(int j = 0; j < tamanho_matriz; j++){
            scanf("%d", matriz[i][j]);
        }
    }

    for(int i = 0; i < tamanho_matriz; i++){
        for(int j = 0; j < tamanho_matriz; j++){
            if(j == tamanho_matriz - 1){
                printf("%d\n", matriz[i][j]);
            }else{
                printf("%d ", matriz[i][j]);
            }
        }
    }

    return 0;
}