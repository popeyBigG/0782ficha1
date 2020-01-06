#include <stdio.h>

int main() {

    // Variaveis //

    char nome[256];
    double nota1;
    double nota2;
    double nota3;
    
    double media;

    // Inputs/Outputs //

    printf("Insira o primeiro nome: ");
    scanf("%s", nome);

    printf("Insira a nota do 1º teste: ");
    scanf(" %lf", &nota1);

    printf("Insira a nota do 2º teste: ");
    scanf(" %lf", &nota2);

    printf("Insira a nota do 3º teste: ");
    scanf(" %lf", &nota3);

    // Calculos //

    media = (nota1 * 0.25) + (nota2 * 0.35) + (nota3 * 0.40);

    // Output final //
    
    printf("\nAluno: %s", nome);
    printf("\nMédia ponderada: %2.lf\n", media);

return 0;
}