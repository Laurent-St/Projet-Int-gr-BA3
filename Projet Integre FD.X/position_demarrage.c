
#include <xc.h>
#include <stdio.h>
#include <stdlib.h>

//Dans cette fonction on implémente la fonction donnant la position en fonction
// du temps à respecter ppour avoir le trapèze des vitesse lors du démarage
//cest une hyperbole

int pos_demarrage (int tps){
    return tps^2;
}