#include "../include/Pessoa.h"

Pessoa::Pessoa(int dia, int mes, int ano, const char nome[])
{
	diaP = dia;
	mesP = mes;
	anoP = ano;
	idadeP = 0;
	strcpy(nomeP, nome);
}
Pessoa::Pessoa()
{
	diaP = 0;
	mesP = 0;
	anoP = 0;
	strcpy(nomeP, "");
}

Pessoa::~Pessoa()
{
}

int Pessoa::CalculaIdade(int dia, int mes, int ano, int idade)
{
	if (mesP < mes || (mesP == mes && diaP <= dia))
	{
		idadeP = ano - anoP;
	}
	else
	{
		idadeP = ano - anoP - 1;
	}
	return idadeP;
}