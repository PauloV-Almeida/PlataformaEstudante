#include <stdio.h>

struct Pessoa{
    int dia;
    int mes;
    int ano;
    int idade;
};

int Calc_Idade (struct Pessoa p, int ano){
    int idd = ano - p.ano;
    return idd;
}

int main(){
    struct Pessoa Einstein, Newton;
    Einstein.dia = 14;
    Einstein.mes = 3;
    Einstein.ano = 1879;
    Newton.dia = 4;
    Newton.mes = 1;
    Newton.ano = 1643;
    Einstein.idade = Calc_Idade (Einstein, 2026);
    Newton.idade = Calc_Idade (Newton, 2026);
    printf("Einstein teria/faria %d anos em 2026 \n", Einstein.idade);
    printf("Newton teria/faria %d anos em 2026 \n", Newton.idade);
    getchar();
    return 0;
}
