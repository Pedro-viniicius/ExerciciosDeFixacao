#include <stdio.h>

int main() {
    // Declara��o de vari�veis
    int cod[5], temp[5], i = 0, con = 0, k = 0, j = 0;
    float sal[5], salbase, menor;

    // Solicita ao usu�rio para inserir os dados necess�rios
    printf("Digite os dados necessarios para fazermos seu relatorio:\n\n");

    // Loop para coletar dados de 5 funcion�rios
    for (i = 0; i < 5; i++) {
        printf("Codigo do funcionario (%d): ", i + 1);
        scanf("%d", &cod[i]);

        printf("Salario do funcionario (%d): ", i + 1);
        scanf("%f", &sal[i]);

        printf("Tempo em anos do funcionario (%d): ", i + 1);
        scanf("%d", &temp[i]);

        // Limpa a tela ap�s a entrada de dados
        system("cls");
    }

    // Solicita o sal�rio base para compara��o
    printf("Digite o salario que sera a base do relatorio: ");
    scanf("%f", &salbase);

    // Limpa a tela
    system("cls");

    // Exibe a lista de funcion�rios com sal�rio at� o sal�rio base
    printf("Segue lista de funcionario que possuem salario ate R$%0.2f :\n", salbase);

    // Verifica funcion�rios com sal�rio menor ou igual ao sal�rio base
    for (i = 0; i < 5; i++) {
        if (sal[i] <= salbase) {
            printf("Funcionario com codigo(%d), possui o salario: R$%0.2f\n", cod[i], sal[i]);
            con++; // Conta quantos funcion�rios t�m sal�rios menores ou iguais ao sal�rio base
        }
    }

    // Exibe a lista de funcion�rios com sal�rio maior que o sal�rio base
    printf("\n\nSegue lista de funcionario que possuem salario maior que R$%0.2f :\n", salbase);

    // Verifica funcion�rios com sal�rio maior que o sal�rio base
    for (i = 0; i < 5; i++) {
        if (sal[i] > salbase) {
            printf("Funcionario com codigo(%d), possui o salario: R$%0.2f\n", cod[i], sal[i]);
            con++; // Conta quantos funcion�rios t�m sal�rios maiores que o sal�rio base
        }
    }

    // Se nenhum funcion�rio foi encontrado, exibe uma mensagem de erro
    if (con == 0) {
        printf("\n\nNao foi encontrado os dados necessarios para construcao do relatorio, insira os dados corretos:\n");
    }

    // Inicializa a vari�vel menor com o primeiro sal�rio do vetor
    menor = sal[0];

    // Encontra o menor sal�rio no vetor
    for (i = 0; i < 5; i++) {
        if (sal[i] < menor) {
            menor = sal[i];
        }
    }

    // Exibe o menor sal�rio encontrado
    printf("\nSalario menor e: %0.2f\n", menor);

    // Conta quantos funcion�rios possuem o menor sal�rio
    for (i = 0; i < 5; i++) {
        if (sal[i] == menor) {
            k++;
        }
    }

    // Exibe quantos funcion�rios possuem o menor sal�rio
    printf("Possui %d trabalhador na empresa com este salario. \n\n", k);

    // Exibe os c�digos dos funcion�rios que possuem o menor sal�rio
    for (i = 0; i < 5; i++) {
        if (sal[i] == menor) {
            printf("Funcionario com codigo %d possui este salario.\n", cod[i]);
        }
    }

    printf("\n");

    // Verifica quais funcion�rios est�o isentos de imposto (tempo de servi�o entre 2 e 4 anos e sal�rio menor que R$ 1500)
    for (i = 0; i < 5; i++) {
        if (temp[i] >= 2 && temp[i] <= 4 && sal[i] < 1500) {
            printf("Funcionario com codigo %d esta isento de imposto\n", cod[i]);
            j++; // Conta quantos funcion�rios est�o isentos de imposto
        }
    }

    // Se nenhum funcion�rio est� isento de imposto, exibe uma mensagem
    if (j == 0) {
        printf("\nTodos funcionarios precisam pagar imposto, nao existe nenhum isento.");
    }

    return 0;
}


