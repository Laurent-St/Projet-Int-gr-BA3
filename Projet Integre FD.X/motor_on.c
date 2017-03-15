#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include "init_uart.h"
#include "init.h"
#include "init_PWM.h"
#include "init_QEI.h"

void motor_on(void){
    init();
    init_PWM();
    init_QEI();
    T2CONbits.TON = 1; //démarrage timer et donc du moteur                                   

}