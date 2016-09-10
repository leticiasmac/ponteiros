//*************************************
//*              PONTEIROS            *
//* Autora: Letícia Machado           *
//* Aula: Laboratório de Algoritmos 2 *
//* Data: 02/09/2016                  *
//* Antonio Meneghetti Faculdade      *
//*************************************

#include <stdio.h>

int main ()
{
	//criacao e inicializacao das variaveis e ponteiros
	//char minha_string [] = {"1234567890"};
	char minha_string [] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
	char *meu_ponteiro = &minha_string;
	
	//exibe o valor contido em cada posicao da string a partir do endereco contido no ponteiro
	
	do
	{
		printf("\n o meu_ponteiro aponta para o valor: %c\n", *meu_ponteiro);
		meu_ponteiro ++;
	}
	while (*meu_ponteiro != '0');
	
	printf("\n o tamanho de minha_string eh: %i\n", sizeof (minha_string));
	
	//retorna 0
	return 0;
}
