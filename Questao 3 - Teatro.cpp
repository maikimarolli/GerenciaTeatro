#include "Questao 3 - Teatro.h"


int main()
{

	int OP = -1;

	for(i = 0; i < 9; i++)
		for(j = 0; j < 10; j++)
		{
			if((i % 2 == 0) && (j % 2 == 0))
			{
				teatro[i][j].valor = 0;
			}
			else if((i % 2 != 0) && (j % 2 != 0))
			{
				teatro[i][j].valor = 0;
			}
			else if((i % 2 != 0) && (j % 2 == 0))
			{
				teatro[i][j].valor = 1;
			}
			else if((i % 2 == 0) && (j % 2 != 0))
			{
				teatro[i][j].valor = 1;
			}
		}
	for(i = 0; i < 9; i++)
		for(j = 0; j < 10; j++)
		{
			if(j == 0)
			{
				if(teatro[i][j].valor == 0)
					teatro[i][j].preco = 100;
				else
					teatro[i][j].preco = 0;
			}
			if(j == 1)
			{
				if(teatro[i][j].valor == 0)
					teatro[i][j].preco = 90;
				else
					teatro[i][j].preco = 0;
			}
			if(j == 2)
			{
				if(teatro[i][j].valor == 0)
					teatro[i][j].preco = 80;

				else
					teatro[i][j].preco = 0;
			}
			if(j == 3)
			{
				if(teatro[i][j].valor == 0)
					teatro[i][j].preco = 70;
				else
					teatro[i][j].preco = 0;
			}
			if(j == 4)
			{
				if(teatro[i][j].valor == 0)
					teatro[i][j].preco = 60;
				else
					teatro[i][j].preco = 0;
			}
			if(j == 5)
			{
				if(teatro[i][j].valor == 0)
					teatro[i][j].preco = 50;
				else
					teatro[i][j].preco = 0;
			}
			if(j == 6)
			{
				if(teatro[i][j].valor == 0)
					teatro[i][j].preco = 40;
				else
					teatro[i][j].preco = 0;
			}
			if(j == 7)
			{
				if(teatro[i][j].valor == 0)
					teatro[i][j].preco = 30;
				else
					teatro[i][j].preco = 0;
			}
			if(j == 8)
			{
				if(teatro[i][j].valor == 0)
					teatro[i][j].preco = 20;
				else
					teatro[i][j].preco = 0;
			}
		}

	while(1)
	{
		system("cls");
		printf("Bem vindo ao programa de compras de ingressos para o Seminario de Liderancas!\n");
		printf("\n");
		printf("Esse eh o nosso menu, escolha uma opcao: \n");
		printf("1 - Comprar Ingresso.\n");
		printf("2 - Listar Poltronas.\n");
		printf("3 - Valor arrecadado.\n");
		printf("4 - Quantidade vendido X Total Disponivel.\n");
		printf("5 - Consultar disponibilidade.\n");
		printf("6 - Sair.\n");
		scanf("%d", &OP);

		if(OP == 1)
		{
			compraPoltrona();
		}
		else if(OP == 2)
		{

			listarPoltronasQuadrado();
			system("pause");
		}
		else if(OP == 3)
		{
			valorArrecadado();
		}
		else if(OP == 4)
		{
			vendasDisponiveis();
		}
		else if(OP == 5)
		{
			consultarDisponibilidade();
		}
		else if(OP == 6)
			break;
	}
	system("pause");
	return 0;
}

