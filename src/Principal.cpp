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
	Christiano.InicializaP(17, 8, 1989, "Zeh Maria");
	Diego.InicializaP(6, 10, 1989, "Diego");
	
	//aqui setamos os nomes das universidades
	UTFPR.setNome("UTFPR");
	IAS.setNome("IAS");
	Cambridge.setNome("Cambridge");


	// Aqui as Universidades são associadas as pessoas, como ve simao é associado a UTFPR via
	//passagem por referencia do 'endereço' dela
	Simao.setUniFiliado(&UTFPR);
	Christiano.setUniFiliado(&UTFPR);
	Diego.setUniFiliado(&UTFPR);
	Einstain.setUniFiliado(&IAS);
	Newton.setUniFiliado(&Cambridge);

	// aqui setamos os nomes dos departamentos
	DAINF.setNomeDep("DAINF");
	MateaticaIAS.setNomeDep("Matematica");
	FisicaCambridge.setNomeDep("Fisica");
	ModaUFTPR.setNomeDep("Moda");
	TecnologiaUTFPR.setNomeDep("Tecnologia da UTFPR");

	//"Agregação" dos Departamentos as Universidades
	UTFPR.setDepts(&DAINF, 0);
	UTFPR.setDepts(&ModaUFTPR, 1);
	UTFPR.setDepts(&TecnologiaUTFPR, 2);
	IAS.setDepts(&MateaticaIAS, 0);
	Cambridge.setDepts(&FisicaCambridge, 0);

	// Filiação dos Departamentos as Pessoas
	Simao.setDepFiliado(&DAINF);
	Christiano.setDepFiliado(&ModaUFTPR);
	Diego.setDepFiliado(&TecnologiaUTFPR);
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
	Christiano.CalculaIdade(diaAtual, mesAtual, anoAtual);
	Diego.CalculaIdade(diaAtual, mesAtual, anoAtual);
	Einstain.CalculaIdade(diaAtual, mesAtual, anoAtual);
	Newton.CalculaIdade(diaAtual, mesAtual, anoAtual);
	Simao.ImprimeIdade();
	Einstain.ImprimeIdade();
	Newton.ImprimeIdade();

	// aqui é onde é mostrado onde cada pessoa trabalha
	Simao.ondeTrabalha();
	Christiano.ondeTrabalha();
	Diego.ondeTrabalha();
	Einstain.ondeTrabalha();
	Newton.ondeTrabalha();

	// aqui é onde é mostrado qual departamento cada pessoa trabalha
	Simao.qualDepTrabalha();
	Christiano.qualDepTrabalha();
	Diego.qualDepTrabalha();
	Einstain.qualDepTrabalha();
	Newton.qualDepTrabalha();
}