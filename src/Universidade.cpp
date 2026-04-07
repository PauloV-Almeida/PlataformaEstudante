#include "../include/Universidade.h"
#include "../include/Departamento.h"
#include <string.h>

Universidade::Universidade(const char nUni[])
{
	strcpy_s(nomeUni, nUni);
	pDepUni = nullptr;
}

Universidade::~Universidade()
{
}

void Universidade::setNomeUni(const char nUni[])
{
	strcpy_s(nomeUni, nUni);
}

const char* Universidade::getNomeUni()
{
	return nomeUni;
}

void Universidade::setnomeDep(Departamento* nDep)
{
	pDepUni = nDep;
}