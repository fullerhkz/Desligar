#include<iostream>

#include<stdio.h>

#include<stdlib.h>




int main(int argc, char** argv) {

	system("color 02");



	int opcao, teste;



	do

	{

		teste = 0;

		printf("\t\t\tDESLIGAR PC\n\n");

		printf("\tEm quanto tempo voce deseja desligar o seu PC???\n\n[1] - 15 Minutos\t[2] - 30 Minutos\t[3] - 45 Minutos\n[4] - 60 Minutos\t[5] - 90 Minutos\t[6] - 120 Minutos\n[7] - 180 Minutos\t[8] - 240 Minutos\t[9] - Sair do Programa\n\n\t\t\t[10] - Cancelar Desligamento");

		printf("\nSua Escolha e: ");

		scanf_s("%d", &opcao);



		switch (opcao)

		{

		case 1:

			system("shutdown -s -t 900");

			break;

		case 2:

			system("shutdown -s -t 1800");

			break;

		case 3:

			system("shutdown -s -t 2700");

			break;

		case 4:

			system("shutdown -s -t 3600");

			break;

		case 5:

			system("shutdown -s -t 5400");

			break;

		case 6:

			system("shutdown -s -t 7200");

			break;

		case 7:

			system("shutdown -s -t 10800");

			break;

		case 8:

			system("shutdown -s -t 14400");

			break;

		case 9:

			teste = 0;

			break;

		case 10:

			system("shutdown -a");

			break;

		default:

			printf("\n\nOpcao invalida, informe novamente\n");

			system("pause");

			teste = 1;

			system("cls");

			break;

		}

	}

	while (teste == 1);



	return 0;
}