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

// aqui é onde a pessoa é associada a universidade, passando
// o endereço da universidade para o ponteiro de associação
void Pessoa::setUniFiliado(Universidade* pUni)
{
	pUniFiliado = pUni;
}

void Pessoa::ondeTrabalha()
{
	if (pUniFiliado != nullptr)
	{
		cout << nomeP << " trabalha na universidade " << pUniFiliado->getNomeUni() << std::endl;
	}
	else
	{
		cout << nomeP << " não está associado a nenhuma universidade." << std::endl;
	}
}

// aqui é onde a pessoa é associada a departamento, passando
// o endereço do departamento para o ponteiro de associação

void Pessoa::setDepFiliado(Departamento* pDep)
{
	pDepFiliado = pDep;
}

void Pessoa::qualDepTrabalha()
{
	if (pDepFiliado != nullptr)
	{
		cout << nomeP << " trabalha para a "<< pUniFiliado->getNomeUni() << " e no Departamento  " << pDepFiliado->getNomeDep() << std::endl;
	}
	else
	{
		cout << nomeP << " não está associado a nenhum departamento." << std::endl;
	}
}