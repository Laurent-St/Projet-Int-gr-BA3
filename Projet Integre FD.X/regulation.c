#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include <init.h>
#include <deplacement.h>


void regulation(int fin){
    if(TMR3 <= 0.25){ //démarrage
                if (conversion_capteur_pos(POS1CNT) < pos_demarrage (TMR3)){
                    init();
                    init_PWM();
                    init_QEI();
                    T2CONbits.TON = 1; //démarrage timer et donc du moteur                    
                } else if (conversion_capteur_pos(POS1CNT) >= pos_demarrage (TMR3)){
                    OC3RS = 7500;
                    OC1RS = 7500;
                }
            }
            else if(0.25< TMR3 <= fin) {
                //prout
            }       
        }
