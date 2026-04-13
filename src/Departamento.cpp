#include "../include/Departamento.h"

Departamento::Departamento()
{
	strcpy_s(nomeDep, "");
	
}

Departamento::~Departamento()
{
}

void Departamento::setNomeDep(const char nDep[])
{
	strcpy_s(nomeDep, nDep);
}

const char* Departamento::getNomeDep()
{
	return nomeDep;
}

