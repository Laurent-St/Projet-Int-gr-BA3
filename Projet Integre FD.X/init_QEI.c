#include <xc.h>
#include <stdio.h>
#include <stdlib.h>

void init_QEI(void){
    
    //Droite, A: RP24 B:RP25
    QEI1CONbits.QEIM = 0; //on désactive pour pouvoir configurer et on va activer à la fin
    IEC3bits.QEI1IE = 0b0;  //on empêche les interruptions à modifier par la suite
    // le compteur a une valeur max par defaut
    
    //choix des pins
    RPINR14bits.QEA1R=24;
     RPINR14bits.QEB1R=25;
    
    //activation
    QEI1CONbits.QEIM = 0b101;   //activer les capteurs A & B ici on a décide de juste prendre le A pour commencer
    
    
    //Gauche, A: RP19 B:RP20
    QEI2CONbits.QEIM = 0; 
    IEC4bits.QEI2IE = 0b0;  
            
    RPINR16bits.QEA2R = 19;
    RPINR16bits.QEB2R = 20;
    
    //activation
    QEI2CONbits.QEIM = 0b101;   //activer les capteurs A & B ici on a décide de juste prendre le A pour commencer
    
}
