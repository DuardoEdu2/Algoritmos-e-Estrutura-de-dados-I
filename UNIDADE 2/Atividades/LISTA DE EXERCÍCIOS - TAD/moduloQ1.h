/*struct da conta contendo o nome, saldo e etc*/
typedef struct contabancaria Conta;
/*cria a conta do usuario e a retorna com os valores preenchidos*/
Conta * Cria_Conta(void);
/*retorna o saldo da conta*/
void ShowSaldo(Conta ** conta, int i);