//#include <stdio.h>
#include "../include/Pessoa.h"

/*struct Pessoa{
    int diaP, mesP, anoP, idadeP;
    Pessoa (int diaNa, int mesNa, int anoNa){
        diaP = diaNa;
        mesP = mesNa;
        anoP = anoNa;
        idadeP = -1;
    }
    void Calc_Idade (int diaAT, int mesAT, int anoAT){
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
};*/

/*void Calc_Idade (struct Pessoa& p, int dia, int mes, int ano){
    //int idd = ano - p.ano;
    p.idade = ano - p.ano;
    if (p.mes > mes){
        //idd = idd - 1;
        p.idade = p.idade - 1;
    }
    else if (p.mes == mes){
        if (p.dia > dia){
            //idd = idd - 1;
            p.idade = p.idade - 1;
        }
    }
    //return idd;
    //return p.idade;
}*/

int main (){
    Pessoa Einstein (14, 3, 1879);
    Pessoa Newton (4, 1, 1643);
    //struct Pessoa Einstein, Newton;
    //Einstein.diaP = 14;
    //Einstein.mesP = 3;
    //Einstein.anoP = 1879;
    //Einstein.idade = -1;
    //Newton.diaP = 4;
    //Newton.mesP = 1;
    //Newton.anoP = 1643;
    //Newton.idade = -1;
    //Einstein.idade = Calc_Idade (Einstein, 10, 3, 2026);
    //Calc_Idade (Einstein, 10, 3, 2026);
    Einstein.Calc_Idade (10, 3, 2026);
    //Newton.idade = Calc_Idade (Newton, 10, 3, 2026);
    //Calc_Idade (Newton, 10, 3, 2026);
    Newton.Calc_Idade (10, 3, 2026);
    printf ("Einstein teria/faria %d anos em 2026 \n", Einstein.informaIdade ());
    printf ("Newton teria/faria %d anos em 2026 \n", Newton.informaIdade ());
    getchar ();
    return 0;
}
