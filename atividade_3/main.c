#include <stdio.h>
#include "filaseqcirc.h"


int main(){
    TFilaSeqCirc F1, F2, F3;
	criarFila(&F1);
	enfileira(&F1, 1);
	enfileira(&F1, 3);
	enfileira(&F1, 5);

	criarFila(&F2);
	enfileira(&F2, 2);
	enfileira(&F2, 4);
	enfileira(&F2, 6);

	criarFila(&F3);
	combina_filas(&F1, &F2, &F3);
	return 0;
}