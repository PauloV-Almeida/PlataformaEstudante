#include "../include/Pessoa.h"


int main()
{
	/* Criando objetos Pessoa para Albert Einstein e Isaac Newton
	 e passando atributos como parâmetros*/
	Pessoa Einstein(14, 3, 1879, "Albert Einstein");
	Pessoa Newton(4, 1, 1643, "Isaac Newton");
	Pessoa Simao(3, 10, 1976, "Jean Simao");


	//função para calcular a idade
	Einstein.CalculaIdade(30, 3, 2026);
	Newton.CalculaIdade(30, 3, 2026);
	Simao.CalculaIdade(30, 3, 2026);

	//função para imprimir a idade
	Einstein.ImprimeIdade();
	Newton.ImprimeIdade();
	Simao.ImprimeIdade();

	
	return 0;
}
