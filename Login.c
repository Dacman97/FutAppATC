//------------------------------------------------
//---------- Módulo Login - Ficheiro .c ----------
//------------------------------------------------

#include "Login.h"

void login_inicial() {

	char login1[20];
	char senha1[20];
	int opcao;

	do {
		system("cls");
		printf("\n1 - Login\n ");
		printf("\n2 - Sair\n ");
		scanf(" %d", &opcao);
		switch (opcao) {
		case 1:
			system("cls");
			printf("\nUSERNAME: ");
			scanf(" %s", login1);
			printf("\nPASSWORD: ");
			scanf(" %s", senha1);

			//			!!!!	Fazer função validação_login	!!!!
			//Se for igual a 0 é porque as duas são iguais.
			if (strcmp(login1, conta_adm) == 0 && strcmp(senha1, senha_adm) == 0) {
				menu_adm();//Retornar um valor e dependendo disso iniciar esta função!!
			}
			else if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0) {
				menu_utilizador();//Retornar um valor e dependendo disso iniciar esta função!!
			}
			else {
				printf("\nLogin e/ou password incorreto(s)\n");//Retornar um valor e dependendo disso iniciar esta função!!
			}
			//			!!!!	Fazer função validação_login	!!!!

			break;
		case 2:
			opcao = 2;
		default:
			printf("Insira uma opçao valida!");
			system("pause");
			system("cls");
			break;
		}
	} while (opcao != 2);
}

void menu_adm() {

	system("cls");
	int opcao;

	do {
		printf("\nConta Administrador! \n\n");
		printf("Menu: \n");
		printf("1 - Criar Utilizador \n");
		printf("2 - Listar Utilizadores \n");
		printf("3 - Logout \n");
		scanf(" %d", &opcao);
		switch (opcao) {
		case 1:
			system("cls");
			printf("\nCriar utilizador - Em desenvolvimento");
			system("pause");
			system("cls");
			//criar_utilizador(); // POR DESENVOLVER! - MÓDULO UTILIZADOR
			break;
		case 2:
			system("cls");
			printf("\nListar utilizador - Em desenvolvimento");
			system("pause");
			system("cls");
			//listar_utilizador(); // POR DESENVOLVER! - MÓDULO UTILIZADOR
			break;
		case 3: 
			opcao = 3;
			break;
		default:
			printf("Insira uma opçao valida!");
			system("pause");
			system("cls");
			break;
		}
	} while (opcao != 3);
}

void menu_utilizador() {

	int opcao;

	do {
		printf("\nConta Treinador! \n\n");
		printf("Menu: \n");
		printf("1 - Criar Jogador \n");
		printf("2 - Listar Jogador \n");
		printf("3 - Editar Jogador \n");
		printf("4 - Logout \n");
		scanf(" %d", &opcao);
		switch (opcao) {
		case 1:
			system("cls");
			printf("\nCriar Jogador - Em desenvolvimento\n\n");
			system("pause");
			system("cls");
			//criar_jogador(); // POR DESENVOLVER! - MÓDULO JOGADOR
			break;
		case 2:
			system("cls");
			printf("\nListar Jogador - Em desenvolvimento\n\n");
			system("pause");
			system("cls");
			//listar_jogador(); // POR DESENVOLVER! - MÓDULO JOGADOR
			break;
		case 3:
			system("cls");
			printf("\nEditar Jogador - Em desenvolvimento\n\n");
			system("pause");
			system("cls");
			//editar_jogador();// POR DESENVOLVER! - MÓDULO JOGADOR
			break;
		case 4:
			opcao = 4;
			break;
		default:
			printf("Insira uma opçao valida!"); 
			system("pause");
			system("cls");
			break;
		}
	} while (opcao != 4);
}