#include <xc.h>
#include <stdio.h>
#include <stdlib.h>

void init_PWM(void){
//ROUE DROITE
    //initialisation du timer
    init_timer(2);
    
    //initialisation du PWM
    OC1CONbits.OCM=0b110; //on active le PWM
    OC1CONbits.OCTSEL=0; //correspond au timer2
    OC1R=8000;  //cf. page 30 où rapport cyclique delta=OC1R/(PR2+1) et ici on veut delta=0.28%
    OC1RS=8000;
    
    //lien entre le Output-Compare et le pin
    AD1PCFGL = 0x01FF; //met tous les pins en digital pour que la 2e roue tourne

    RPOR6bits.RP13R = 0b10010;
    RPOR6bits.RP12R = 0b10011;
    
    
//ROUE GAUCHE
    //initialisation du timer
    init_timer(3);
    
    //initialisation du PWM
    OC3CONbits.OCM=0b110; //on active le PWM
    OC3CONbits.OCTSEL=0; //correspond au timer2
    OC3R=7000;  //cf. page 30 où rapport cyclique delta=OC3R/(PR3+1) et ici on veut delta=0.32%
    OC3RS=7000;
    
//    RPOR9bits.RP18R = 0b10010;
//    RPOR6bits.RP12R = 0b10011;
 
    RPOR9bits.RP18R = 0b10100;
    RPOR6bits.RP12R = 0b10101;
}