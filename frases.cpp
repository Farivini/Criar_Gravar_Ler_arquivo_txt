#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
#include <algorithm>
#include <iostream>

int main(void)

{
	printf("Utilizando caracteres e acentuação da língua portuguesa  %s !\n\n", setlocale(LC_ALL, ""));


	FILE* arquivo;
	char nome[20];		//ponteiro que indica aonde esta o arquivo
	char frase_1[50];
	char frase_2[50];
	char frase_3[50];
	char frase_4[50];
	char frase_5[50];
	int i = 0;

	char fras[50];

	printf("Digite o nome do arquivo e colocoque  .txt ao final :\n");
	scanf("%s", nome);		// indicando para o usuario dar nome ao arquivo

	arquivo = fopen(nome, "w");
	if (arquivo == NULL)
	{
		printf("Erro na abertura do arquivo");
		return 1;

	}

	printf("****   Cadastre 5 cinco frases   *******");
	printf("\n\n Digite aqui 1º frase :  ");
	scanf("%s", frase_1);
	int tam = strlen(frase_1); // pego o tamanho da frase para colocar no laço forç como delimitador



	// Lembrando que fiz um por um pois meu executavél trava ao colocar no laço for


	printf("\n Digite aqui 2º frase :  ");
	scanf("%s", frase_2);


	printf("\n Digite aqui 3º frase :  ");
	scanf("%s", frase_3);


	printf("\n Digite aqui 4º frase :  ");
	scanf("%s", frase_4);


	printf("\n Digite aqui 5º frase :  ");
	scanf("%s", frase_5);



	for (int i = 0; i < tam; i++)	// percorro toda a frase letra por letra
	{
		frase_1[i] = toupper(frase_1[i]);
		frase_2[i] = toupper(frase_2[i]);
		frase_3[i] = toupper(frase_3[i]);
		frase_4[i] = toupper(frase_4[i]);
		frase_5[i] = toupper(frase_5[i]);

	}

	// faço a gravação das variaveis no arquivo ja passada para maiuscula

	fprintf(arquivo, "\n%s\n", frase_1);
	fprintf(arquivo, "\n%s\n", frase_2);
	fprintf(arquivo, "\n%s\n", frase_3);
	fprintf(arquivo, "\n%s\n", frase_4);
	fprintf(arquivo, "\n%s\n", frase_5);



	fclose(arquivo);


	printf("\n\nDados gravados\n\n");

	arquivo = fopen(nome, "r");
	while (fgets(fras, 50, arquivo) != NULL) // atribuo uma variavael para abrir em forma de leitura apenas o arquivo

	{
		printf("\n%s\n", fras); // percorro arquivo ate ser finalizado
	}

	fclose(arquivo);
	system("pause");
	return (0);
}

