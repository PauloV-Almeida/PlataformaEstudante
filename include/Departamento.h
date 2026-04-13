#pragma once
#include "../stdafx/stdafx.h"
class Departamento
{
private:
	char nomeDep[130];
public:
	Departamento();
	~Departamento();


	void setNomeDep(const char nDep[] = "");
	const char* getNomeDep();

};