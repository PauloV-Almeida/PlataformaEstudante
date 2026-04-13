#pragma once
#include "Pessoa.h"
#include "Universidade.h"

class Professor : public Pessoa
{
private: 
	Universidade* pUniFiliado;
	Departamento* pDepFiliado;
public:
	Professor(int dia, int mes, int ano, const char nome[] = "");
	Professor();
	~Professor();
	void setUniFiliado(Universidade* pUni);
	void ondeTrabalha();
	void setDepartamento(Departamento* pDep);
	void qualDepTrabalha();
};