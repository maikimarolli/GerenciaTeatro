#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

struct cadeira
{
	int valor, preco;
};

struct cadeira teatro[9][10];
int i, j;

void listarPoltronas()
{
	system("cls");
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 10; j++)
		{
			if(teatro[i][j].valor == 0)
				printf("Poltrona [%d][%d] disponivel.\n", i, j);
			else if(teatro[i][j].valor == 1)
				printf("Poltrona [%d][%d]separada para isolamento.\n", i, j);
			else if(teatro[i][j].valor == 2)
				printf("Poltrona [%d][%d] ja foi vendida.\n", i, j);
		}
		printf("\n");
	}
	system("pause");

}


void listarPoltronasQuadrado()
{
	printf("Esse eh o esquema de poltronas, lembre-se: \n");
	printf("C = Espaco reservado para distanciamento.\n");
	printf("V = Poltrona ja esta vendida.\n");
	printf("L = Poltrona livre.\n");
	printf("|----|---------------LADO--------------------|\n");
	printf("|    | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |\n");
	printf("|----|---|---|---|---|---|---|---|---|---|---|\n");
	for(i = 0; i < 9; i++)
	{
		if(i == 0)
			printf("|-- %d| ", i);
		else if(i == 1)
			printf("|-- %d| ", i);
		else if(i == 2)
			printf("|-P %d| ", i);
		else if(i == 3)
			printf("|-A %d| ", i);
		else if(i == 4)
			printf("|-L %d| ", i);
		else if(i == 5)
			printf("|-C %d| ", i);
		else if(i == 6)
			printf("|-O %d| ", i);
		else if(i == 7)
			printf("|-- %d| ", i);
		else if(i == 8)
			printf("|-- %d| ", i);
		for(j = 0; j < 10; j++)
		{

			if(teatro[i][j].valor == 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				printf("L ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("| ");
			}

			else if(teatro[i][j].valor == 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
				printf("C ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("| ");
			}
			else if(teatro[i][j].valor == 2)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
				printf("V ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				printf("| ");
			}

		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		printf("\n");
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf("|----|---|---|---|---|---|---|---|---|---|---|\n");
	printf("\n");
}


void compraPoltrona()
{
	system("cls");
	char RESPOSTA[3];
	char verdadeiro[] = "sim";
	char falso[] = "nao";
	listarPoltronasQuadrado();
	printf("Voce escolheu comprar uma poltrona, em qual fila deseja?\n");
	scanf("%d", &i);
	printf("E qual coluna?\n");
	scanf("%d", &j);
	if(teatro[i][j].valor == 0)
	{
		printf("Poltrona [%d][%d] disponivel, o valor eh R$ %d.\n", i, j, teatro[i][j].preco);
		printf("Deseja comprar ingresso para essa poltrona?sim ou nao.\n");
		scanf("%s", RESPOSTA);
		if(strcmp(RESPOSTA, verdadeiro) == 0)
		{
			teatro[i][j].valor = 2;
			printf("Poltrona adquirada com sucesso!\n");
		}
		if(strcmp(RESPOSTA, falso) == 0)
		{
			printf("Compra nao finalizada, escolha uma das opcoes do menu.\n\n");
		}
	}
	else if(teatro[i][j].valor == 1)
		printf("Poltrona reservada para isolamento do covid. Escolha outra.\n\n");
	else if(teatro[i][j].valor == 2)
		printf("Poltrona ja foi vendida. Escolha outra.\n\n");

	printf("\n");
	system("pause");
}

void valorArrecadado()
{
	system("cls");
	int valor = 0;
	for(i = 0; i < 9; i++)
		for(j = 0; j < 10; j++)
			if(teatro[i][j].valor == 2)
			{
				valor = valor + teatro[i][j].preco;
			}
	printf("Valor arrecadado ate entao: R$ %d\n", valor);
	printf("\n");
	system("pause");
}

void vendasDisponiveis()
{
	system("cls");
	int livreQNT = 0, vendidaQNT = 0, covid = 0;
	for(i = 0; i < 9; i++)
		for(j = 0; j < 10; j++)
			if(teatro[i][j].valor == 0)
				livreQNT++;
			else if(teatro[i][j].valor == 1)
				covid++;
			else if(teatro[i][j].valor == 2)
				vendidaQNT++;

	printf("No momento: \n");
	printf("Vendemos %d poltronas.\n", vendidaQNT);
	printf("Temos %d poltronas livres.\n", livreQNT);
	printf("[%d] poltronas estao reservadas para o distanciamento.\n", covid);
	printf("\n");
	system("pause");
}


void consultarDisponibilidade()
{
	for(i = 0; i < 9; i++)
		for(j = 0; j < 10; j++)
			if(teatro[i][j].valor == 0)
			{
				printf("Poltrona [%d[%d] livre.\n", i, j);
			}

	system("pause");
}
