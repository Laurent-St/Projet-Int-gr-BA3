
#include <xc.h>
#include <stdio.h>
#include <stdlib.h>

//Dans cette fonction on impl�mente la fonction donnant la position en fonction
// du temps � respecter pour avoir le trap�ze des vitesse lorsque l'on a atteint la vitesse de croisi�re
//cest une droite

int pos_croisiere (int tps){
    return 0.5*tps - 0.0625;
}