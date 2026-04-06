#pragma once
#include "../stdafx/stdafx.h"
class Universidade
{
private:
	char nomeUni[50];
public:
	Universidade(const char nUni[] = "");
	~Universidade();

	void setNomeUni(const char nUni[] = "");	
	const char* getNomeUni();
};

