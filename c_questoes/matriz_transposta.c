#include <stdio.h>

int main(){
    int linha, coluna, da_vez;

    scanf("%d %d", &linha, &coluna);
    int matriz[coluna][linha];

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            scanf("%d", &da_vez);
            matriz[j][i] = da_vez;
        }
    }

    for(int i = 0; i < coluna; i++){
        for(int j = 0; j < linha; j++){
            if(j == linha - 1){
                printf("%d\n", matriz[i][j]);
            }else{
                printf("%d ", matriz[i][j]);
            }
        }
    }

    return 0;
}