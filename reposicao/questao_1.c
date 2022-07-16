//Include é usado para incluir as bibliotecas que vão ser utilizadas para resolução da questão.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Cria duas STRUCT, uma para armazenar os dados do ponto e a outra para armazenar os dados do circulo.
typedef struct {
    float x; float y;   
} Ponto;
typedef struct {
    char *nome; Ponto centro; float raio; 
} Circulo;

//Função que cria um novo círculo.
Circulo *criaCirculo(char *nome,float x,float y, float raio ){
Circulo  *circulo  = (Circulo*) malloc(sizeof(Circulo));;
circulo->nome = nome; circulo->centro.x = x; circulo->centro.y = y; circulo->raio = raio;
return circulo;
}

//Função que testa se um determinado círculo contém outro círculo dado.
int contem(Circulo *c1, Circulo *c2){
float d = sqrt(pow(c2->centro.x - c1->centro.x,2) + pow(c2->centro.y - c1->centro.y,2));
  if(d + c2->raio <= c1->raio){
    return 1;} 

  return 0;
}

//Main é a função principal do programa que foi dada na questão
int main(void) {
Circulo *c1,*c2,*c3;
c1 = criaCirculo("Circulo01",3.0,4.0,2.0);
c2 = criaCirculo("Circulo02",3,3,1);
c3 = criaCirculo("Circulo03",1,5,1);
printf("%d\n", contem( c1,  c2));
printf("%d\n", contem(c1, c3));
free(c1); free(c2); free(c3);

  return 0;
}
