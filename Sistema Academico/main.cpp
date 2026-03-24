#include <stdio.h>

struct Pessoa{
    int dia, mes, ano, idade;
};

void Calc_Idade (struct Pessoa *p, int dia, int mes, int ano){
    //int idd = ano - p.ano;
    p->idade = ano - p->ano;
    if(p->mes > mes){
        //idd = idd - 1;
        p->idade = p->idade - 1;
    }
    else if (p->mes == mes){
        if (p->dia > dia){
            //idd = idd - 1;
            p->idade = p->idade - 1;
        }
    }
    //return idd;
    //return p.idade;
}

int main(){
    struct Pessoa Einstein, Newton;
    Einstein.dia = 14;
    Einstein.mes = 3;
    Einstein.ano = 1879;
    //Einstein.idade = -1;
    Newton.dia = 4;
    Newton.mes = 1;
    Newton.ano = 1643;
    //Newton.idade = -1;
    //Einstein.idade = Calc_Idade (Einstein, 10, 3, 2026);
    Calc_Idade (&Einstein, 10, 3, 2026);
    //Newton.idade = Calc_Idade (Newton, 10, 3, 2026);
    Calc_Idade (&Newton, 10, 3, 2026);
    printf("Einstein teria/faria %d anos em 2026 \n", Einstein.idade);
    printf("Newton teria/faria %d anos em 2026 \n", Newton.idade);
    getchar();
    return 0;
}
