#pragma once
#include "../stdafx/stdafx.h"
class Departamento
{
private:
	int idDep;
	char nomeDep[130];
public:
	Departamento(const char nDep[] = "");
	~Departamento();

	int getIdDep();

	void setNomeDep(const char nDep[] = "");
	const char* getNomeDep();

};