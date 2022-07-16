#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int intervalo_ini, intervalo_fin;

    scanf("%d", &intervalo_ini);
    while((intervalo_ini < 1) || (intervalo_ini > 9)){
        printf("Insira um número inicial entre 1 e 9\n");
        scanf("%d", &intervalo_ini);
    }

    scanf("%d", &intervalo_fin);
    while((intervalo_fin < 1) || (intervalo_fin > 9)){
        printf("Insira um número final entre 1 e 9\n");
        scanf("%d", &intervalo_fin);
    }

    if(intervalo_ini > intervalo_fin){
        printf("Nenhuma tabuada nesse intervalo\n");
    }else{
        for(int i = intervalo_ini; i < intervalo_fin + 1; i++){
            for(int j = 1; j < 10; j++){
                printf("%d x %d = %d\n", i, j, i*j);
            }
            if(i != intervalo_fin){
                printf("\n");
            }
        }
    }

    return 0;
}