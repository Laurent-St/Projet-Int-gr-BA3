/* 
 * File:   init.h
 * Author: Labo
 *
 * Created on 15 février 2017, 16:35
 */

#ifndef INIT_H
#define	INIT_H

#ifdef	__cplusplus
extern "C" {
#endif

void init(void);
void Init_ADC(void);
void init_PWM(void);
void init_QEI(void);
void init_timer(int num_timer);
void init_uart(void);



#ifdef	__cplusplus
}
#endif

#endif	/* INIT_H */



