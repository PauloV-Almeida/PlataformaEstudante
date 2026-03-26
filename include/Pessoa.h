#pragma once
#include "../stdafx/stdafx.h"

class Pessoa
{
private:
	int diaP;
	int mesP;
	int anoP;
	int idadeP;
	char nomeP[50];
public:
	Pessoa(int dia, int mes, int ano, const char nome[] = "");
	Pessoa();
	~Pessoa();
	int CalculaIdade(int dia, int mes, int ano, int idade);
	void ImprimeIdade();
};