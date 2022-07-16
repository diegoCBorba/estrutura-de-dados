#include <stdio.h>

int main(){
    char nome[20];
    double salario, total, final;

    gets(nome);
    scanf("%lf", &salario);
    scanf("%lf", &total);

    final = salario + (total*0.15);
    printf("TOTAL = R$ %.2lf", final);
    return 0;
}