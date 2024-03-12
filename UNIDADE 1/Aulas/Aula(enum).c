#include <stdio.h>
#include <stdlib.h>

//maneira de definir constantes em c
//#define TRUE 0
//#define FALSE 1

typedef enum bool {
    TRUE,
    FALSE
}Bool;

int main(void){
    Bool resposta;
    printf("Digite sua resposta\n True - 0 \n False - 1\n");
    scanf("%d", &resposta);
    if (resposta == TRUE)
    {
        /* code */
        printf("Boa escolha\n");

    }
    else if (resposta == FALSE){

        printf("Que pena\n");

    }

    return 0;
}




/*
#include <stdio.h>
#include <stdlib.h>

//maneira de definir constantes em c
#define TRUE 0
#define FALSE 1


int main(void){
    int resposta;
    printf("Digite sua resposta\n True - 0 \n False - 1\n");
    scanf("%d", &resposta);
    if (resposta == TRUE)
    {
        /* code */
        //printf("Boa escolha\n");

   // }
    //else if (resposta == FALSE){

       // printf("Que pena\n");

    //}

    //return 0;
//*/