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
	void InicializaP(int dia, int mes, int ano, const char nome[] = "");
	void CalculaIdade(int dia, int mes, int ano);
	void ImprimeIdade();
};