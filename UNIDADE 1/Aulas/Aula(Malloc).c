#include <stdio.h>
#include <stdlib.h> //Funções malloc(), calloc(), realloc()

int main(void){
    int cont;
    int tamanho = 5;
    int * vetor = (int *)malloc(tamanho * sizeof(int));
    
    if(vetor == NULL){
        printf("Exception has occured: Memory Allocation Error");
        exit(1);
    }
    else {
        printf("Memoria Alocada\n");
    }

    printf("Digite seus dados: \n");

    for (cont = 0; cont < tamanho; cont++)
    {
        /* code */
        scanf("%d", &vetor[cont]);
    }

    for (cont = 0; cont < tamanho; cont++)
    {
        /* code */
        printf("%d, ", vetor[cont]);
    }

    free(vetor);
    return 0;

}

//   ._. .-. >-> <-< >_< $_$ .~. ;_; ;-; ~_~ k_k L_L []_[] Y-Y ;P :P >:P >;P <>_<>