#include <stdio.h>

int main(){

    int tamanho_matriz;

    scanf("%d", &tamanho_matriz);

    int matriz_quadratica[tamanho_matriz][tamanho_matriz];

    for(int i = 0; i < tamanho_matriz; i++){
        for(int j = 0; j < tamanho_matriz; j ++){
            matriz_quadratica[i][j] = (j + 1);
        }
    }

    for(int i = 0; i < tamanho_matriz; i++){
        for(int j = 0; j < tamanho_matriz; j++){
            if(j == tamanho_matriz - 1){
                printf("%d\n", matriz_quadratica[i][j]);
            }else{
                if(i == j || i < j){
                    printf("%d ", matriz_quadratica[i][j]);
                }else{
                    printf("  ");
                }
            }
        }
    }

    return 0;
}