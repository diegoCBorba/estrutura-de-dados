#include <stdio.h>

#define TAMPILHA 10
int pilha[TAMPILHA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int topo = 0;

void lista_elementos(){
    printf("\n-----Pilha Atual-----\n");
    for(int i = 0; i < TAMPILHA; i++){
        printf("-");
        printf("|%d|", pilha[i]);
        printf("-");
    }
    printf("\nTopo: %d\n", topo);
}

void base(){
    lista_elementos();
    printf("A base da pilha é: %d.\n", pilha[0]);
}

void subtopo(){
    if(topo > 0){
        lista_elementos();
        printf("O sub-topo da pilha é: %d\n", pilha[topo - 1]);
    }else{
        printf("A pilha não tem um sub-topo.\n");
    }
}

void push(){
    int val;
    printf("Informe o valor: ");
    scanf("%d", &val);
    if(topo < TAMPILHA){
        pilha[topo] = val;
        topo = topo + 1;
        lista_elementos();
    }else{
        printf("Pilha cheia...\n");
    }
}

void pop(){
    if(topo > 0){
        pilha[topo - 1] = 0;
        topo = topo - 1;
        lista_elementos();
    }else{
        printf("Pilha vazia...\n");
    }
}

void desempilhaN(){
    int valor;
    printf("Informe quantos blocos você quer desempilhar: ");
    scanf("%d", &valor);
    if(topo >= valor){
        for(int i = 0; i < valor; i++){
            pop();
        }
        lista_elementos();
    }else{
        printf("A pilha não tem blocos o suficiente para desempilhar.\n");
    }
}

void esvaziar(){
    for(int i = 0; i < TAMPILHA; i++){
        pilha[i] = 0;
    }
    topo = 0;
}

int main(){
    int opcao = 0;

    do{
        printf("Selecione a opção: \n\n");
        printf("[1] - Inserir (push): \n");
        printf("[2] - Remover (pop): \n");
        printf("[3] - Listar: \n");
        printf("[4] - Esvaziar: \n");
        printf("[5] - Base: \n");
        printf("[6] - Subtopo: \n");
        printf("[7] - Desempilhar N Nums: \n");
        printf("[-1] - Sair \n");
        printf("Opção: ");

        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                lista_elementos();
                break;
            case 4:
                esvaziar();
                break;
            case 5:
                base();
                break;
            case 6:
                subtopo();
                break;
            case 7:
                desempilhaN();
                break;
            case -1:
                break;
            default:
                printf("Opção inválida.");
                break;
        }
    }while (opcao!= -1);
    
    return 0;
}