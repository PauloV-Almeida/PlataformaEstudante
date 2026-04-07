#include "../include/Universidade.h"
#include "../include/Departamento.h"
#include <string.h>

Universidade::Universidade()
{
	strcpy_s(nome, "");
	for (int i = 0; i < 50; i++)
	{
		pDepUni[i] = nullptr;
	}
}

Universidade::~Universidade()
{
}

void Universidade::setNome(const char n[])
{
	strcpy_s(nome, n);
}

const char* Universidade::getNome()
{
	return nome;
}

void Universidade::setDepts(Departamento* pDep, int ctd)
{
	pDepUni[ctd] = pDep;
}

void Universidade::imprimeDepts()
{
	for (int i = 0; i < 50; i++)
	{
		if (pDepUni[i] != nullptr)
		{
			cout << pDepUni[i]->getNomeDep() << endl;
		}
	}
}