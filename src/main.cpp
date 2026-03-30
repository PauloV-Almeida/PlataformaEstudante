#include "../include/Pessoa.h"


int main()
{
	Pessoa Einstein(14, 3, 1879, "Albert Einstein");
	Pessoa Newton(4, 1, 1643, "Isaac Newton");

	Einstein.CalculaIdade(30, 3, 2026);
	Newton.CalculaIdade(30, 3, 2026);

	Einstein.ImprimeIdade();
	Newton.ImprimeIdade();

	return 0;
}
