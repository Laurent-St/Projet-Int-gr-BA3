#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float pi = 3.14159265358979323846264338327950288419716939937510582;

double conversion_capteur_pos (int fente){
    return (17/15) * pi * fente; //voir PV 4 (15/03/2017)
}
