#include <stdio.h>

int main() {

// Variaveis //
double consumo;

const double potencia = 5.42;
const double precokWh = 0.16;
const int IVA = 0.18;

double valorAPG;
double valorAPGcomIVA;
// ========= // 

    printf("Insira o consumo em kWh: ");
    scanf("%lf", &consumo);

    valorAPG = (potencia + consumo) * precokWh;
    valorAPGcomIVA = valorAPG + (valorAPG * IVA);

    printf("\nValor a pagar (com IVA) = %2.lf\n", valorAPGcomIVA);
}