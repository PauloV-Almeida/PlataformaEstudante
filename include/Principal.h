#pragma once
#include "Pessoa.h"
#include "Universidade.h"
#include "Departamento.h"

class Principal
{
private:
	int diaAtual, mesAtual, anoAtual;

	// aqui é criado os objetos da classe pessoa
	Pessoa Simao;
	Pessoa Einstain;
	Pessoa Newton;
	Pessoa Christiano;
	Pessoa Diego;

	// aqui é criado os objetos da classe universidade
	// e é agregada ao(s) objeto(s) da classe 
	Universidade UTFPR;
	Universidade IAS;
	Universidade Cambridge;

	// aqui é criado os objetos da classe departamento
	// e é agregada ao(s) objeto(s) da classe universidade
	Departamento DAINF;
	Departamento MateaticaIAS;
	Departamento FisicaCambridge;
	Departamento ModaUFTPR;
	Departamento TecnologiaUTFPR;
	
	
public:
	Principal();
	~Principal();
	void executar();
};

/*

*/