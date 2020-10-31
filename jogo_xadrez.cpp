#include<stdio.h>
#include<conio.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>


int main(void)
{
	printf("Utilizando caracteres e acentua��o da l�ngua portuguesa  %s !\n\n", setlocale(LC_ALL, ""));
	int xadrez[8][8], i, j, peao, rainha, rei, bispo, torre, cavalo,posi;

	// Inicializando variaveis

	peao = 16;
	cavalo = 4;
	rainha = 2;
	rei = 2;
	bispo = 4;
	torre = 4;
	posi = 0; // variavel de controle
	
	printf("Considere posi��es como zero igual a posi��es vazias e as demais pe�as: \n\n Pe�o = 1 \n Cavalo = 2 \n Torre = 3 \n Bispo = 4 \n Rei = 5 \n Rainha = 6 \n ");
	printf("*********** TABULEIRO DE XADREZ *********** \n\n");
	int linha ;
	int coluna;
	int zero;
	int voltar; // variavel pra quando acabar as pe�as
	voltar = 0; // variavel do while

	zero = 0;
	linha = 0;  // variaveis para localizar a posi��o que quer coloca pe�a
	coluna = 0;


	// Mostro o xadrez com todas as posi��es vazias 


	for (i = 0; i < 8; i++)
	{

		for (j = 0; j < 8; j++)
		{
			xadrez[i][j] = zero;
			printf(" | %d ", xadrez[linha][coluna]);
		}

		printf("|\n");
	}

	
	do {

		printf("\n Digite qual posi��o que voc� quer colocar a pe�a, primeiro a linha :   ");
		scanf_s("%d", &linha);
		printf("\n\n Digite agora a coluna:  ");
		scanf_s("%d", &coluna);
		printf("\n\n Agora digite qual pe�a que voc� quer colocar nessa posi��o:   ");
		scanf_s("%d", &posi);
		


		//verifico a posi��o digitada com linha e coluna
		// depois com posi pego a pe�a que ele quer colocar

		if (posi == 1) // vejo qual e a pe�a
		{
			if (peao > 0) // se ja nao colocou todas
			{
				if (xadrez[linha][coluna] == 0) // verifico se a posi��o ja esta ocupada
				{
					xadrez[linha][coluna] = posi;
					peao = peao - 1;
					printf("\n\n Voce colocou um PEAO. ");
				}
				else
				{
					printf("Posi��o ja preenchida");
				}
			}
		}
		if (peao == 0)
		{
			printf("\n\n Acabou os pe�es\n");
		}
		if (posi == 2)
		{
			if (cavalo > 0 ) 
			{
				if (xadrez[linha][coluna] == 0)
				{
					xadrez[linha][coluna] = posi;
					cavalo = cavalo - 1;
					printf("\n\n Voce colocou um CAVALO");
				}
				else
				{
					printf("Posi��o ja preenchida");
				}
			}
		}
		if (cavalo == 0)
		{
			printf("\n\n Acabou os cavalos\n");
		}
		if (posi == 3)
		{
			if (torre > 0)
			{
				if (xadrez[linha][coluna] == 0)
				{
					xadrez[linha][coluna] = posi;
					torre = torre - 1;
					printf("\n\n Voce colocou uma TORRE\n ");
				}
				else
				{
					printf("Posi��o ja preenchida");
				}
			}
		}
		if (torre == 0)
		{
			printf("\n\nAcabou as torres\n");
		}
		if (posi == 4)
		{
			if (bispo > 0 )
			{
				if (xadrez[linha][coluna] == 0)
				{
					xadrez[linha][coluna] = posi;
					bispo = bispo - 1;
					printf("\n\n Voce colocou um BISPO\n ");
				}
				else
				{
					printf("Posi��o ja preenchida");
				}
			}
		}
		if (bispo == 0)
		{
			printf("\n\n Acabou os bispo\n");
		}
		if (posi == 5)
		{
			if (rei > 0)
			{

				if (xadrez[linha][coluna] == 0)
				{
					xadrez[linha][coluna] = posi;
					rei = rei - 1;
					printf("\n\n Voce colocou um REI\n ");
				}
				else 
				{
					printf("\n\n Posi��o ja preenchida");

				}
			}
		}
		if (rei == 0)
		{
			printf("\n\n Acabou os reis\n");
		}
		if (posi == 6)
		{
			if (rainha > 0) 
			{
				if (xadrez[linha][coluna] == 0)
				{
					xadrez[linha][coluna] = posi;
					rainha = rainha - 1;
					printf("\n\n Voce colocou uma RAINHA\n ");
				}
				else
				{
					printf("Posi��o ja preenchida");
				}
			}
		}
		if (rainha == 0)
		{
			printf("\n\nAcabou as rainhas\n");
		}

		// FINALIZADA AS VERIFICA��ES 
		// TODA VEZ QUE COLOCO UMA PE�A ELE PULA PRA ATUALIZAR O TABULEIRO
		// 
		
		

			_sleep(3000);



			printf("\n\n******************* TABULEIRO ATUALIZADO ********************* \n\n");

			for (i = 0; i < 8; i++)
			{

				for (j = 0; j < 8; j++)
				{
					printf(" | %d ", xadrez[i][j]);
				}

				printf("|\n");


			}

			// verifico se o usuario quer continuar caso ele tenha errado a pe�a

			printf("\n\n Quer voltar pra continuar a colocar as pe�as ? Sim = 1 / Nao = 2:   ");
			scanf_s("%d", &voltar);
		
			// SE TODAS FOREM IGUAIS A ZERO QUER DIZER QUE ACABOU AS PE�AS
		if (peao == 0 && rainha == 0 && torre == 0 && bispo == 0 && rei == 0 && cavalo == 0)
		{
			printf("\n\n Acabou todas as pe�as");
			voltar = 0;
		}
	} while (voltar == 1);

	
	return(0);
}
