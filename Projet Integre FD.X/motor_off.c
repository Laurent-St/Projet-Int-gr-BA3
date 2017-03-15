#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include "init_uart.h"
#include "init.h"
#include "init_PWM.h"
#include "init_QEI.h"

void motor_off(void){
    OC1RS = 7500;
    OC3RS = 7500;

}
