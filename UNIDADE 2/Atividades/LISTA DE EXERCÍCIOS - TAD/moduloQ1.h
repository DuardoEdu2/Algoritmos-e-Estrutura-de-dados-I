/*struct da conta contendo o nome, saldo e etc*/
typedef struct contabancaria Conta;
/*cria a conta do usuario e a retorna com os valores preenchidos*/
Conta * Cria_Conta(void);
/*retorna o saldo da conta*/
void ShowSaldo(Conta ** conta, int i);
/*faz um deposito na conta especifica*/
void Depositar(Conta ** conta, int i, float price);
/*faz um saque na conta especifica*/
void Sacar(Conta ** conta, int i, float price);
/*faz uma transferencia entre as contas fornecidas*/
void Trasnferir(Conta ** contas, int i, int j, int price);
/*remove todas as contas*/
void removerConta(Conta ** conta, int qtd);