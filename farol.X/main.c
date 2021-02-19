/*
 * File:   main.c
 * Author: 20185206
 *
 * Created on 19 de Fevereiro de 2021, 14:47
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "newsemaforo.h"

void main(void) 
{
    int estado = 0;
    int t; 
    while(1)
    {
        switch ( estado )
        {
            case 0:
                    estado = 1;
                    break;
            case 1:
                    newsemaforo_init();
                    estado = 2;
                    break;
            case 2:
                    amarelo(0);
                    vermelho(0);
                    verde(1);
                    verdePed(0);
                    vermelhoPed(1);
                    if (botaoPedestre() == 1 )
                    estado = 3;
                    break;
            case 3:
                    t = 3000;
                    estado = 4;
                    break;
            case 4:
                    _delay(1); 
                    --t;
                    if (t<=0)
                    estado = 5;    
                    break;
            case 5:
                    verde(0);
                    vermelho(0);
                    verdePed (0);        
                    amarelo (1);
                    vermelhoPed (1);
                    t = 2000;
                    estado = 6;
                    break;
            case 6:
                    _delay(1);
                    --t;
                    if (t<=0)
                    estado = 7;    
                    break;
            case 7:
                    verde (0);
                    amarelo(0);
                    vermelhoPed(0);
                    vermelho(1);
                    verdePed(1);
                    t = 4000;
                    break;
            case 8: 
                    _delay(1);
                    --t;
                    if (t<=0)
                    estado = 2;
            
                    break;
                    
        }        
    
    }
    
}
