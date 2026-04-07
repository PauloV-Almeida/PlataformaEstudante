#include "../include/Departamento.h"

Departamento::Departamento(const char nDep[])
{
	strcpy_s(nomeDep, nDep);
}

Departamento::~Departamento()
{
}

int Departamento::getIdDep()
{
	return idDep;
}

void Departamento::setNomeDep(const char nDep[])
{
	strcpy_s(nomeDep, nDep);
}

const char* Departamento::getNomeDep()
{
	return nomeDep;
}

