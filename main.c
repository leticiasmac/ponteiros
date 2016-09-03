//*************************************
//*              PONTEIROS            *
//* Autora: Letícia Machado           *
//* Aula: Laboratório de Algoritmos 2 *
//* Data: 02/09/2016                  *
//* Antonio Meneghetti Faculdade      *
//*************************************

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int numero = 2;
int *ponteiro = &numero;

int main(int argc, char** argv) 
{
	printf("insira um numero: "); //pede um numero ao usuario
	
//	scanf("%i", &numero);
	scanf("%i", ponteiro); //salva o valor

//	printf("O numero inserido foi: %i!\n", numero);
printf("O numero inserido foi: %i!\n", *ponteiro); //mostra o valor inserido na tela
	
	return 0;
}
