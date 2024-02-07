/*Definição de novo tipo: Aluno*/
typedef struct aluno Aluno;

/*Função que aloca memoria para um struct aluno, recebe os dados via teclado e retorna um ponteiro para aluno*/
Aluno * recebe_dados();

/*recebe e imprimi os dados da variavel ponteiro que ele recebe*/
void imprimi_dados(Aluno * aluno, int i);

/*libera da memoria os dados da variavel dinamicamente alocada*/
void liberar(Aluno * aluno);

/*coisa varias coisas*/
int matricula_mais(Aluno * aluno);