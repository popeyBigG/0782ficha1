// Programa para calcular o Salário Liquido //
#include <stdio.h>

// Declaração de variáveis globais //

double salario;
double subsidioA;
double descontos;
double salarioLiquid;

// =============================== //

int main() {

valorSalario();
valorSubsidioA();
valorDescontos();
calcSalarioLiquid();
mostrarValores();

return 0;
}

/*=========================================================================*/

        // Função de pergunta nº1 para definir a variavel salario

valorSalario(void) {

printf("Insira o salário: ");
scanf("%lf/n", &salario);

}

/*=========================================================================*/

        // Função de pergunta nº2 para definir a variavel subsidioA

valorSubsidioA(void) {

printf("Insira o valor do Subsidio de alimentação: ");
scanf(" %lf/n", &subsidioA);

}

/*=========================================================================*/

        // Função pergunta nº3 para definir a variavel descontos

valorDescontos(void) {

printf("Insira o valor dos Descontos: ");
scanf(" %lf/n", &descontos);

}

/*=========================================================================*/

        // Função de cálculo para definir a variavel salarioLiquid

calcSalarioLiquid(void) {

salarioLiquid = (salario + subsidioA) - descontos;

}

/*=========================================================================*/

   // Função para mostrar os print com os valores e calculos efetuados //

mostrarValores(void) {

printf("\nSalário:\n\n%2.lf\n\nSubsidio de Alimentação:\n\n%2.lf\n\nDescontos:\n\n%2.lf\n\nSalário Liquido:\n\n%2.lf\n", salario, subsidioA, descontos, salarioLiquid);

}

/*=========================================================================*/