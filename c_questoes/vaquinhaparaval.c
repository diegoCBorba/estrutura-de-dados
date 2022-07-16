#include <stdio.h>

int main(){
    float doacao_da_vez, count = 0.0F, total = 0.0F;

    scanf("%f", &doacao_da_vez);
    while(doacao_da_vez >= 0){
        count += 1;
        total += doacao_da_vez;
        scanf("%f", &doacao_da_vez);
    }

    printf("%.2f\n", total);
    if(count > 0){
        printf("%.2f", total / count);
    }else{
        printf("0.00");
    }
    

    return 0;  
}