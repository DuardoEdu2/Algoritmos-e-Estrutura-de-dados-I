int comprimento(char* string){
    int n = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        n++;
    }

    return n;
}

void copia (char* original, char* copia){

    int cont;
    for (cont = 0; original[i] != '\0'; i++)
        copia[i] = original[i];

    copia[i] = '\0';
}

void concatenaa(char* original, char* destino){

    int i = 0;
    int j;

    while (original[i] != '\0')
    {
        i++;
    }
    
    for (j = 0; destino[j] != ; j++)
    {
        /* code */
        original[i] = destino[j];
        i++;
    }

    original[i] = '\0';

}