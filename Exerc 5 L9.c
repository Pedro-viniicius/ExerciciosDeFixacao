#include <stdio.h>

int main() {
    // Altura inicial de Chico e Z� em cent�metros
    float alturaChico = 150;
    float alturaZe = 110;

    // Taxa de crescimento anual em cent�metros
    float crescimentoChico = 2;
    float crescimentoZe = 3;

    // Vari�vel para contar os anos
    int anos = 0;

    // Loop at� que Z� seja maior que Chico
    while (alturaZe <= alturaChico) {
        alturaChico += crescimentoChico;
        alturaZe += crescimentoZe;
        anos++;
    }

    // Imprime o resultado
    printf("Serao necessarios %d anos para que Ze seja maior que Chico.\n", anos);

    return 0;
}
