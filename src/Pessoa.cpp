#include "../include/Pessoa.h"
#include "../include/Universidade.h"
#include "../include/Departamento.h"

Pessoa::Pessoa(int dia, int mes, int ano, const char nome[])
{
	InicializaP(dia, mes, ano, nome);
}

Pessoa::Pessoa()
{
	// como ja esta sendo colocado o valor default, aqui não precisa colocar nada para nome
	InicializaP(0, 0, 0);
}

Pessoa::~Pessoa()
{
}

void Pessoa::InicializaP(int dia, int mes, int ano, const char nome[])
{
	idadeP = 0;
	diaP = dia;
	mesP = mes;
	anoP = ano;
	strcpy_s(nomeP, nome);
}

void Pessoa::CalculaIdade(int dia, int mes, int ano)
{
	idadeP = ano - anoP;
	if (mesP < mes || (mesP == mes && diaP <= dia))
	{
		idadeP = ano - anoP;
	}
	else
	{
		idadeP = ano - anoP - 1;
	}
	
}

void Pessoa::ImprimeIdade()
{
	cout << "Nome: " << nomeP << std::endl;
	cout << "Idade: " << idadeP << " anos" << std::endl;
}
