#include <string.h>
#include <stdio.h>
#define tam 100
/*Utilizando uma estrutura, fa�a um programa que permita a entrada de
nome, endere�o e telefone de 5 pessoas e os imprima em ordem
alfab�tica.*/



int main(){

	struct end{
		int num;
		char rua[tam], bairro[tam], cidade[tam];
	};
	struct person {
		int tel;
		char nome[tam];
		struct end ender[tam];
		
	};

	int i=0;
	struct person user[tam];
	
	for(i; i < tam; i++){
		printf("Ola, digite seus dados:\n");
		printf("NOME: ");
		gets(user[i].nome);
	
}
	return 0;
}

