// Programa que calcula Receitas/Despesas de um mês //
#include <stdio.h>

// Declaração de variáveis globais //

double receita;
double despesas;
double saldo;

int main() {

valorReceita();
valorDespesas();
calcSaldo();


printf("\nValor para as receitas: %2.lf\n\nValor para as despesas: %2.lf\n\nSaldo: %2.lf\n", receita, despesas, saldo);
return 0;
}

/*=========================================================================*/

        // Função de pergunta nº1 para definir a variavel receita

valorReceita(void) {

printf("Insira o valor para as receitas: ");
scanf("%lf/n", &receita);

}

/*=========================================================================*/

        // Função de pergunta nº2 para definir a variavel despesas

valorDespesas(void) {

printf("Insira o valor para as despesas: ");
scanf("%lf/n", &despesas);

}

/*=========================================================================*/

                     // Função para calcular o saldo

calcSaldo(void) {

saldo = (receita - despesas);

}

/*=========================================================================*/