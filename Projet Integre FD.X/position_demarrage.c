
#include <xc.h>
#include <stdio.h>
#include <stdlib.h>

//Dans cette fonction on impl�mente la fonction donnant la position en fonction
// du temps � respecter ppour avoir le trap�ze des vitesse lors du d�marage
//cest une hyperbole

int pos_demarrage (int tps){
    return tps^2;
}