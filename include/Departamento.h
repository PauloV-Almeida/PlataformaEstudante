#pragma once
#include "../stdafx/stdafx.h"
class Departamento
{
private:
	int idDep;
	char nomeDep[130];
public:
	Departamento();
	~Departamento();

	int getIdDep();

	void setNomeDep(const char nDep[] = "");
	const char* getNomeDep();

};