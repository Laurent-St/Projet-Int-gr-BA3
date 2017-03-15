#include <xc.h>

void init_timer(int num_timer){
    
    if (num_timer ==1){
    
    } else if (num_timer ==2){
        T2CONbits.TCKPS=0b01; //prescaler mis à 8, la valeur rélle de PR2 est de 25000*8
        PR2=25000; //pour avoir + que 3 ms de période car période=PRy/FCy et FCy=40 MHz, donc t+ 5ms
        T2CONbits.TCS = 0;
        
    } else if (num_timer ==3){
        
        T3CONbits.TCKPS=0b01;
        PR3=25000; //pour avoir + que 3 ms de période car période=PRy/FCy et FCy=40 MHz
        T3CONbits.TCS = 0;
        
    } else if (num_timer ==4){
        
        
    }  else if (num_timer ==5){
        
    }
}
