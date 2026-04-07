#pragma once
class Departamento;

class Universidade
{
private:
	char nome[130];
	Departamento* pDepUni[50];
public:
	Universidade();
	~Universidade();

	void setNome(const char n[] = "");	
	const char* getNome();
	//agregação de departamento a universidade
	void setDepts(Departamento* pDep, int ctd);
	void imprimeDepts();
};

