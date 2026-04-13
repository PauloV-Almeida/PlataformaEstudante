#include "../include/Professor.h"

Professor::Professor(int diaNa, int mesNa, int anoNa, const char* nome) :Pessoa(diaNa, mesNa, anoNa, nome)
{
	pUniFiliado = NULL; pDepFiliado = NULL;
}
Professor::Professor() :
	Pessoa()
{
	pUniFiliado = NULL; pDepFiliado = NULL;
}
Professor::~Professor()
{
	pUniFiliado = NULL; pDepFiliado = NULL;
}
void Professor::setUniFiliado(Universidade* pu)
{
	pUniFiliado = pu;
}
void Professor::setDepartamento(Departamento* pdpto)
{
	pDepFiliado = pdpto;
}
void Professor::ondeTrabalha()
{
	cout << nomeP << "trabalha para a" << pUniFiliado->getNome() << endl;
}
void Professor::qualDepTrabalha()
{
	cout << nomeP << "trabalha para a" << pUniFiliado->getNome()
		<< pDepFiliado->getNome()
		<< endl;
}