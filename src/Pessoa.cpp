#include "../include/Pessoa.h"

Pessoa::Pessoa (int diaNa, int mesNa, int anoNa){
    diaP = diaNa;
    mesP = mesNa;
    anoP = anoNa;
    idadeP = -1;
}

void Pessoa::Calc_Idade (int diaAT, int mesAT, int anoAT){
    idadeP = anoAT - anoP;
    if (mesP > mesAT){
        idadeP --;
    }
    else if (mesP == mesAT){
        if (diaP > diaAT){
            idadeP --;
        }
    }
}

int Pessoa::informaIdade (){
    return idadeP;
}
