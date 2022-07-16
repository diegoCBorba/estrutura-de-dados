#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char nomes[10][10], nome[10], caracter;

    
    for(int i = 0; i < 10; i++){
        gets(nome);
        for(int j = 0; j < 10; j++){
            nome[j] = tolower(nome[j]);
            nomes[i][j] = nome[j];
        }
    }

    scanf("%c", &caracter);
    caracter = tolower(caracter);

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(nomes[i][j] == caracter){
                nomes[i][0] = toupper(nomes[i][0]);
                printf("%s\n", nomes[i]);
                break;
            }
        }
    }

    return 0;
}