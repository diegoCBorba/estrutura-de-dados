#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
Questão 3
Esse programa recebe uma palavra até 1000 digitos do usuário e conta a quantidade de vogais e consoantes destes. 
 */

int main(){
    char palavra[1000];
    int tam, count_vogal = 0, count_cosoante = 0;

    printf("Digite uma frase: ");
    fgets(palavra, 1000, stdin);
    for(int i = 0; i < strlen(palavra) - 1; i++){
        if((palavra[i] == 'a')||(palavra[i] == 'e')||(palavra[i] == 'i')||(palavra[i] == 'o')||(palavra[i] == 'u')
        ||(palavra[i] == 'A')||(palavra[i] == 'E')||(palavra[i] == 'I')||(palavra[i] == 'O')||(palavra[i] == 'U')){
            count_vogal += 1;
        }else if(palavra[i] == ' '){
            continue;
        }else{
            count_cosoante += 1;
        }
    }

    printf("A quantidade de vogais nessa frase são: %d\n", count_vogal);
    printf("A quantidade de consoantes nessa frase são: %d\n", count_cosoante);
    return 0;
}