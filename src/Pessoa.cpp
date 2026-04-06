#include "../include/Pessoa.h"

Pessoa::Pessoa(int dia, int mes, int ano, const char nome[])
{

}

Pessoa::Pessoa()
{
	
}

Pessoa::~Pessoa()
{
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