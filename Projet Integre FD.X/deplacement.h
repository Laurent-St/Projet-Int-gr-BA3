/* 
 * File:   deplacement.h
 * Author: Labo
 *
 * Created on 15 mars 2017, 17:46
 */

#ifndef DEPLACEMENT_H
#define	DEPLACEMENT_H

#ifdef	__cplusplus
extern "C" {
#endif


void motor_on(void);
void motor_off(void);
int pos_croisiere (int tps);
int pos_demarrage (int tps);
double conversion_capteur_pos (int fente);


#ifdef	__cplusplus
}
#endif

#endif	/* DEPLACEMENT_H */
