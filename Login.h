//------------------------------------------------
//---------- Módulo Login - Ficheiro .h ----------
//------------------------------------------------

#ifndef LOGIN_H
#define LOGIN_H

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS 
#endif

//Include´s das Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Conta Admin pré-definida
#define conta_adm "admin"
#define senha_adm "admin"
//Conta Treinador pré-definida de teste
#define login "diogo"
#define senha "diogo"

//Protótipos das Funções
void login_inicial();
void menu_adm();
void menu_utilizador();


#endif