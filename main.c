//*************************************
//*              PONTEIROS            *
//* Autora: Letícia Machado           *
//* Aula: Laboratório de Algoritmos 2 *
//* Data: 09/09/2016                  *
//* Antonio Meneghetti Faculdade      *
//*************************************

#include <stdio.h>

typedef struct 
{
	int Indice;
	char Nome [50];
	char Telefone [15];
}
	entrada;

int main ()
{
	//criacao e inicializacao das variaveis e ponteiros
	entrada pagina_01;
	entrada *ponteiro = &pagina_01;
	
	//pagina_01.Indice = 1;
	//pagina_01.Nome = {"Jonas Tadeu Reichert"};
	//pagina_01.Telefone = {"(55) 9903-4395"}
	
	printf("\n Insira o indice: ");
	//scanf("%i", &pagina_01.Indice);
	scanf("%i", &ponteiro->Indice);

	printf("\n Insira o nome: ");
	scanf("%s", &ponteiro->Nome);

	printf("\n Insira o telefone: ");
	scanf("%c", &ponteiro->Telefone);
	
	printf("\nIndice: %i\n", pagina_01.Indice);
	printf("\nNome: %s\n", pagina_01.Nome);
	printf("\nTelefone: %s\n", pagina_01.Telefone);
	
	//retorna 0
	return 0;
}
