#pragma once
class Departamento;

class Universidade
{
private:
	char nomeUni[50];
	Departamento* pDepUni;
public:
	Universidade(const char nUni[] = "");
	~Universidade();

	void setNomeUni(const char nUni[] = "");	
	const char* getNomeUni();
	//agregação de departamento a universidade
	void setnomeDep(Departamento* nDep);
};

