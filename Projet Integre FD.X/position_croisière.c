
#include <xc.h>
#include <stdio.h>
#include <stdlib.h>

//Dans cette fonction on implémente la fonction donnant la position en fonction
// du temps à respecter pour avoir le trapèze des vitesse lorsque l'on a atteint la vitesse de croisière
//cest une droite

int pos_croisiere (int tps){
    return 0.5*tps - 0.0625;
}