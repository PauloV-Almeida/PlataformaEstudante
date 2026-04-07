#pragma once
#include "../stdafx/stdafx.h"
class Universidade;
class Departamento;

class Pessoa
{
private:
	int diaP;
	int mesP;
	int anoP;
	int idadeP;
	char nomeP[50];

	int idP;

	//ponteiro de associação entre os objetos
	Universidade* pUniFiliado;

	//ponteiro de associação entre os objetos
	Departamento* pDepFiliado;
	

public:
	Pessoa(int dia, int mes, int ano, const char nome[] = "");
	Pessoa();
	~Pessoa();
	void InicializaP(int dia, int mes, int ano, const char nome[] = "");
	void CalculaIdade(int dia, int mes, int ano);
	void ImprimeIdade();


	//Este metodo associa universidade a pessoa
	void setUniFiliado(Universidade* pUni);
	void ondeTrabalha();

	//Este metodo associa departamento a pessoa
	void setDepFiliado(Departamento* pDep);
	void qualDepTrabalha();

};