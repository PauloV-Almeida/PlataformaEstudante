#include "../include/Principal.h"

//podemos inicializar dessas duas formas
Principal::Principal()/* : Simao(3, 10, 1976, "Jean Simao"),
	Einstain(14, 3, 1879, "Albert Einstein"),
	Newton(4, 1, 1643, "Isaac Newton")*/
{
	// ou assim
	Simao.InicializaP(3, 10, 1976, "Jean Simao");
	Einstain.InicializaP(14, 3, 1879, "Albert Einstein");
	Newton.InicializaP(4, 1, 1643, "Isaac Newton");
	Daniel.InicializaP(9, 4, 2005, "Daniel Victor");
	
	//aqui setamos os nomes das universidades
	UTFPR.setNomeUni("UTFPR");
	IAS.setNomeUni("IAS");
	Cambridge.setNomeUni("Cambridge");

	// Aqui as Universidades são associadas as pessoas, como ve simao é associado a UTFPR via
	//passagem por referencia do 'endereço' dela
	Simao.setUniFiliado(&UTFPR);
	Einstain.setUniFiliado(&IAS);
	Newton.setUniFiliado(&Cambridge);

	// aqui setamos os nomes dos departamentos
	DAINF.setNomeDep("DAINF");
	MateaticaIAS.setNomeDep("Matematica");
	FisicaCambridge.setNomeDep("Fisica");

	//"Agregação" dos Departamentos as Universidades
	UTFPR.setnomeDep(&DAINF);
	IAS.setnomeDep(&MateaticaIAS);
	Cambridge.setnomeDep(&FisicaCambridge);

	// Filiação dos Departamentos as Pessoas
	Simao.setDepFiliado(&DAINF);
	Einstain.setDepFiliado(&MateaticaIAS);
	Newton.setDepFiliado(&FisicaCambridge);

	executar();

}

Principal::~Principal()
{
}

void Principal::executar()
{
	// quando o endl não é colocado no final, ele deixa escrever na mesma linha
	cout << "Digite a data atual (dia mes ano):" <<endl;
	cout << "Dia: ";
	cin >> diaAtual;
	cout << "Mes: ";
	cin >> mesAtual;
	cout << "Ano: ";
	cin >> anoAtual;
	
	// aqui é onde a idade é calculada, passando a data atual para o metodo calcular idade
	Simao.CalculaIdade(diaAtual, mesAtual, anoAtual);
	Einstain.CalculaIdade(diaAtual, mesAtual, anoAtual);
	Newton.CalculaIdade(diaAtual, mesAtual, anoAtual);
	Simao.ImprimeIdade();
	Einstain.ImprimeIdade();
	Newton.ImprimeIdade();
	Daniel.CalculaIdade(diaAtual, mesAtual, anoAtual);
	Daniel.ImprimeIdade();

	// aqui é onde é mostrado onde cada pessoa trabalha
	Simao.ondeTrabalha();
	Einstain.ondeTrabalha();
	Newton.ondeTrabalha();

	// aqui é onde é mostrado qual departamento cada pessoa trabalha
	Simao.qualDepTrabalha();
	Einstain.qualDepTrabalha();
	Newton.qualDepTrabalha();
}