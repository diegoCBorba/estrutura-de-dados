#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lower(char *string){

    for(int i = 0; i < strlen(string), i++){
        string[i] = tolower(string[i])
    }
}

int main(){
    char go_stop[20], nome[20], pais[20];
    int count_tigres = 0, count_macacos = 0, count_cobras_venezuela = 0;
    float pesos_tigres = 0, peso = 0;

    while(1){
        scanf("%s", &nome);
        strcpy(nome, lower(nome));
        fflush(stdin);

        scanf("%d", &peso);
        fflush(stdin);

        scanf("%s", &pais);
        strcpy(pais, lower(pais));
        fflush(stdin);

        scanf("%s", &go_stop);
        strcpy(go_stop, lower(go_stop));
        fflush(stdin);

        if(!strcmp(nome, "tigre")){
            count_tigres += 1;
            pesos_tigres += peso;
        }else if(!strcmp(nome, "cobra") && !strcmp(pais, "venezuela")){
            count_cobras_venezuela += 1;
        }else if(!strcmp(nome, "macaco")){
            count_macacos += 1;
        }
        if(!strcmp(go_stop, "parar")){
            break;
        }
    }
    
    printf("%d\n", count_macacos);
    printf("%.2f\n", pesos_tigres/count_tigres);
    printf("%d\n", count_cobras_venezuela);

    return 0;
}