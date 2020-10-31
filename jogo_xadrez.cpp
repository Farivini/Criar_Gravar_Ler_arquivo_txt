#include<stdio.h>
#include<conio.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>


int main(void)
{
	printf("Utilizando caracteres e acentuação da língua portuguesa  %s !\n\n", setlocale(LC_ALL, ""));
	int xadrez[8][8], i, j, peao, rainha, rei, bispo, torre, cavalo,posi;

	// Inicializando variaveis

	peao = 16;
	cavalo = 4;
	rainha = 2;
	rei = 2;
	bispo = 4;
	torre = 4;
	posi = 0; // variavel de controle
	
	printf("Considere posições como zero igual a posições vazias e as demais peças: \n\n Peão = 1 \n Cavalo = 2 \n Torre = 3 \n Bispo = 4 \n Rei = 5 \n Rainha = 6 \n ");
	printf("*********** TABULEIRO DE XADREZ *********** \n\n");
	int linha ;
	int coluna;
	int zero;
	int voltar; // variavel pra quando acabar as peças
	voltar = 0; // variavel do while

	zero = 0;
	linha = 0;  // variaveis para localizar a posição que quer coloca peça
	coluna = 0;


	// Mostro o xadrez com todas as posições vazias 


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

		printf("\n Digite qual posição que você quer colocar a peça, primeiro a linha :   ");
		scanf_s("%d", &linha);
		printf("\n\n Digite agora a coluna:  ");
		scanf_s("%d", &coluna);
		printf("\n\n Agora digite qual peça que você quer colocar nessa posição:   ");
		scanf_s("%d", &posi);
		


		//verifico a posição digitada com linha e coluna
		// depois com posi pego a peça que ele quer colocar

		if (posi == 1) // vejo qual e a peça
		{
			if (peao > 0) // se ja nao colocou todas
			{
				if (xadrez[linha][coluna] == 0) // verifico se a posição ja esta ocupada
				{
					xadrez[linha][coluna] = posi;
					peao = peao - 1;
					printf("\n\n Voce colocou um PEAO. ");
				}
				else
				{
					printf("Posição ja preenchida");
				}
			}
		}
		if (peao == 0)
		{
			printf("\n\n Acabou os peões\n");
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
					printf("Posição ja preenchida");
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
					printf("Posição ja preenchida");
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
					printf("Posição ja preenchida");
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
					printf("\n\n Posição ja preenchida");

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
					printf("Posição ja preenchida");
				}
			}
		}
		if (rainha == 0)
		{
			printf("\n\nAcabou as rainhas\n");
		}

		// FINALIZADA AS VERIFICAÇÕES 
		// TODA VEZ QUE COLOCO UMA PEÇA ELE PULA PRA ATUALIZAR O TABULEIRO
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

			// verifico se o usuario quer continuar caso ele tenha errado a peça

			printf("\n\n Quer voltar pra continuar a colocar as peças ? Sim = 1 / Nao = 2:   ");
			scanf_s("%d", &voltar);
		
			// SE TODAS FOREM IGUAIS A ZERO QUER DIZER QUE ACABOU AS PEÇAS
		if (peao == 0 && rainha == 0 && torre == 0 && bispo == 0 && rei == 0 && cavalo == 0)
		{
			printf("\n\n Acabou todas as peças");
			voltar = 0;
		}
	} while (voltar == 1);

	
	return(0);
}
