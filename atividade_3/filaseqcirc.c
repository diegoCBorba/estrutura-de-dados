#include "filaseqcirc.h"
#include <stdio.h>


//*************** Implementação do TAD Fila Seq. Circular ***********//


/* Criar uma fila sequencial circular vazia
 * Parâmetros: a fila (uma struct) passada por referência
 */
void criarFila( TFilaSeqCirc* fila ) {
	fila->frente = 0; 
	fila->final  = -1; // condição de fila vazia
	fila->tam    = 0;  // condição de fila vazia
}

/* Verificar se a fila está (ou não) vazia
 * Parâmetros: a fila (uma struct) passada por referência
 */
int filaVazia( TFilaSeqCirc* fila ){ return fila->tam == 0; }

/* Verificar se a fila está (ou não) cheia
 * Parâmetros: a fila (uma struct) passada por referência
 */
int filaCheia( TFilaSeqCirc* fila ){ return fila->tam == MAX; }

/* Consultar o elemento que se encontra na frente da fila
 * Parâmetros: a fila passada por referência e um 
 * ponteiro "de retorno" que guardará o "elemento-frente" consultado
 */
int elementoFrente( TFilaSeqCirc* fila, int *valor ){
	// se fila está vazia 
	if ( filaVazia( fila ) ) return 0;
	*valor = fila->elementos[ (fila->frente) ];
	return 1;
}

/* Enfileirar um elemento na fila 
 * Parâmetros: a fila passada por referência e um elemento qualquer
 */
int enfileira( TFilaSeqCirc* fila, int elemento ){
	// se fila está cheia
	if ( filaCheia( fila ) ) return 0;
	
	(fila->tam)++;
	fila->final = (fila->final + 1) % MAX;
    fila->elementos[ fila->final ] = elemento;
	return 1;
}

/* Retirar (desenfileirar) um elemento da fila 
 * Parâmetros: a fila passada por referência e um 
 * ponteiro "de retorno" que guardará o elemento retirado
 */
int desenfileira ( TFilaSeqCirc* fila, int* valor ) {
   	if ( !elementoFrente( fila, valor ) ) return 0;

	(fila->tam)--;
	fila->frente = (fila->frente + 1) % MAX;
    return 1;
}

/* Imprimir o contéudo da fila sequencial circular
 * Parâmetros: a fila (uma struct) passada por referência
 */
void imprimir( TFilaSeqCirc* fila ) {
    printf("\nFila = [ ", fila);

	// varrendo todos os elementos
	for ( int i = 1, aux = fila->frente;
	                  i <= fila->tam; i++, aux = (aux + 1) % MAX )
		printf( "%d ", fila->elementos[ aux ] );

    printf( "]" );
}


/*
Recebe três filas circulares e combina alternadamente os valores das duas primeiras
na terceira e esvazia as duas iniciais.
Parâmetros: 3 filas (Uma struct) passada por referência
*/

void combina_filas(TFilaSeqCirc* fila1, TFilaSeqCirc* fila2, TFilaSeqCirc* comb_f1_f2){
	int tam = fila1->tam;
	for(int i = 0 ; i < tam ; i++){
		int indice_f1 = 0, indice_f2 = 0;

		desenfileira(fila1, &indice_f1);
		desenfileira(fila2, &indice_f2);
		enfileira(comb_f1_f2, indice_f1);
		enfileira(comb_f1_f2, indice_f2);
	}
	imprimir(comb_f1_f2);
}


