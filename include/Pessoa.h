#pragma once
#include "../stdafx/stdafx.h"

class Pessoa
{
protected:

	int diaP;
	int mesP;
	int anoP;
	int idadeP;
	char nomeP[50];

	int idP;

public:
	Pessoa(int dia, int mes, int ano, const char nome[] = "");
	Pessoa();
	~Pessoa();
	void InicializaP(int dia, int mes, int ano, const char nome[] = "");
	void CalculaIdade(int dia, int mes, int ano);
	void ImprimeIdade();
	void setIdP(int id) { idP = id; }
	int getIdP() { return idP; }
	void setNomeP(const char n[]) { strcpy_s(nomeP, n); }
	const char* getNomeP() { return nomeP; }

};