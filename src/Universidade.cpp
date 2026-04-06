#include "../include/Universidade.h"
#include <string.h>

Universidade::Universidade(const char nUni[])
{
	strcpy_s(nomeUni, nUni);
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