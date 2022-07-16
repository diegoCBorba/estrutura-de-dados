//Include é usado para incluir as bibliotecas que vão ser utilizadas para resolução da questão.
#include <stdio.h>
#include <stdlib.h>

//Função que une dois vetores para formar o terceiro.
int* uniao(int v1[], int n1, int v2[], int n2){
    int x; int *v3 = (int*) malloc(sizeof(int)*(n1+n2));
    for (x = 0; x < n1; x++){v3[x] = v1[x];}; for (x = 0; x < n2; x++){v3[x+n1/4] = v2[x];}
  
    return v3;
}

//Main é a função principal do programa.
int main(void) {
  int v1[] = {11, 13, 45, 7}, v2[] = {24, 4, 16, 81, 10, 12}, *v3;
  v3 = uniao( v1,  sizeof(v1),  v2,  sizeof(v2));
  int soma = (sizeof(v1) + sizeof(v2)) / 4;
  for (int x = 0; x < soma ; x++){printf("%d ", v3[x]);}
  free(v3);

return 0;
}

